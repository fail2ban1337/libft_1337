/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:50:00 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/19 19:58:52 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memcpy(void *str1, const void *str2, size_t n);
void				*ft_memset(void *str, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				ft_is_negative(int n);
int					*ft_range(int min, int max);
int					ft_print_param(int argc, char **argv);
void				ft_swap(int *a, int *b);
char				*ft_strrev(char *str);
void				ft_lstadd(t_list **alst, t_list *new);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strrchr(const char *s, int c);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
char				*ft_strtrim(char const *s);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putchar_fd(char c, int fd);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putendl(char const *s);
void				ft_putchar(char c);
void				ft_striteri(char *s, void (*f) (unsigned int, char *));
char				**ft_strsplit(char const *s, char c);
void				ft_striter(char *s, void (*f)(char *));
void				ft_strclr(char *s);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				ft_putnbr(int nb);
void				ft_putstr(char const *s);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_isalnum(int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack,
		const char *needle, size_t len);
char				*ft_strncat(char *s1, const char *s2, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isprint(int c);
char				*ft_strchr(const char *s, int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
void				*ft_memmove(void *dst, const void *src, size_t len);
size_t				ft_strlcat(char *dst, const char *src, size_t size);

#endif
