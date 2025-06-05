#include <iostream>

class ATarget;

class ASpell
{
	private :
		std::string name;
		std::string effects;
	public :
		ASpell();
		ASpell(const ASpell&);
		ASpell& operator=(const ASpell&);
		virtual ~ASpell();

		std::string getName();
		std::string getEffects();

		ASpell(const std::string& name, const std::string effects);

		virtual ASpell* clone() = 0;

		void launch(const ATarget& target);
}

