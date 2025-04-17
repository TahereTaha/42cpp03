/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:25:39 by tatahere          #+#    #+#             */
/*   Updated: 2025/04/16 18:20:12 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ScavTrap.hpp"
# include <string>

class ScavTrap : virtual public ClapTrap
{
	protected:

		void	initHitPoints(void);
		void	initEnergyPoints(void);
		void	initAttackDamage(void);

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & src);
		ScavTrap & operator = (const ScavTrap & src);
		~ScavTrap(void);

		void		attack(const std::string & target);
		void		guardGate(void);
};

#endif
