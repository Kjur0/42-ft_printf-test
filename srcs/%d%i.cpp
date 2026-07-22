/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %d%i.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:17:18 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/22 14:32:25 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main.hpp"

TEST(di, basic)
{
	const char		*fmtd = "%d";
	const char		*fmti = "%i";
	const int		num = 42;

	::testing::internal::CaptureStdout();
	const int		c_retd = printf(fmtd, num);
	const string	c_outputd = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd = ft_printf(fmtd, num);
	const string	ft_outputd = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti = printf(fmti, num);
	const string	c_outputi = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti = ft_printf(fmti, num);
	const string	ft_outputi = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_outputd, ft_outputd);
	EXPECT_EQ(c_retd, ft_retd);
	EXPECT_EQ(c_outputi, ft_outputi);
	EXPECT_EQ(c_reti, ft_reti);
}

TEST(di, minmax)
{
	const char		*fmtd = "%d";
	const char		*fmti = "%i";
	const int		num1 = INT_MIN;
	const int		num2 = INT_MAX;

	::testing::internal::CaptureStdout();
	const int		c_retd1 = printf(fmtd, num1);
	const string	c_outputd1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd1 = ft_printf(fmtd, num1);
	const string	ft_outputd1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_retd2 = printf(fmtd, num2);
	const string	c_outputd2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd2 = ft_printf(fmtd, num2);
	const string	ft_outputd2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti1 = printf(fmti, num1);
	const string	c_outputi1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti1 = ft_printf(fmti, num1);
	const string	ft_outputi1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti2 = printf(fmti, num2);
	const string	c_outputi2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti2 = ft_printf(fmti, num2);
	const string	ft_outputi2 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_outputd1, ft_outputd1);
	EXPECT_EQ(c_retd1, ft_retd1);
	EXPECT_EQ(c_outputd2, ft_outputd2);
	EXPECT_EQ(c_retd2, ft_retd2);
	EXPECT_EQ(c_outputi1, ft_outputi1);
	EXPECT_EQ(c_reti1, ft_reti1);
	EXPECT_EQ(c_outputi2, ft_outputi2);
	EXPECT_EQ(c_reti2, ft_reti2);
}
