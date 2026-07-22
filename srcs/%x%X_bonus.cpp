/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %x%X_bonus.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:52:41 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/22 14:42:42 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main.hpp"



TEST(x_bonus, align_right)
{
	const char			*fmtx = "%20x";
	const char			*fmtX = "%20X";
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

TEST(x_bonus, align_left)
{
	const char			*fmtx = "%-20x";
	const char			*fmtX = "%-20X";
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

TEST(x_bonus, less_width)
{
	const char			*fmtx = "%1x";
	const char			*fmtX = "%1X";
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

TEST(x_bonus, precision)
{
	const char			*fmtx1 = "%.5x";
	const char			*fmtX1 = "%.5X";
	const char			*fmtx2 = "%.10x";
	const char			*fmtX2 = "%.10X";
	const char			*fmtx3 = "%10.5x";
	const char			*fmtX3 = "%10.5X";
	const char			*fmtx4 = "%-10.5x";
	const char			*fmtX4 = "%-10.5X";
	const char			*fmtx5 = "%.x";
	const char			*fmtX5 = "%.X";
	const unsigned int	num = 0x42;

	::testing::internal::CaptureStdout();
	const int			c_retx1 = printf(fmtx1, num);
	const string		c_outputx1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx1 = ft_printf(fmtx1, num);
	const string		ft_outputx1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX1 = printf(fmtX1, num);
	const string		c_outputX1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX1 = ft_printf(fmtX1, num);
	const string		ft_outputX1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx2 = printf(fmtx2, num);
	const string		c_outputx2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx2 = ft_printf(fmtx2, num);
	const string		ft_outputx2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX2 = printf(fmtX2, num);
	const string		c_outputX2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX2 = ft_printf(fmtX2, num);
	const string		ft_outputX2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx3 = printf(fmtx3, num);
	const string		c_outputx3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx3 = ft_printf(fmtx3, num);
	const string		ft_outputx3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX3 = printf(fmtX3, num);
	const string		c_outputX3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX3 = ft_printf(fmtX3, num);
	const string		ft_outputX3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx4 = printf(fmtx4, num);
	const string		c_outputx4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx4 = ft_printf(fmtx4, num);
	const string		ft_outputx4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX4 = printf(fmtX4, num);
	const string		c_outputX4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX4 = ft_printf(fmtX4, num);
	const string		ft_outputX4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx5 = printf(fmtx5, num);
	const string		c_outputx5 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx5 = ft_printf(fmtx5, num);
	const string		ft_outputx5 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX5 = printf(fmtX5, num);
	const string		c_outputX5 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX5 = ft_printf(fmtX5, num);
	const string		ft_outputX5 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_outputx1, ft_outputx1);
	EXPECT_EQ(c_retx1, ft_retx1);
	EXPECT_EQ(c_outputX1, ft_outputX1);
	EXPECT_EQ(c_retX1, ft_retX1);
	EXPECT_EQ(c_outputx2, ft_outputx2);
	EXPECT_EQ(c_retx2, ft_retx2);
	EXPECT_EQ(c_outputX2, ft_outputX2);
	EXPECT_EQ(c_retX2, ft_retX2);
	EXPECT_EQ(c_outputx3, ft_outputx3);
	EXPECT_EQ(c_retx3, ft_retx3);
	EXPECT_EQ(c_outputX3, ft_outputX3);
	EXPECT_EQ(c_retX3, ft_retX3);
	EXPECT_EQ(c_outputx4, ft_outputx4);
	EXPECT_EQ(c_retx4, ft_retx4);
	EXPECT_EQ(c_outputX4, ft_outputX4);
	EXPECT_EQ(c_retX4, ft_retX4);
	EXPECT_EQ(c_outputx5, ft_outputx5);
	EXPECT_EQ(c_retx5, ft_retx5);
	EXPECT_EQ(c_outputX5, ft_outputX5);
	EXPECT_EQ(c_retX5, ft_retX5);
}

TEST(x_bonus, hash)
{
	const char			*fmtx1 = "%#x";
	const char			*fmtX1 = "%#X";
	const char			*fmtx2 = "%#20x";
	const char			*fmtX2 = "%#20X";
	const unsigned int	num = 0x42;

	::testing::internal::CaptureStdout();
	const int			c_retx1 = printf(fmtx1, num);
	const string		c_outputx1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx1 = ft_printf(fmtx1, num);
	const string		ft_outputx1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX1 = printf(fmtX1, num);
	const string		c_outputX1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX1 = ft_printf(fmtX1, num);
	const string		ft_outputX1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx2 = printf(fmtx2, num);
	const string		c_outputx2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx2 = ft_printf(fmtx2, num);
	const string		ft_outputx2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX2 = printf(fmtX2, num);
	const string		c_outputX2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX2 = ft_printf(fmtX2, num);
	const string		ft_outputX2 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_outputx1, ft_outputx1);
	EXPECT_EQ(c_retx1, ft_retx1);
	EXPECT_EQ(c_outputX1, ft_outputX1);
	EXPECT_EQ(c_retX1, ft_retX1);
	EXPECT_EQ(c_outputx2, ft_outputx2);
	EXPECT_EQ(c_retx2, ft_retx2);
	EXPECT_EQ(c_outputX2, ft_outputX2);
	EXPECT_EQ(c_retX2, ft_retX2);
}

TEST(x_bonus, 0)
{
	const char			*fmtx = "%020x";
	const char			*fmtX = "%020X";
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

TEST(x_bonus, plus_space)
{
	const char			*fmtx1 = "%+x";
	const char			*fmtX1 = "%+X";
	const char			*fmtx2 = "% x";
	const char			*fmtX2 = "% X";
	const char			*fmtx3 = "% +x";
	const char			*fmtX3 = "% +X";
	const unsigned int	num = 0x42;

	::testing::internal::CaptureStdout();
	const int			c_retx1 = printf(fmtx1, num);
	const string		c_outputx1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx1 = ft_printf(fmtx1, num);
	const string		ft_outputx1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX1 = printf(fmtX1, num);
	const string		c_outputX1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX1 = ft_printf(fmtX1, num);
	const string		ft_outputX1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx2 = printf(fmtx2, num);
	const string		c_outputx2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx2 = ft_printf(fmtx2, num);
	const string		ft_outputx2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX2 = printf(fmtX2, num);
	const string		c_outputX2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX2 = ft_printf(fmtX2, num);
	const string		ft_outputX2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx3 = printf(fmtx3, num);
	const string		c_outputx3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx3 = ft_printf(fmtx3, num);
	const string		ft_outputx3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX3 = printf(fmtX3, num);
	const string		c_outputX3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX3 = ft_printf(fmtX3, num);
	const string		ft_outputX3 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_outputx1, ft_outputx1);
	EXPECT_EQ(c_retx1, ft_retx1);
	EXPECT_EQ(c_outputX1, ft_outputX1);
	EXPECT_EQ(c_retX1, ft_retX1);
	EXPECT_EQ(c_outputx2, ft_outputx2);
	EXPECT_EQ(c_retx2, ft_retx2);
	EXPECT_EQ(c_outputX2, ft_outputX2);
	EXPECT_EQ(c_retX2, ft_retX2);
	EXPECT_EQ(c_outputx3, ft_outputx3);
	EXPECT_EQ(c_retx3, ft_retx3);
	EXPECT_EQ(c_outputX3, ft_outputX3);
	EXPECT_EQ(c_retX3, ft_retX3);
}

TEST(x_bonus, mixed)
{
	const char			*fmtx = "% #-020.10x";
	const char			*fmtX = "% #-020.10X";
	const unsigned int	num1 = 0x42;
	const unsigned int	num2 = 0x0;

	::testing::internal::CaptureStdout();
	const int			c_retx1 = printf(fmtx, num1);
	const string		c_outputx1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx1 = ft_printf(fmtx, num1);
	const string		ft_outputx1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX1 = printf(fmtX, num1);
	const string		c_outputX1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX1 = ft_printf(fmtX, num1);
	const string		ft_outputX1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx2 = printf(fmtx, num2);
	const string		c_outputx2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx2 = ft_printf(fmtx, num2);
	const string		ft_outputx2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX2 = printf(fmtX, num2);
	const string		c_outputX2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX2 = ft_printf(fmtX, num2);
	const string		ft_outputX2 = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_outputx1, ft_outputx1);
	EXPECT_EQ(c_retx1, ft_retx1);
	EXPECT_EQ(c_outputX1, ft_outputX1);
	EXPECT_EQ(c_retX1, ft_retX1);
	EXPECT_EQ(c_outputx2, ft_outputx2);
	EXPECT_EQ(c_retx2, ft_retx2);
	EXPECT_EQ(c_outputX2, ft_outputX2);
	EXPECT_EQ(c_retX2, ft_retX2);
}

