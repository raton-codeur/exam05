#include <iostream>

class ASpell
{
	private :
	protected :
	std::string name;
	std::string effects;
	public :
	ASpell();
	ASpell(const ASpell&);
	ASpell& operator=(const ASpell&);
	virtual ~ASpell() = 0;
	std::string getName();
	std::string getEffects();
}

