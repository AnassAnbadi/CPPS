/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 03:03:15 by aanbadi           #+#    #+#             */
/*   Updated: 2025/12/31 16:43:54 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* zombieHorde1;
    int N = 5;
    zombieHorde1 = zombieHorde(N, "HordeZombie");

    for (int i = 0; i < N; ++i) {
        zombieHorde1[i].announce();
    }
    delete[] zombieHorde1;
    
    return 0;
}