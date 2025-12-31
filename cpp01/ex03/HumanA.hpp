/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 03:02:49 by aanbadi           #+#    #+#             */
/*   Updated: 2025/12/31 03:02:50 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include "Weapon.hpp"
class HumanA {
   private:
    std::string name;
    Weapon& weapon;

   public:
    HumanA(std::string humanName, Weapon& humanWeapon);
    void attack() const;
};
# endif