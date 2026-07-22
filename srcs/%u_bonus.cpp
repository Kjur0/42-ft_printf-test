/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %u_bonus.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:52:18 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/22 14:41:08 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main.hpp"



TEST(u_bonus, align_right)
{
	const char			*fmt = "%20u";
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

TEST(u_bonus, align_left)
{
	const char			*fmt = "%-20u";
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

TEST(u_bonus, less_width)
{
	const char			*fmt = "%1u";
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

TEST(u_bonus, precision)
{
	const char			*fmt1 = "%.5u";
	const char			*fmt2 = "%.10u";
	const char			*fmt3 = "%10.5u";
	const char			*fmt4 = "%-10.5u";
	const char			*fmt5 = "%.u";
	const unsigned int	num = 42;

	::testing::internal::CaptureStdout();
	const int			c_ret1 = printf(fmt1, num);
	const string		c_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret1 = ft_printf(fmt1, num);
	const string		ft_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_ret2 = printf(fmt2, num);
	const string		c_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret2 = ft_printf(fmt2, num);
	const string		ft_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_ret3 = printf(fmt3, num);
	const string		c_output3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret3 = ft_printf(fmt3, num);
	const string		ft_output3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_ret4 = printf(fmt4, num);
	const string		c_output4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret4 = ft_printf(fmt4, num);
	const string		ft_output4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_ret5 = printf(fmt5, num);
	const string		c_output5 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret5 = ft_printf(fmt5, num);
	const string		ft_output5 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output1, ft_output1);
	EXPECT_EQ(c_ret1, ft_ret1);
	EXPECT_EQ(c_output2, ft_output2);
	EXPECT_EQ(c_ret2, ft_ret2);
	EXPECT_EQ(c_output3, ft_output3);
	EXPECT_EQ(c_ret3, ft_ret3);
	EXPECT_EQ(c_output4, ft_output4);
	EXPECT_EQ(c_ret4, ft_ret4);
	EXPECT_EQ(c_output5, ft_output5);
	EXPECT_EQ(c_ret5, ft_ret5);
}

TEST(u_bonus, 0)
{
	const char			*fmt = "%020u";
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

TEST(u_bonus, plus_space)
{
	const char			*fmt1 = "%+u";
	const char			*fmt2 = "% u";
	const char			*fmt3 = "% +u";
	const unsigned int	num = 42;

	::testing::internal::CaptureStdout();
	const int			c_ret1 = printf(fmt1, num);
	const string		c_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret1 = ft_printf(fmt1, num);
	const string		ft_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_ret2 = printf(fmt2, num);
	const string		c_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret2 = ft_printf(fmt2, num);
	const string		ft_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_ret3 = printf(fmt3, num);
	const string		c_output3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret3 = ft_printf(fmt3, num);
	const string		ft_output3 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output1, ft_output1);
	EXPECT_EQ(c_ret1, ft_ret1);
	EXPECT_EQ(c_output2, ft_output2);
	EXPECT_EQ(c_ret2, ft_ret2);
	EXPECT_EQ(c_output3, ft_output3);
	EXPECT_EQ(c_ret3, ft_ret3);
}

TEST(u_bonus, mixed)
{
	const char			*fmt = "% -020.10u";
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

TEST(u_bonus, value0)
{
	const char			*fmt1 = "%u";
	const char			*fmt2 = "%.0u";
	const char			*fmt3 = "%.5u";
	const unsigned int	num = 0;

	::testing::internal::CaptureStdout();
	const int			c_ret1 = printf(fmt1, num);
	const string		c_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret1 = ft_printf(fmt1, num);
	const string		ft_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_ret2 = printf(fmt2, num);
	const string		c_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret2 = ft_printf(fmt2, num);
	const string		ft_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_ret3 = printf(fmt3, num);
	const string		c_output3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_ret3 = ft_printf(fmt3, num);
	const string		ft_output3 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output1, ft_output1);
	EXPECT_EQ(c_ret1, ft_ret1);
	EXPECT_EQ(c_output2, ft_output2);
	EXPECT_EQ(c_ret2, ft_ret2);
	EXPECT_EQ(c_output3, ft_output3);
	EXPECT_EQ(c_ret3, ft_ret3);
}
