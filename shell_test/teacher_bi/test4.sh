#!/bin/bash
cat 1test.txt | while read line
      do
	      if [[ $line = ~ LV Name.* ]];then
		      x =${line#vg01} 
	      fi
	      if [[ $line = ~ LV Size (Mbytes).* ]];then
		      y=${line#(Mbytes)} 
	      fi

	      echo "lvcreate -L $y -n $x vg01 "
