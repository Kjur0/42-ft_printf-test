/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %u.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:17:18 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/22 14:05:52 by kjurkows         ###   ########.fr       */
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

TEST(u, minmax) {
	const char			*fmt = "%u";
	const unsigned int	num1 = 0;
	const unsigned int	num2 = UINT_MAX;

	::testing::internal::CaptureStdout();
	const int			c_ret1 = printf(fmt, num1);
	const string		c_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret1 = ft_printf(fmt, num1);
	const string		ft_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_ret2 = printf(fmt, num2);
	const string		c_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret2 = ft_printf(fmt, num2);
	const string		ft_output2 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output1, ft_output1);
	EXPECT_EQ(c_ret1, ft_ret1);
	EXPECT_EQ(c_output2, ft_output2);
	EXPECT_EQ(c_ret2, ft_ret2);
}
