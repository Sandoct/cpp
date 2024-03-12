uppercaseName=$(printf '%s' "$1" | tr "a-z" "A-Z" )
# hpp file

echo "#ifndef ${uppercaseName}_HPP" > $1.hpp
echo "# define ${uppercaseName}_HPP" >> $1.hpp

echo "# include <iostream>" >> $1.hpp
echo "# include <string>" >> $1.hpp

printf "\n" >> $1.hpp

echo "// Class definition" >> $1.hpp

echo "class $1" >> $1.hpp
echo "{" >> $1.hpp

printf "\tprivate:\n" >> $1.hpp
c=1
for i in "${@:2}"; do
    if [ $((c%2)) -eq 0 ] 
    then
        printf "\t_$i;\n" >> $1.hpp
    else
        printf "\t\t$i" >> $1.hpp
    fi
    c=$((c+1))
done
echo " " >> $1.hpp
printf "\tpublic:\n" >> $1.hpp
echo "	// Constructor " >> $1.hpp
printf "\t\t$1(); \n" >> $1.hpp
printf "\t\t$1( const $1 &rhs); \n" >> $1.hpp
if [ $# -gt 2 ]
then
	printf "\t\t$1(" >> $1.hpp
	for i in "${@:2}"; do
		if [ $((c%2)) -eq 0 ]
		then
			j="$(tr "a-z" "A-Z" <<< ${i:0:1})${i:1}"
			printf "${prev} new$j" >> $1.hpp
			if [ $i != ${!#} ]
			then
				printf ", " >> $1.hpp
			else
				printf ");\n" >> $1.hpp
			fi
		else
			prev=$i
		fi
		c=$((c+1))
	done
fi
printf "\t\t~$1(); \n" >> $1.hpp
printf "\t\t$1& operator=( const $1 &rhs); \n" >> $1.hpp

echo "	// Getters " >> $1.hpp
for i in "${@:2}"; do
    if [ $((c%2)) -eq 0 ] 
    then
		j="$(tr "a-z" "A-Z" <<< ${i:0:1})${i:1}"
        echo "$j(); " >> $1.hpp
    else
        printf "\t\t$i get" >> $1.hpp
    fi
    c=$((c+1))
done

echo "	// Setters " >> $1.hpp
for i in "${@:2}"; do
    if [ $((c%2)) -eq 0 ] 
    then
		j="$(tr "a-z" "A-Z" <<< ${i:0:1})${i:1}"
        printf "\t\tvoid set$j(${prev} _$i); \n" >> $1.hpp

    else
        
        prev=$i
        
    fi
    c=$((c+1))
done
echo "	// Output " >> $1.hpp
printf "\t\tvoid output(); \n" >> $1.hpp

echo "}; " >> $1.hpp

echo " " >> $1.hpp

echo "#endif" >> $1.hpp

# cpp file #############################################################################
echo "#include \"$1.hpp\"" > $1.cpp
echo "// Constructor initializes attributes to 0 by default " >> $1.cpp
printf "\n$1::$1()" >> $1.cpp
first=true
for i in "${@:2}"; do
    if [ "$first" = true ]; then
        printf " : " >> $1.cpp
        first=false
    fi
    if [ $((c%2)) -eq 0 ]; then
        printf "_$i(0)" >> $1.cpp
		if [ $i != ${!#} ]; then
			printf ", " >> $1.cpp
		fi
    fi
    c=$((c+1))
done
printf "\n{\n\tstd::cout << \"$1 constructor called\" << std::endl;\n}\n\n" >> $1.cpp

echo "$1::$1( const $1& rhs)" >> $1.cpp
echo "{" >> $1.cpp
printf "\tstd::cout << \"$1 copy constructor called\" << std::endl;\n" >> $1.cpp
printf "\t*this = rhs;\n" >> $1.cpp
printf "}\n\n" >> $1.cpp

if [ $# -gt 2 ]
	then
		printf "$1::$1(" >> $1.cpp
		for i in "${@:2}"; do
			if [ $((c%2)) -eq 0 ]
			then
				j="$(tr "a-z" "A-Z" <<< ${i:0:1})${i:1}"
				printf "${prev} new$j" >> $1.cpp
				if [ $i != ${!#} ]
				then
					printf ", " >> $1.cpp
				else
					printf ") : " >> $1.cpp
				fi
			else
				prev=$i
			fi
			c=$((c+1))
		done
		for i in "${@:2}"; do
			if [ $((c%2)) -eq 0 ]
			then
				j="$(tr "a-z" "A-Z" <<< ${i:0:1})${i:1}"
				printf "_$i(new$j)" >> $1.cpp
				if [ $i != ${!#} ]
				then
					printf ", " >> $1.cpp
				else
					printf "\n{\n\n}\n\n" >> $1.cpp
				fi
			else
				prev=$i
			fi
			c=$((c+1))
		done
fi

printf "$1::~$1()\n{\n" >> $1.cpp
printf "\tstd::cout << \"$1 destructor called\" << std::endl;\n}\n\n" >> $1.cpp

printf "$1\t&$1::operator=( const $1& rhs )\n{\n" >> $1.cpp
printf "\t(void)rhs;\n" >> $1.cpp
printf "\treturn *this;\n" >> $1.cpp
printf "}\n\n" >> $1.cpp

echo "// Getters " >> $1.cpp
for i in "${@:2}"; do
    if [ $((c%2)) -eq 0 ] 
    then
		j="$(tr "a-z" "A-Z" <<< ${i:0:1})${i:1}"
        printf "\t$prev $1::get$j() { return _$i; }\n" >> $1.cpp
        

    else
        
        prev=$i
    fi
    c=$((c+1))
done

echo " " >> $1.cpp
echo "// Setters " >> $1.cpp
for i in "${@:2}"; do
    if [ $((c%2)) -eq 0 ] 
    then
		j="$(tr "a-z" "A-Z" <<< ${i:0:1})${i:1}"
        printf "\tvoid $1::set$j($prev new$j) { _$i = new$j; }\n" >> $1.cpp

    else
        
        prev=$i
    fi
    c=$((c+1))
done

echo " " >> $1.cpp
echo "// Output" >> $1.cpp
printf "\tvoid $1::output()\n{" >> $1.cpp

for i in "${@:2}"; do
    if [ $((c%2)) -eq 0 ] 
    then
        printf "\tstd::cout << \"$i : \" << _$i << std::endl;\n" >> $1.cpp
    fi
    c=$((c+1))
done

echo "}" >> $1.cpp

echo " " >> $1.cpp

