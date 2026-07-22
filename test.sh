#!/bin/sh
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/22 15:18:03 by kjurkows          #+#    #+#              #
#    Updated: 2026/07/22 15:18:19 by kjurkows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PRINTF_DIR=ft_printf

if [ -n "$1" ] && [ "$1" = "bonus" ]; then
	if [ -d $PRINTF_DIR ]; then
		make -C $PRINTF_DIR all > /dev/null
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
	if [ -d $PRINTF_DIR ]; then
		make -C $PRINTF_DIR bonus > /dev/null
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

make -C $PRINTF_DIR fclean > /dev/null
make fclean > /dev/null
