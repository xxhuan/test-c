#!/bin/bash
#test trap signal
echo "test for trap"
trap "echo 'sorry! I have trapped ctrl+c '" SIGINT SIGTERM
count=1
while [ $count -le 10 ]
do
	echo "loop #$count"
	sleep 5
	count=$[ $count + 1 ]
done
echo

