#!/bin/bash
#Initial input checking	
if [ "$1" = "-r" ]; then
	echo Will calculate rows
elif [ "$1" = "-c" ]; then
	echo will calculate columns
else 
	echo Invalid input
fi

