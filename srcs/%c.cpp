/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %c.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 16:38:17 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/01 19:01:12 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main.hpp"

TEST(c, basic)
{
	const char		*fmt = "%c";
	const char		c = 'a';

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, c);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, c);
	const string	ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}

TEST(c_bonus, align_right)
{
	const char		*fmt = "%5c";
	const char		c = 'a';

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, c);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, c);
	const string	ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}

TEST(c_bonus, align_left)
{
	const char		*fmt = "%-5c";
	const char		c = 'a';

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, c);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, c);
	const string	ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}

TEST(c_bonus, less_width)
{
	const char		*fmt = "%0c";
	const char		c = 'a';

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, c);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, c);
	const string	ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}
