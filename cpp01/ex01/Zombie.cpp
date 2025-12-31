/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 03:03:11 by aanbadi           #+#    #+#             */
/*   Updated: 2025/12/31 03:03:12 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie() : name("Unnamed") {}
Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is destroyed." << std::endl;
}
void Zombie::setName(std::string newName) {
    name = newName;
}

void Zombie::announce(void) {
    std::cout << name << ": Braiiiiiiinnnssss..." << std::endl;
}
