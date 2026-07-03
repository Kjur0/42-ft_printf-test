/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %d%i.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:17:18 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/03 15:50:38 by kjurkows         ###   ########.fr       */
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
