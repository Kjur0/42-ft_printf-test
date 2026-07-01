#!/bin/sh

make > /dev/null
if [ $? -ne 0 ]; then
	echo "Build failed."
	exit 1
fi
./bin/ft_printf-test
