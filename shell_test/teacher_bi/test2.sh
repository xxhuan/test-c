#while read line;do
#	eval "$line"
#done < 1test.txt
name=`sed '/^LV Name/!d;s/.*Name//' 1test.txt`
size=`sed '/^LV Size/!d;s/.*(Mbytes)//' 1test.txt`
echo $name
echo $size

