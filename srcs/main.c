/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpichon <rpichon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:57:04 by rpichon           #+#    #+#             */
/*   Updated: 2021/01/05 16:11:01 by rpichon          ###   ########lyon.fr   */
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
	printf("\ntest1 : [%s]",str);
    if (ft_strlen(str) != (int)strlen(str))
		print_ko();
	else
		print_ok();
	printf("value = %d\n", ft_strlen(str));

	str = "";
	printf("\ntest2 : [%s]",str);
    if (ft_strlen(str) != (int)strlen(str))
		print_ko();
	else
		print_ok();
	printf("value = %d\n", ft_strlen(str));

	str = "-1257";
	printf("\ntest3 : [%s]",str);
    if (ft_strlen(str) != (int)strlen(str))
		print_ko();
	else
		print_ok();
	printf("value = %d\n", ft_strlen(str));


	printf("\033[1;34m%30s\033[0m\n","TEST FT_STRCMP");

	str1 = strdup("azertyuiop");
	str2 = strdup("azertyuiop");
	printf("\ntest4 : [%s] [%s]",str1, str2);
	if (ft_strcmp(str1, str2) != (int)strcmp(str1, str2))
		print_ko();
	else
		print_ok();
	printf("value = %d\n\n", ft_strcmp(str1, str2));

	str1 = strdup("azertyuiop");
	str2 = strdup("azert");
	printf("\ntest5 : [%s] [%s]",str1, str2);
	if (ft_strcmp(str1, str2) != (int)strcmp(str1, str2))
		print_ko();
	else
		print_ok();
	printf("value = %d\n\n", ft_strcmp(str1, str2));

	str1 = strdup("azertyuiop");
	str2 = strdup("azerz");
	printf("\ntest6 : [%s] [%s]",str1, str2);
	if (ft_strcmp(str1, str2) != (int)strcmp(str1, str2))
		print_ko();
	else
		print_ok();
	printf("value = %d\n\n", ft_strcmp(str1, str2));

	str1 = strdup("");
	str2 = strdup("azerz");
	printf("\ntest7 : [%s] [%s]",str1, str2);
	if (ft_strcmp(str1, str2) != (int)strcmp(str1, str2))
		print_ko();
	else
		print_ok();
	printf("value = %d\n\n", ft_strcmp(str1, str2));

	str1 = strdup("azertyuiop");
	str2 = strdup("");
	printf("\ntest8 : [%s] [%s]",str1, str2);
	if (ft_strcmp(str1, str2) != (int)strcmp(str1, str2))
		print_ko();
	else
		print_ok();
	printf("value = %d\n\n", ft_strcmp(str1, str2));

	printf("\033[1;34m%30s\033[0m\n","TEST FT_STRCPY");
	char test1[20];
	char test2[20];

	str1 = strdup("salut");
	printf("\ntest9 : copy[%s]",str1);
	ft_strcpy(test1, str1);
	strcpy(test2, str1);
	if (strcmp(test1,test2))
		print_ko();
	else
		print_ok();
	printf("value = |%s|\n\n", test1);

	str1 = strdup("");
	printf("\ntest10 : copy[%s]",str1);
	ft_strcpy(test1, str1);
	strcpy(test2, str1);
	if (strcmp(test1,test2))
		print_ko();
	else
		print_ok();
	printf("value = |%s|\n\n", test1);

	str1 = strdup("ceci est un test");
	printf("\ntest11 : copy[%s]",str1);
	ft_strcpy(test1, str1);
	strcpy(test2, str1);
	if (strcmp(test1,test2))
		print_ko();
	else
		print_ok();
	printf("value = |%s|\n\n", test1);

	str1 = strdup("ceci e\0st un test");
	printf("\ntest12 : copy[%s]",str1);
	ft_strcpy(test1, str1);
	strcpy(test2, str1);
	if (strcmp(test1,test2))
		print_ko();
	else
		print_ok();
	printf("value = |%s|\n\n", test1);

	printf("\033[1;34m%30s\033[0m\n","TEST FT_WRITE");
	ssize_t w1;
	ssize_t w2;
	printf("\ntest13 : write(1, \"Hello world!\\n\", 13)\n");
	w1 = ft_write(1, "Hello world!\n", 13);
	w2 = write(1, "Hello world!\n", 13);
	if (w1 != w2)
		print_ko();
	else
		print_ok();
	write(1, "\n", 1);

	printf("\ntest14 : write(1, \"Hello world!\\n\", 10)\n");
	w1 = ft_write(1, "Hello world!\n", 10);
	write(1, "\n", 1);
	w2 = write(1, "Hello world!\n", 10);
	write(1, "\n", 1);
	if (w1 != w2)
		print_ko();
	else
		print_ok();
	write(1, "\n", 1);

	printf("errno value before error = %d", errno);
	printf("\ntest15 : write(-1, \"t\", 1)\n");
	w1 = ft_write(-1, "t", 1);
	printf("my errno = %d\n", errno);
	w2 = write(-1, "t", 1);
	printf("true errno = %d\n", errno);
	if (w1 != w2)
		print_ko();
	else
		print_ok();
	write(1, "\n", 1);

	printf("errno value before error = %d", errno);
	printf("\ntest16 : write(1, NULL, 1)\n");
	w1 = ft_write(1, NULL, 1);
	printf("my errno = %d\n", errno);
	w2 = write(1, NULL, 1);
	printf("true errno = %d\n", errno);
	if (w1 != w2)
		print_ko();
	else
		print_ok();
	write(1, "\n", 1);


	str1 = strdup("ceci est un test");
	printf("\ntest17 : write(1, &str1, 1)\n");
	w1 = ft_write(1, &str1, 5);
	write(1, "\n", 1);
	w2 = write(1, &str1, 5);
	write(1, "\n", 1);
	if (w1 != w2)
		print_ko();
	else
		print_ok();
	write(1, "\n", 1);

	char c = 'u';
	printf("\ntest18 : write(1, &c, 1) (with c = 'u')\n");
	w1 = ft_write(1, &c, 1);
	write(1, "\n", 1);
	w2 = write(1, &c, 1);
	write(1, "\n", 1);
	if (w1 != w2)
		print_ko();
	else
		print_ok();
	write(1, "\n", 1);

	printf("\033[1;34m%30s\033[0m\n","TEST FT_STRDUP");
	printf("\ntest19 : ft_strdup(\"Hello\")\n");
	str1 = ft_strdup("Hello");
	str2 = ft_strdup("Hello");
	printf("str1 = %s\n",str1);
	if (strcmp(str1, str2))
		print_ko();
	else
		print_ok();

	printf("\ntest20 : ft_strdup(\"\")\n");
	str1 = ft_strdup("");
	str2 = ft_strdup("");
	if (strcmp(str1, str2))
		print_ko();
	else
		print_ok();
	printf("str1 = %s\n",str1);

	printf("\033[1;34m%30s\033[0m\n","TEST FT_READ");
	int fd;
	char buf1[150];
	char buf2[150];
	int v1;
	int v2;

	fd = open("lotr", O_RDONLY);
	v1 = ft_read(fd, &buf1, 15);
	printf("\ntest ft_read(lotr, 15) : \n%s | nb_read = %d\n", buf1, v1);
	close(fd);

	fd = open("lotr", O_RDONLY);
	v2 = read(fd, &buf2, 15);
	printf("%s | nb_read = %d\n", buf2, v2);
	close(fd);
	if (strcmp(buf1,buf2) && v1 == v2)
		print_ko();
	else
		print_ok();
	write(1, "\n",1 );

	fd = -1;
	printf("errno value before = %d", errno);
	v1 = ft_read(fd, &buf1, 15);
	printf("\ntest bad_fd ft_read(fd -1, 15) : \n%s | nb_read = %d\n", buf1, v1);
	printf("my errno = %d\n", errno);
	v2 = read(fd, &buf2, 15);
	printf("%s | nb_read = %d\n", buf2, v2);
	printf("true errno = %d\n", errno);
	if (strcmp(buf1,buf2) && v1 == v2)
		print_ko();
	else
		print_ok();
	write(1, "\n",1 );
}
