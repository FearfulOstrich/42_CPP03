#ifndef _CLAVTRAP_HPP_
# define _CLAVTRAP_HPP_

# include <iostream>
# include "ClapTrap.hpp"

class ClavTrap: public ClapTrap
{
private:
	bool	_is_keeping;
protected:

public:
	// Constructors
	ClavTrap();
	ClavTrap(const ClavTrap& src);
	ClavTrap(const std::string& name);

	// Destructors
	virtual ~ClavTrap();

	// Operator overload
	ClavTrap&	operator=(const ClavTrap& other);

	// Getters
	bool	getIsKeeping(void) const;

	// Member functions
	void	guardGate(void);
};

std::ostream&	operator<<(std::ostream& os, ClavTrap const &obj);

#endif