TEST(x_bonus, value0)
{
	const char			*fmtx1 = "%x";
	const char			*fmtX1 = "%X";
	const char			*fmtx2 = "%#x";
	const char			*fmtX2 = "%#X";
	const char			*fmtx3 = "%#.0x";
	const char			*fmtX3 = "%#.0X";
	const char			*fmtx4 = "%.0x";
	const char			*fmtX4 = "%.0X";
	const char			*fmtx5 = "%#.5x";
	const char			*fmtX5 = "%#.5X";
	const char			*fmtx6 = "%.5x";
	const char			*fmtX6 = "%.5X";
	const unsigned int	num = 0;

	::testing::internal::CaptureStdout();
	const int			c_retx1 = printf(fmtx1, num);
	const string		c_outputx1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx1 = ft_printf(fmtx1, num);
	const string		ft_outputx1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX1 = printf(fmtX1, num);
	const string		c_outputX1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX1 = ft_printf(fmtX1, num);
	const string		ft_outputX1 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx2 = printf(fmtx2, num);
	const string		c_outputx2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx2 = ft_printf(fmtx2, num);
	const string		ft_outputx2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX2 = printf(fmtX2, num);
	const string		c_outputX2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX2 = ft_printf(fmtX2, num);
	const string		ft_outputX2 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx3 = printf(fmtx3, num);
	const string		c_outputx3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx3 = ft_printf(fmtx3, num);
	const string		ft_outputx3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX3 = printf(fmtX3, num);
	const string		c_outputX3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX3 = ft_printf(fmtX3, num);
	const string		ft_outputX3 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx4 = printf(fmtx4, num);
	const string		c_outputx4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx4 = ft_printf(fmtx4, num);
	const string		ft_outputx4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX4 = printf(fmtX4, num);
	const string		c_outputX4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX4 = ft_printf(fmtX4, num);
	const string		ft_outputX4 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx5 = printf(fmtx5, num);
	const string		c_outputx5 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx5 = ft_printf(fmtx5, num);
	const string		ft_outputx5 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX5 = printf(fmtX5, num);
	const string		c_outputX5 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX5 = ft_printf(fmtX5, num);
	const string		ft_outputX5 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retx6 = printf(fmtx6, num);
	const string		c_outputx6 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retx6 = ft_printf(fmtx6, num);
	const string		ft_outputx6 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			c_retX6 = printf(fmtX6, num);
	const string		c_outputX6 = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int			ft_retX6 = ft_printf(fmtX6, num);
	const string		ft_outputX6 = ::testing::internal::GetCapturedStdout();
	

	EXPECT_EQ(c_outputx1, ft_outputx1);
	EXPECT_EQ(c_retx1, ft_retx1);
	EXPECT_EQ(c_outputX1, ft_outputX1);
	EXPECT_EQ(c_retX1, ft_retX1);
	EXPECT_EQ(c_outputx2, ft_outputx2);
	EXPECT_EQ(c_retx2, ft_retx2);
	EXPECT_EQ(c_outputX2, ft_outputX2);
	EXPECT_EQ(c_retX2, ft_retX2);
	EXPECT_EQ(c_outputx3, ft_outputx3);
	EXPECT_EQ(c_retx3, ft_retx3);
	EXPECT_EQ(c_outputX3, ft_outputX3);
	EXPECT_EQ(c_retX3, ft_retX3);
	EXPECT_EQ(c_outputx4, ft_outputx4);
	EXPECT_EQ(c_retx4, ft_retx4);
	EXPECT_EQ(c_outputX4, ft_outputX4);
	EXPECT_EQ(c_retX4, ft_retX4);
	EXPECT_EQ(c_outputx5, ft_outputx5);
	EXPECT_EQ(c_retx5, ft_retx5);
	EXPECT_EQ(c_outputX5, ft_outputX5);
	EXPECT_EQ(c_retX5, ft_retX5);
	EXPECT_EQ(c_outputx6, ft_outputx6);
	EXPECT_EQ(c_retx6, ft_retx6);
	EXPECT_EQ(c_outputX6, ft_outputX6);
	EXPECT_EQ(c_retX6, ft_retX6);
}
