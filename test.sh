#!/bin/sh

if [ -n "$1" ] && [ "$1" = "bonus" ]; then
	if [ -d ft_printf ]; then
		make -C ft_printf fclean > /dev/null
		if [ $? -ne 0 ]; then
			echo "Build failed."
			exit 1
		fi
	fi
	make bonus > /dev/null
	if [ $? -ne 0 ]; then
		echo "Build failed."
		exit 1
	fi
else
	if [ -d ft_printf ]; then
		make -C ft_printf fclean > /dev/null
		if [ $? -ne 0 ]; then
			echo "Build failed."
			exit 1
		fi
	fi
	make > /dev/null
	if [ $? -ne 0 ]; then
		echo "Build failed."
		exit 1
	fi
fi

./ft_printf-test

make fclean > /dev/null
