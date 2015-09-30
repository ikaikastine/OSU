#!/bin/bash
#Initial input checking	
if [ "$1" = "-r" ]; then
	echo Will calculate rows
elif [ "$1" = "-c" ]; then
	echo will calculate columns
else 
	echo "Usage: stats {-rows|-cols} [input_file]"
fi

count=0;
total=0;

for i in $( awk '{ print $1; }' test_file )
	do 
		total=$(echo $total+$i | bc )
		((count++))
	done
echo "scale=2; $total / $count" | bc
