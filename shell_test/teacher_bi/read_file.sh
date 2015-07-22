id=`sed '/^LV Name^/!d;s/.*=//' testfile.txt`
ip=`sed '/^LV Status^/!d;s/.*=//' testfile.txt`
name=`sed '/^LV Size^/!d;s/.*=//' testfile.txt`
echo $id
echo $ip
echo $name
