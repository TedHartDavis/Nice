#! /bin/bash
if [ "$1" == "--verbose" ] || [ "$1" == "-v" ]; then
	gcc Nice.c
else
	gcc Nice.c -0 Nice >& /dev/null
fi

if [ ! -f "Nice" ]; then
	echo "Failed to produce 'Nice'"
else
	chmod +x "Nice"
fi

