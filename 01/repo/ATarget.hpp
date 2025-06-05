#include <iostream>

class ASpell;

class ATarget
{
	private :
		std::string type;
	public :
		ATarget();
		ATarget(const ATarget& o);
		ATarget& operator=(const ATarget& o);
		virtual ~ATarget();

		const std::string& getType() const;

		virtual ATarget* clone () = 0;

		ATarget(std::string type);

		void getHitBySpell(const ASpell& spell);
};
