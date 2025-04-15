/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:25:39 by tatahere          #+#    #+#             */
/*   Updated: 2025/04/15 18:08:09 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "FragTrap.hpp"
# include <string>

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap & src);
		FragTrap & operator = (const FragTrap & src);
		~FragTrap(void);

		void		highFivesGuys(void);
};

#endif
