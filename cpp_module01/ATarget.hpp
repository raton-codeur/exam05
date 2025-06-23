#pragma once
#include <iostream>
using namespace std;
class ASpell;

class ATarget
{
	private :
		string _type;

	public :
		ATarget();
		ATarget(const ATarget& other);
		ATarget& operator=(const ATarget& other);
		~ATarget();

		const string& getType() const;

		virtual ATarget* clone() const = 0;

		ATarget(const string& type);

		void getHitBySpell(const ASpell& spell) const;
};
