/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 03:02:09 by aanbadi           #+#    #+#             */
/*   Updated: 2026/01/10 16:50:57 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rwclass.hpp"

int main(int ac , char *av[])
{
    if (ac != 4)
        return 1;
    Rwclass rwclass(av[1], av[2], av[3]);
    return rwclass.replace();
    

}
