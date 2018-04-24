#! /bin/bash
if [ "$1" == "--verbose" ] || [ "$1" == "-v" ]; then
	gcc Nice.c -o Nice
else
	gcc Nice.c -o Nice >& /dev/null
fi

if [ ! -f "Nice" ]; then
	echo "Failed to produce 'Nice'"
else
	chmod +x "Nice"
fi

