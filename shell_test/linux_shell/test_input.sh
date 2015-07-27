#!/bin/bash
#test $* and $@
echo "test \$* and \$@"
count=1
for param in "$*"
do 
	echo "\$* parameter #$count = $param"
	count=$[ $count + 1 ]
done

count=1
for param in "$@"
do
	echo "\$@ parameter #$count = $param"
	count=$[ $count + 1 ]
done

echo ''

#test input 
echo "test option and parameter and getopt"
set -- `getopt -q a:b:c "$@"`
while [ -n "$1" ]
do
	case "$1" in
	-a) param="$2"
		echo "found the -a option,with parameter value $param"
		shift;;
	-b) param="$2"
		echo "found the -b option,with parameter value $param"
		shift;;
	-c) echo "found the -c option";;
	--) shift
		break;;
	*) echo "$1 is not an option";;
	esac
	shift
done

count=1
for param in "$@"
do
	echo "parameter #$count: $param"
	count=$[ $count + 1 ]
done

echo ''
























