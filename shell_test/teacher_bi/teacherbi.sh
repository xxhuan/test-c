#!/bin/bash
while read line
do

	name=`echo $line |sed '/^LV Name/!d;s/.*vg01//' `
	size=`echo $line |sed '/^LV Size/!d;s/.*(Mbytes)//' `
	if [ -n "$name" ];then
		realname=$name
	fi

	if [ -n "$size" ];then
		realsize=$size
	fi
	#	echo "["$realname"]"
	#	echo "("$realsize")"
	if [ -n "$realname" ];then
		if [ -n "$realsize" ];then
			echo "lvcreate -L $realname -n $realsize vg01 "
			realname=""
			realsize=""
		fi
	fi
done < vgoutput.txt
