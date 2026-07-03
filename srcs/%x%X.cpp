/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %x%X.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:00:30 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/03 15:52:32 by kjurkows         ###   ########.fr       */
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
