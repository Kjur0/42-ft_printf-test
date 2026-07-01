/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:28:03 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/19 19:28:44 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <gtest/gtest.h>
#include <stdio.h>

using std::string;

extern "C" {
	#define new n
	#include <ft_printf.h>
	#undef new
}
