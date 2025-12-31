/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 03:01:58 by aanbadi           #+#    #+#             */
/*   Updated: 2025/12/31 03:01:59 by aanbadi          ###   ########.fr       */
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
        void    complain(std::string level);
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
};
#endif