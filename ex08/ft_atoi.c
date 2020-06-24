/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuhlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:43:12 by dmuhlang          #+#    #+#             */
/*   Updated: 2020/06/24 14:44:45 by dmuhlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


  int ft_atoi(char *str)
  {
      int res;
      int sign;
      int i;
 
      res = 0;
      sign = 0;
      i = 0;
 
      while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
          i++;
      if (str[i] == '-')
          sign = 1;
      if (str[i] == '+' || str[i] == '-')
          i++;
 
          while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
          {
              res = res * 10;
              res += (int)str[i] - '0';
              i++;
          }
          if (sign == 1)
             return (-res);
          else
             return (res);
  }

 

