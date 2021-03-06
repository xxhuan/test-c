#testing the if statement
if date
then 
	echo "it worked"
fi

#testing a bad command
if asdfg
then 
	echo "it did not work"
fi
echo "we are outside of the if statement"

#testing multipple commands in the then statement
testuser=xxhuan
if grep $testuser /etc/passwd
then
	echo The bash files for user $testuser are: 
#	ls -a /home/$testuser/ *
fi

#testing the else section
testuser=badtest
if grep $testuser /etc/passwd
then
	echo The bash files for user $testuser are: 
	ls -a /home/$testuser/ *
else
	echo "The user name $testuser does not exist on this system"
fi

#testing numeric test
val1=10
val2=11
if [ $val1 -gt 5 ]
then 
	echo "the test value val1 is greater than 5"
fi

if [ $val1 -eq $val2 ]
then 
	echo "the values are equal"
else
	echo "the values are different"
fi

#testing string value
testuser=xxhuan
if [ $USER = $testuser ]
then 
	echo "welcome $testuser"
else
	echo "this is not $testuser"
fi

#testing string comp
val1=baseball
val2=hockey
if [ $val1 \> $val2 ]
then 
	echo "$val1 is greater than $val2"
else
	echo "$val1 is less than $val2"
fi

#testing string lenth
val1=testing
val2=''
if [ -n "$val1" ]
then 
	echo "the string '$val1' is not empty"
else 

	echo "the string '$val1' is empty"
fi

if [ -z "$val2" ]
then
	echo "the string '$val2' is empty"
else
	echo "the string '$val1' is not empty"
fi

if [ -z "$val3" ]
then
	echo "the string '$val3' is empty"
else
	echo "the string '$val3' is not empty"
fi

if [ '$val1' \> '$val2' ]
then 
	echo "$val1 is greater than $val2"
else
	echo "$val1 is less than $val2"
fi


#look before you leap
if [ -d $HOME ]
then
	echo "Your HOME directory exists"
	cd $HOME
	ls -a
#	touch test.txt
else
	echo "There is a problem with your HOME directory"
fi

#case testing
case $USER in
rich | barbara)
	echo "welcome $USER"
	echo "please enjoy your visit";;
xxhuan)
	echo "master ,welcome you back";;
*)
	echo "sorry you are not allowed here,byebye";;
esac


#for file test
for file in /home/xxhuan/*
do
	if [ -d ""$file ]
	then 
		echo "$file is a directory"
	elif [ -f "$file" ]
	then 
		echo "$file is a file"
	fi
done

#while test
var1=10
while [ $var1 -gt 0 ]
do
	echo $var1
	var1=$[ $var1 - 1 ]
done




