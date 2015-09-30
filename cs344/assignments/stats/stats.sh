#!/bin/bash
echo This will calculate your stats
	if [ "$1" = "-r" ]; then
		echo Will calculate rows
	elif [ "$1" = "-c" ]; then
		echo will calculate columns
	else 
		echo Invalid input
	fi

