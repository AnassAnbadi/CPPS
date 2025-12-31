/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 03:02:52 by aanbadi           #+#    #+#             */
/*   Updated: 2025/12/31 03:02:53 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>
HumanA::HumanA(std::string humanName, Weapon& humanWeapon)
    : name(humanName), weapon(humanWeapon) {}
void HumanA::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
