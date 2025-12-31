/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 03:02:36 by aanbadi           #+#    #+#             */
/*   Updated: 2025/12/31 03:02:37 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) : type(weaponType) {}

const std::string& Weapon::getType() const {
    return type;
}
void Weapon::setType(const std::string& newType) {
    type = newType;
}
