/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 07:41:18 by khee-seo          #+#    #+#             */
/*   Updated: 2021/01/03 08:30:13 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

long long			transf(const char *src, int i, int neg);
int					ft_atoi(const char *src);
void				ft_bzero(void *dst, unsigned int size);
void				*ft_calloc(unsigned int n, unsigned int size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*itoa(unsigned int cpy, int i, int c);
char				*ft_itoa(int n);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *), \
						void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
void				*ft_memccpy(void *dst, void *src, int c, unsigned int size);
void				*ft_memchr(const void *dst, int c, \
						unsigned int size);
int					ft_memcmp(const void *cmp1, const void *cmp2, \
						unsigned int size);
void				*ft_memcpy(void *dst, void *src, unsigned int size);
void				*ft_memmove(void *dst, const void *src, unsigned int size);
void				*ft_memset(void *dst, int val, unsigned int size);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				put(unsigned int n, int fd, char *num);
void				ft_putstr_fd(char *s, int fd);
char				*copy_str(char const *s, char *p, int len, int a);
int					check_str(char const *s, char c);
int					find_end(char const *s, char c);
char				**spl(char const *s, char c, int len, int a);
char				**ft_split(char const *s, char c);
char				*ft_strchr(const char *dst, int c);
char				*ft_strdup(char *src);
int					s_len(char const *s);
char				*ft_strjoin(char const *s1, char const *s2);
unsigned int		ft_strlcat(char *dst, char *src, unsigned int size);
unsigned int		ft_strlcpy(char *dst, char *src, unsigned int size);
unsigned int		ft_strlen(char *dst);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *s1, \
						const char *s2, unsigned int size);
char				*ft_strnstr(const char *dst, const char *src, \
						unsigned int size);
char				*ft_strrchr(const char *dst, int c);
int					start(char const *s1, char const *set);
int					end(char const *s1, char const *set);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);

#endif
