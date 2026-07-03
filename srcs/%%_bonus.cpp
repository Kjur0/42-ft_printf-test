/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %%_bonus.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 16:06:57 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/03 16:22:13 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main.hpp"

TEST(percent_bonus, width)
{
	const char		*fmt = "%20%";

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, nullptr);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, nullptr);
	const string	ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}
