/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %p.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 17:04:07 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/22 14:31:03 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main.hpp"

TEST(p, basic)
{
	const char		*fmt = "%p";
	const void		*ptr = (void *)0x12345678;

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, ptr);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, ptr);
	const string	ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}

TEST(p, null)
{
	const char		*fmt = "%p";
	const void		*ptr = nullptr;

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, ptr);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, ptr);
	const string	ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}

TEST(p, minmax)
{
	const char		*fmt = "%p";
	const void		*ptr1 = (void *)0;
	const void		*ptr2 = (void *)SIZE_MAX;

	::testing::internal::CaptureStdout();
	const int		c_ret1 = printf(fmt, ptr1);
	const string	c_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret1 = ft_printf(fmt, ptr1);
	const string	ft_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret2 = printf(fmt, ptr2);
	const string	c_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret2 = ft_printf(fmt, ptr2);
	const string	ft_output2 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output1, ft_output1);
	EXPECT_EQ(c_ret1, ft_ret1);
	EXPECT_EQ(c_output2, ft_output2);
	EXPECT_EQ(c_ret2, ft_ret2);
}
