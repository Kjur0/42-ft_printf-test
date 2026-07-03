/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %p_bonus.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:51:40 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/03 15:51:44 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main.hpp"



TEST(p_bonus, align_right)
{
	const char		*fmt = "%20p";
	const void		*ptr = (void *)0x12345678;
	const void		*ptr_null = nullptr;

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, ptr);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, ptr);
	const string	ft_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret_null = printf(fmt, ptr_null);
	const string	c_output_null = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret_null = ft_printf(fmt, ptr_null);
	const string	ft_output_null = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
	EXPECT_EQ(c_output_null, ft_output_null);
	EXPECT_EQ(c_ret_null, ft_ret_null);
}

TEST(p_bonus, align_left)
{
	const char		*fmt = "%-20p";
	const void		*ptr = (void *)0x12345678;
	const void		*ptr_null = nullptr;

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, ptr);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, ptr);
	const string	ft_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret_null = printf(fmt, ptr_null);
	const string	c_output_null = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret_null = ft_printf(fmt, ptr_null);
	const string	ft_output_null = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
	EXPECT_EQ(c_output_null, ft_output_null);
	EXPECT_EQ(c_ret_null, ft_ret_null);
}

TEST(p_bonus, less_width)
{
	const char		*fmt = "%2p";
	const void		*ptr = (void *)0x12345678;
	const void		*ptr_null = nullptr;

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, ptr);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, ptr);
	const string	ft_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret_null = printf(fmt, ptr_null);
	const string	c_output_null = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret_null = ft_printf(fmt, ptr_null);
	const string	ft_output_null = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
	EXPECT_EQ(c_output_null, ft_output_null);
	EXPECT_EQ(c_ret_null, ft_ret_null);
}

TEST(p_bonus, precision)
{
	const char		*fmt1 = "%.10p";
	const char		*fmt2 = "%.20p";
	const char		*fmt3 = "%20.10p";
	const char		*fmt4 = "%-20.10p";
	const char		*fmt5 = "%.p";
	const void		*ptr = (void *)0x12345678;

	::testing::internal::CaptureStdout();
	const int		c_ret1 = printf(fmt1, ptr);
	const string	c_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret1 = ft_printf(fmt1, ptr);
	const string	ft_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret2 = printf(fmt2, ptr);
	const string	c_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret2 = ft_printf(fmt2, ptr);
	const string	ft_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret3 = printf(fmt3, ptr);
	const string	c_output3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret3 = ft_printf(fmt3, ptr);
	const string	ft_output3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret4 = printf(fmt4, ptr);
	const string	c_output4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret4 = ft_printf(fmt4, ptr);
	const string	ft_output4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret5 = printf(fmt5, ptr);
	const string	c_output5 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret5 = ft_printf(fmt5, ptr);
	const string	ft_output5 = ::testing::internal::GetCapturedStdout();

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

TEST(p_bonus, 0)
{
	const char		*fmt = "%020p";
	const void		*ptr = (void *)0x20;

	::testing::internal::CaptureStdout();
	const int		c_ret = printf(fmt, ptr);
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf(fmt, ptr);
	const string	ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}

TEST(p_bonus, plus_space)
{
	const char		*fmt1 = "%+p";
	const char		*fmt2 = "% p";
	const char		*fmt3 = "% +p";
	const void		*ptr = (void *)0x12345678;

	::testing::internal::CaptureStdout();
	const int		c_ret1 = printf(fmt1, ptr);
	const string	c_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret1 = ft_printf(fmt1, ptr);
	const string	ft_output1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret2 = printf(fmt2, ptr);
	const string	c_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret2 = ft_printf(fmt2, ptr);
	const string	ft_output2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_ret3 = printf(fmt3, ptr);
	const string	c_output3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret3 = ft_printf(fmt3, ptr);
	const string	ft_output3 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output1, ft_output1);
	EXPECT_EQ(c_ret1, ft_ret1);
	EXPECT_EQ(c_output2, ft_output2);
	EXPECT_EQ(c_ret2, ft_ret2);
	EXPECT_EQ(c_output3, ft_output3);
	EXPECT_EQ(c_ret3, ft_ret3);
}

TEST(p_bonus, mixed)
{
	const char		*fmt = "% -020.10p";
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
