# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelomar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/08 16:00:58 by abelomar          #+#    #+#              #
#    Updated: 2018/10/17 17:55:27 by abelomar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
all : $(NAME)

$(NAME): 	
			@gcc -Wall -Werror -Wextra -c *.c
		    @ar rc $(NAME) *.o
clean :
		    @rm -f *.o
fclean : clean
		    @rm -f $(NAME)
re : fclean all
