/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seblin <seblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:44:43 by seblin            #+#    #+#             */
/*   Updated: 2023/11/09 18:33:10 by seblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char *s)
{
	return (*s == 9 || *s == 32);
}
int	main(int argc, char *argv[])
{
	char	*s;
	int		flag;
	
	flag = 0;
	if (argc >= 2)
	{
		s = argv[1];
		while (*s && ft_isspace(s))
			s++;
		while (*s && !ft_isspace(s))
			s++;
		while(*s)
		{
			if (!ft_isspace(s) && ++flag || 
				(flag && ft_isspace(s) && !ft_isspace(s + 1) && *(s + 1)))
				write(1, s, 1);	
			s++;	
		}
		if (flag)
			write(1, " ", 1);
		s = argv[1];
		while (*s && ft_isspace(s))
			s++;
		while (*s && !ft_isspace(s))
			write(1, s++, 1);		
	}
	return (write(1, "\n", 1));	
}
// int main(int argc, char **argv)
// {
//     int i;
//     int start;
//     int end;
//     int flag;

//     flag = 0;
//     if (argc > 1 && argv[1][0])
//     {
//         i = 0;
//         while (argv[1][i] == ' ' || argv[1][i] == '\t')
//             i++;
//         start = i;
//         while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
//             i++;
//         end = i;
//         while (argv[1][i] == ' ' || argv[1][i] == '\t')
//             i++;
//         while(argv[1][i]) 
//         {
//             while ((argv[1][i] == ' ' && argv[1][i + 1] == ' ') || (argv[1][i] == '\t' && argv[1][i + 1] == '\t'))
//                 i++; 
//             if (argv[1][i] == ' ' || argv[1][i] == '\t')
//                 flag = 1; 
//             write(1, &argv[1][i], 1);
//             i++;
//         }
//         if (flag)
//             write(1, " ", 1);
//         while (start < end)
//         {
//             write(1, &argv[1][start], 1);
//             start++;
//         }
//     }
//     write(1, "\n", 1);
//     return(0);
// }