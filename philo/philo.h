/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:56:22 by hhattaki          #+#    #+#             */
/*   Updated: 2023/03/13 19:28:43 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <pthread.h>
# include <sys/time.h>

# define INIT 1
# define DESTROY 0

typedef struct s_ph
{
	pthread_mutex_t	*mutex;
	int				time_to_eat;
	int				time_to_sleep;
	int				time_to_die;
	int				nb_to_eat;
	int				death;
	int				ph_pos;
	int				ph_nb;
}	t_ph;

/*-------utils-------*/
void	ft_putendl_fd(char	*s);
int		ft_atoi(char *str);
void	my_usleep(int time);

/*------routine------*/
void	ft_eat(t_ph ph);
void	*ft_sleep(void	*meh);

#endif