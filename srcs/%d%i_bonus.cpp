/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %d%i_bonus.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:51:06 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/22 14:39:40 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main.hpp"



TEST(di_bonus, align_right)
{
	const char		*fmtd = "%20d";
	const char		*fmti = "%20i";
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

TEST(di_bonus, align_left)
{
	const char		*fmtd = "%-20d";
	const char		*fmti = "%-20i";
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

TEST(di_bonus, less_width)
{
	const char		*fmtd = "%1d";
	const char		*fmti = "%1i";
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

TEST(di_bonus, precision)
{
	const char		*fmtd1 = "%.5d";
	const char		*fmti1 = "%.5i";
	const char		*fmtd2 = "%.10d";
	const char		*fmti2 = "%.10i";
	const char		*fmtd3 = "%10.5d";
	const char		*fmti3 = "%10.5i";
	const char		*fmtd4 = "%-10.5d";
	const char		*fmti4 = "%-10.5i";
	const char		*fmtd5 = "%.d";
	const char		*fmti5 = "%.i";
	const int		num = 42;

	::testing::internal::CaptureStdout();
	const int		c_retd1 = printf(fmtd1, num);
	const string	c_outputd1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd1 = ft_printf(fmtd1, num);
	const string	ft_outputd1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti1 = printf(fmti1, num);
	const string	c_outputi1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti1 = ft_printf(fmti1, num);
	const string	ft_outputi1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_retd2 = printf(fmtd2, num);
	const string	c_outputd2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd2 = ft_printf(fmtd2, num);
	const string	ft_outputd2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti2 = printf(fmti2, num);
	const string	c_outputi2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti2 = ft_printf(fmti2, num);
	const string	ft_outputi2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_retd3 = printf(fmtd3, num);
	const string	c_outputd3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd3 = ft_printf(fmtd3, num);
	const string	ft_outputd3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti3 = printf(fmti3, num);
	const string	c_outputi3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti3 = ft_printf(fmti3, num);
	const string	ft_outputi3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_retd4 = printf(fmtd4, num);
	const string	c_outputd4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd4 = ft_printf(fmtd4, num);
	const string	ft_outputd4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti4 = printf(fmti4, num);
	const string	c_outputi4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti4 = ft_printf(fmti4, num);
	const string	ft_outputi4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_retd5 = printf(fmtd5, num);
	const string	c_outputd5 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd5 = ft_printf(fmtd5, num);
	const string	ft_outputd5 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti5 = printf(fmti5, num);
	const string	c_outputi5 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti5 = ft_printf(fmti5, num);
	const string	ft_outputi5 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_outputd1, ft_outputd1);
	EXPECT_EQ(c_retd1, ft_retd1);
	EXPECT_EQ(c_outputi1, ft_outputi1);
	EXPECT_EQ(c_reti1, ft_reti1);
	EXPECT_EQ(c_outputd2, ft_outputd2);
	EXPECT_EQ(c_retd2, ft_retd2);
	EXPECT_EQ(c_outputi2, ft_outputi2);
	EXPECT_EQ(c_reti2, ft_reti2);
	EXPECT_EQ(c_outputd3, ft_outputd3);
	EXPECT_EQ(c_retd3, ft_retd3);
	EXPECT_EQ(c_outputi3, ft_outputi3);
	EXPECT_EQ(c_reti3, ft_reti3);
	EXPECT_EQ(c_outputd4, ft_outputd4);
	EXPECT_EQ(c_retd4, ft_retd4);
	EXPECT_EQ(c_outputi4, ft_outputi4);
	EXPECT_EQ(c_reti4, ft_reti4);
	EXPECT_EQ(c_outputd5, ft_outputd5);
	EXPECT_EQ(c_retd5, ft_retd5);
	EXPECT_EQ(c_outputi5, ft_outputi5);
	EXPECT_EQ(c_reti5, ft_reti5);
}

TEST(di_bonus, 0)
{
	const char		*fmtd = "%020d";
	const char		*fmti = "%020i";
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

TEST(di_bonus, plus_space)
{
	const char		*fmtd1 = "%+d";
	const char		*fmti1 = "%+i";
	const char		*fmtd2 = "% d";
	const char		*fmti2 = "% i";
	const char		*fmtd3 = "% +d";
	const char		*fmti3 = "% +i";
	const int		num = 42;

	::testing::internal::CaptureStdout();
	const int		c_retd1 = printf(fmtd1, num);
	const string	c_outputd1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd1 = ft_printf(fmtd1, num);
	const string	ft_outputd1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti1 = printf(fmti1, num);
	const string	c_outputi1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti1 = ft_printf(fmti1, num);
	const string	ft_outputi1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_retd2 = printf(fmtd2, num);
	const string	c_outputd2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd2 = ft_printf(fmtd2, num);
	const string	ft_outputd2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti2 = printf(fmti2, num);
	const string	c_outputi2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti2 = ft_printf(fmti2, num);
	const string	ft_outputi2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_retd3 = printf(fmtd3, num);
	const string	c_outputd3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd3 = ft_printf(fmtd3, num);
	const string	ft_outputd3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti3 = printf(fmti3, num);
	const string	c_outputi3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti3 = ft_printf(fmti3, num);
	const string	ft_outputi3 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_outputd1, ft_outputd1);
	EXPECT_EQ(c_retd1, ft_retd1);
	EXPECT_EQ(c_outputi1, ft_outputi1);
	EXPECT_EQ(c_reti1, ft_reti1);
	EXPECT_EQ(c_outputd2, ft_outputd2);
	EXPECT_EQ(c_retd2, ft_retd2);
	EXPECT_EQ(c_outputi2, ft_outputi2);
	EXPECT_EQ(c_reti2, ft_reti2);
	EXPECT_EQ(c_outputd3, ft_outputd3);
	EXPECT_EQ(c_retd3, ft_retd3);
	EXPECT_EQ(c_outputi3, ft_outputi3);
	EXPECT_EQ(c_reti3, ft_reti3);
}

TEST(di_bonus, mixed)
{
	const char		*fmtd = "% -020.10d";
	const char		*fmti = "% -020.10i";
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

TEST(di_bonus, value0)
{
	const char		*fmtd1 = "%d";
	const char		*fmti1 = "%i";
	const char		*fmtd2 = "%.0d";
	const char		*fmti2 = "%.0i";
	const char		*fmtd3 = "%.5d";
	const char		*fmti3 = "%.5i";
	const int		num = 0;

	::testing::internal::CaptureStdout();
	const int		c_retd1 = printf(fmtd1, num);
	const string	c_outputd1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd1 = ft_printf(fmtd1, num);
	const string	ft_outputd1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti1 = printf(fmti1, num);
	const string	c_outputi1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti1 = ft_printf(fmti1, num);
	const string	ft_outputi1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_retd2 = printf(fmtd2, num);
	const string	c_outputd2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd2 = ft_printf(fmtd2, num);
	const string	ft_outputd2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti2 = printf(fmti2, num);
	const string	c_outputi2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti2 = ft_printf(fmti2, num);
	const string	ft_outputi2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_retd3 = printf(fmtd3, num);
	const string	c_outputd3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_retd3 = ft_printf(fmtd3, num);
	const string	ft_outputd3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		c_reti3 = printf(fmti3, num);
	const string	c_outputi3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_reti3 = ft_printf(fmti3, num);
	const string	ft_outputi3 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_outputd1, ft_outputd1);
	EXPECT_EQ(c_retd1, ft_retd1);
	EXPECT_EQ(c_outputi1, ft_outputi1);
	EXPECT_EQ(c_reti1, ft_reti1);
	EXPECT_EQ(c_outputd2, ft_outputd2);
	EXPECT_EQ(c_retd2, ft_retd2);
	EXPECT_EQ(c_outputi2, ft_outputi2);
	EXPECT_EQ(c_reti2, ft_reti2);
	EXPECT_EQ(c_outputd3, ft_outputd3);
	EXPECT_EQ(c_retd3, ft_retd3);
	EXPECT_EQ(c_outputi3, ft_outputi3);
	EXPECT_EQ(c_reti3, ft_reti3);
}
