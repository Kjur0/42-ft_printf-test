/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %u.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:17:18 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/03 15:52:12 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main.hpp"

TEST(u, basic)
{
	const char			*fmt = "%u";
	const unsigned int	num = 42;

	::testing::internal::CaptureStdout();
	const int			c_ret = printf(fmt, num);
	const string		c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret = ft_printf(fmt, num);
	const string		ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}
