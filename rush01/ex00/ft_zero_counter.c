/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_counter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:05:43 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/02 18:39:45 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_zero_counter(int game[4][4])
{
	int i;
    int j;
    int count;


	i = 0;
    j = 0;
    count = 0;
  
        while( i < 4 )
	    {
		    j = 0;
		    while (j < 4)
		    {
			    if(game[i][j] == 0)
                count++;
			    j++;
		    }
		    i++;
	}
   


		
		i++;
	
    return (count);
}