#ifndef _FLAGTRAP_HPP_
# define _FLAGTRAP_HPP_

# include <iostream>
# include "ClapTrap.hpp"

class FlagTrap: virtual public ClapTrap
{
private:

protected:

public:
	// Constructors
	FlagTrap();
	FlagTrap(const FlagTrap& other);
	FlagTrap(const std::string& name);

	// Destructors
	virtual ~FlagTrap();

	// Operator overload
	FlagTrap&	operator=(const FlagTrap& other);

	// Accessors (getters should return by value or const-reference)
	// Member functions
	void	highFiveGuys(void);
};

std::ostream&	operator<<(std::ostream& os, const FlagTrap& obj);

#endif
