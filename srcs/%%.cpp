/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %%.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:30:22 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/01 19:31:17 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main.hpp"

TEST(percent, basic)
{
	::testing::internal::CaptureStdout();
	const int		c_ret = printf("%%");
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf("%%");
	const string	ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}
