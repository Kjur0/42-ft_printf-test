/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %x%X.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:00:30 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/22 14:14:06 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main.hpp"

TEST(x, basic)
{
	const char			*fmtx = "%x";
	const char			*fmtX = "%X";
	const unsigned int	num = 0x42;

	::testing::internal::CaptureStdout();
	const int			c_retx = printf(fmtx, num);
	const string		c_outputx = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx = ft_printf(fmtx, num);
	const string		ft_outputx = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX = printf(fmtX, num);
	const string		c_outputX = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX = ft_printf(fmtX, num);
	const string		ft_outputX = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_outputx, ft_outputx);
	EXPECT_EQ(c_retx, ft_retx);
	EXPECT_EQ(c_outputX, ft_outputX);
	EXPECT_EQ(c_retX, ft_retX);
}

TEST(x, minmax)
{
	const char 			*fmtx = "%x";
	const char			*fmtX = "%X";
	const unsigned int	num1 = 0;
	const unsigned int	num2 = UINT_MAX;

	::testing::internal::CaptureStdout();
	const int			c_retx1 = printf(fmtx, num1);
	const string		c_outputx1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx1 = ft_printf(fmtx, num1);
	const string		ft_outputx1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx2 = printf(fmtx, num2);
	const string		c_outputx2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx2 = ft_printf(fmtx, num2);
	const string		ft_outputx2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX1 = printf(fmtX, num1);
	const string		c_outputX1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX1 = ft_printf(fmtX, num1);
	const string		ft_outputX1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX2 = printf(fmtX, num2);
	const string		c_outputX2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX2 = ft_printf(fmtX, num2);
	const string		ft_outputX2 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_outputx1, ft_outputx1);
	EXPECT_EQ(c_retx1, ft_retx1);
	EXPECT_EQ(c_outputx2, ft_outputx2);
	EXPECT_EQ(c_retx2, ft_retx2);
	EXPECT_EQ(c_outputX1, ft_outputX1);
	EXPECT_EQ(c_retX1, ft_retX1);
	EXPECT_EQ(c_outputX2, ft_outputX2);
	EXPECT_EQ(c_retX2, ft_retX2);
}
