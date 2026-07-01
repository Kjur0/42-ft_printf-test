/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 12:28:55 by kjurkows          #+#    #+#             */
/*   Updated: 2026/07/01 19:32:05 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main.hpp"

TEST(string, basic)
{
	::testing::internal::CaptureStdout();
	const int		c_ret = printf("Hello, World!");
	const string	c_output = ::testing::internal::GetCapturedStdout();
	::testing::internal::CaptureStdout();
	const int		ft_ret = ft_printf("Hello, World!");
	const string	ft_output = ::testing::internal::GetCapturedStdout();

	EXPECT_EQ(c_output, ft_output);
	EXPECT_EQ(c_ret, ft_ret);
}

TEST(norminette, norme)
{
	int exit_code = system("norminette");

	EXPECT_EQ(exit_code, 0);
}

int	main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return (RUN_ALL_TESTS());
}
