/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 03:02:32 by aanbadi           #+#    #+#             */
/*   Updated: 2025/12/31 03:02:33 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
class Weapon {
   private:
    std::string type;

   public:
    Weapon(std::string weaponType);
    const std::string& getType() const;
    void setType(const std::string& newType);
};
# endif
