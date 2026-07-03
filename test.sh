#!/bin/sh

if [ -n "$1" ] && [ "$1" = "bonus" ]; then
	make bonus > /dev/null
	if [ $? -ne 0 ]; then
		echo "Build failed."
		exit 1
	fi
else
	make > /dev/null
	if [ $? -ne 0 ]; then
		echo "Build failed."
		exit 1
	fi
fi

./ft_printf-test

make fclean > /dev/null
