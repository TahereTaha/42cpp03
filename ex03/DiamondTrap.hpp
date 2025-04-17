/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:25:39 by tatahere          #+#    #+#             */
/*   Updated: 2025/04/16 18:27:47 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:

		std::string		_name;

	protected:

		void	initName(std::string name);
		void	initHitPoints(void);
		void	initEnergyPoints(void);
		void	initAttackDamage(void);

	public:

		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap & src);
		DiamondTrap & operator = (const DiamondTrap & src);
		~DiamondTrap(void);

};

#endif
