#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:

protected:

public:
	// Constructors
	FragTrap();
	FragTrap(const FragTrap& other);
	FragTrap(const std::string& name);

	// Destructors
	virtual ~FragTrap();

	// Operator overload
	FragTrap&	operator=(const FragTrap& other);

	// Accessors (getters should return by value or const-reference)
	// Member functions
	void	highFiveGuys(void);
};

std::ostream&	operator<<(std::ostream& os, const FragTrap& obj);

#endif
