/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpichon <rpichon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:57:04 by rpichon           #+#    #+#             */
/*   Updated: 2020/12/01 17:24:23 by rpichon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/libasm.h"

static void print_ok()
{
	printf("\033[0;32m");
	printf("[OK]\n");
	printf("\033[0m");
}

static void print_ko()
{
	printf("\033[0;31m");
	printf("[KO]\n");
	printf("\033[0m");
}

int main(void) {
	char *str;
	char *str1;
	char *str2;

	printf("\033[1;34m%30s\033[0m\n","TEST FT_STRLEN");

	str = "Hello";
	printf("\n[%s]",str);
    if (ft_strlen(str) != (int)strlen(str))
		print_ko();
	else
		print_ok();
	printf("value = %d\n", ft_strlen(str));

	str = "";
	printf("\n[%s]",str);
    if (ft_strlen(str) != (int)strlen(str))
		print_ko();
	else
		print_ok();
	printf("value = %d\n", ft_strlen(str));

	str = "-1257";
	printf("\n[%s]",str);
    if (ft_strlen(str) != (int)strlen(str))
		print_ko();
	else
		print_ok();
	printf("value = %d\n", ft_strlen(str));


	printf("\033[1;34m%30s\033[0m\n","TEST FT_STRCMP");

	str1 = "azertyuiop";
	str2 = "azertyuiop";
	printf("\[%s] [%s]",str1, str2);
	if (ft_strcmp(str1, str2) != (int)strcmp(str1, str2))
		print_ko();
	else
		print_ok();
	printf("value = %d\n\n", ft_strcmp(str1, str2));

	str1 = strdup("azertyuiop");
	str2 = strdup("azert");
	printf("\[%s] [%s]",str1, str2);
	if (ft_strcmp(str1, str2) != (int)strcmp(str1, str2))
		print_ko();
	else
		print_ok();
	printf("value = %d\n\n", ft_strcmp(str1, str2));

	str1 = strdup("azertyuiop");
	str2 = strdup("azerz");
	printf("\[%s] [%s]",str1, str2);
	if (ft_strcmp(str1, str2) != (int)strcmp(str1, str2))
		print_ko();
	else
		print_ok();
	printf("value = %d\n\n", ft_strcmp(str1, str2));

	str1 = strdup("");
	str2 = strdup("azerz");
	printf("\[%s] [%s]",str1, str2);
	if (ft_strcmp(str1, str2) != (int)strcmp(str1, str2))
		print_ko();
	else
		print_ok();
	printf("value = %d\n\n", ft_strcmp(str1, str2));

	str1 = strdup("azertyuiop");
	str2 = strdup("");
	printf("\[%s] [%s]",str1, str2);
	if (ft_strcmp(str1, str2) != (int)strcmp(str1, str2))
		print_ko();
	else
		print_ok();
	printf("value = %d\n\n", ft_strcmp(str1, str2));

	printf("\033[1;34m%30s\033[0m\n","TEST FT_STRLEN");
}
