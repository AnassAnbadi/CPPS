/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 03:01:46 by aanbadi           #+#    #+#             */
/*   Updated: 2025/12/31 03:01:47 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP
# include <string>
# include <iostream>
class Harl
{
    public:
        Harl();
        ~Harl();
        void    filter(std::string level);
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
};
#endif