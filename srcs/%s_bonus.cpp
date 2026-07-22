/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %s_bonus.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:51:59 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/22 14:35:10 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main.hpp"


TEST(s_bonus, align_right)
{
	const char		*fmt = "%20s";
	const char		*str = "Hello, World!";

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, str);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, str);
	const string	ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}

TEST(s_bonus, align_left)
{
	const char		*fmt = "%-20s";
	const char		*str = "Hello, World!";

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, str);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, str);
	const string	ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}

TEST(s_bonus, less_width)
{
	const char		*fmt = "%5s";
	const char		*str = "Hello, World!";

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, str);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, str);
	const string	ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}

TEST(s_bonus, precision)
{
	const char		*fmt1 = "%.5s";
	const char		*fmt2 = "%20.5s";
	const char		*fmt3 = "%-20.5s";
	const char		*fmt4 = "%.20s";
	const char		*str = "Hello, World!";

	::testing::internal::CaptureStdout();
	const int		c_ret1 = printf(fmt1, str);
	const string	c_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret1 = ft_printf(fmt1, str);
	const string	ft_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret2 = printf(fmt2, str);
	const string	c_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret2 = ft_printf(fmt2, str);
	const string	ft_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret3 = printf(fmt3, str);
	const string	c_output3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret3 = ft_printf(fmt3, str);
	const string	ft_output3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret4 = printf(fmt4, str);
	const string	c_output4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret4 = ft_printf(fmt4, str);
	const string	ft_output4 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output1, ft_output1);
	EXPECT_EQ(c_ret1, ft_ret1);
	EXPECT_EQ(c_output2, ft_output2);
	EXPECT_EQ(c_ret2, ft_ret2);
	EXPECT_EQ(c_output3, ft_output3);
	EXPECT_EQ(c_ret3, ft_ret3);
	EXPECT_EQ(c_output4, ft_output4);
	EXPECT_EQ(c_ret4, ft_ret4);
}

TEST(s_bonus, null_precision)
{
	const char		*fmt1 = "%s";
	const char		*fmt2 = "%.0s";
	const char		*fmt3 = "%.2s";
	const char		*fmt4 = "%.6s";
	const char		*str = NULL;

	::testing::internal::CaptureStdout();
	const int		c_ret1 = printf(fmt1, str);
	const string	c_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret1 = ft_printf(fmt1, str);
	const string	ft_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret2 = printf(fmt2, str);
	const string	c_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret2 = ft_printf(fmt2, str);
	const string	ft_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret3 = printf(fmt3, str);
	const string	c_output3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret3 = ft_printf(fmt3, str);
	const string	ft_output3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret4 = printf(fmt4, str);
	const string	c_output4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret4 = ft_printf(fmt4, str);
	const string	ft_output4 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output1, ft_output1);
	EXPECT_EQ(c_ret1, ft_ret1);
	EXPECT_EQ(c_output2, ft_output2);
	EXPECT_EQ(c_ret2, ft_ret2);
	EXPECT_EQ(c_output3, ft_output3);
	EXPECT_EQ(c_ret3, ft_ret3);
	EXPECT_EQ(c_output4, ft_output4);
	EXPECT_EQ(c_ret4, ft_ret4);
}
