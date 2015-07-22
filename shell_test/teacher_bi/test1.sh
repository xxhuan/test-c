id=`sed '/^LV ID/!d;s/.*ID//' urfile`
ip=`sed '/^LV IP/!d;s/.*IP//' urfile`
name=`sed '/^LV Name/!d;s/.*Name//' urfile`
echo $id
echo $ip
echo $name
