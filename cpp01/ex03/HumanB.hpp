/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 03:02:43 by aanbadi           #+#    #+#             */
/*   Updated: 2025/12/31 03:02:44 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "Weapon.hpp"
class HumanB {
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(std::string humanName);
        void setWeapon(Weapon& newWeapon);
        void attack() const;
};
# endif