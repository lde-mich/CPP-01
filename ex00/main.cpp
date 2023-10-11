/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:47:22 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/11 16:18:31 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie	first;
	Zombie	*second;

	first = newZombie("Luca");
	first.Announce();
	second = randomChump("Alessandro");
	delete second;
	return (0);
}