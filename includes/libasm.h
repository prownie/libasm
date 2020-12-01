/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpichon <rpichon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:21:40 by rpichon           #+#    #+#             */
/*   Updated: 2020/12/01 17:19:32 by rpichon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>
#include <unistd.h>

int                                     ft_strlen(const char *s);
ssize_t                         ft_write(int fd, const void *buf, size_t len);
ssize_t                         ft_read(int fd, void *buf, size_t len);
int                                     ft_strcmp(const char *s1, const char *s2);
char                            *ft_strcpy(char *dst, const char *src);
char                            *ft_strdup(const char *s1);

#endif
