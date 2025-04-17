/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:25:39 by tatahere          #+#    #+#             */
/*   Updated: 2025/04/16 18:31:17 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "FragTrap.hpp"
# include <string>

class FragTrap : virtual public ClapTrap
{
	protected:

		void	initHitPoints(void);
		void	initEnergyPoints(void);
		void	initAttackDamage(void);

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap & src);
		FragTrap & operator = (const FragTrap & src);
		~FragTrap(void);

		void		highFivesGuys(void);
};

#endif
