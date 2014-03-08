/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 20:17:42 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/08 22:42:57 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_raw(t_data *data, int raw[2])
{
	/* compter le nombre de ligne de 2 ou 3 pions de chaque joeur.*/
	/* joueur1 -> raw[0]; joueur2 -> raw[1] */
	raw[0] = 0;
	raw[1] = 0;
	return ;
}

int		ft_eval(t_data *data)
{
	/* determine le "poid" du plateau */
	int		piece;
	int		raw[2];

	piece = ft_how_many_piece(); /* retourne nb piece sur plateau */
	if (/* partie finie */)
	{
		if (/* IA gagne */)
			return (1000 - piece);
		else
			return (-1000 + piece);
	}
	else
	{
		ft_raw(data, raw);
		return (raw[0] - raw[1]);
	}
}

int		ft_winner(t_data *data)
{
	/* evalue l'etat du plateau de jeu */
	/* 0 = jeu non fini */
	/* 1 = joueur 1 gagne */
	/* 2 = joueur 2 gagne */
	/* 3 = match nul */
	if (/* joueur 1 a 4 pion alignes */)
		return (1);
	else if (/* joueur 2 a 4 pion alignes */)
		return (2);
	else
	{
		if (/* partie finie */)
			return (3);
		else
			return (0);
	}
}
