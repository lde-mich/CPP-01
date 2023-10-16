/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:05:59 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/16 18:41:48 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

int main (int argc, char **argv)
{
    std::string s1;
    std::string s2;

    if (argc != 3)
        return(write(2, "Error:\n Bad arguments\n", 22));
    return (0);
}