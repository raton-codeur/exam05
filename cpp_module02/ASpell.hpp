#pragma once
#include <iostream>
using namespace std;
class ATarget;

class ASpell
{
	private :
		string _name;
		string _effects;


	public :
		ASpell();
		ASpell(const ASpell& other);
		ASpell& operator=(const ASpell& other);
		virtual ~ASpell();

		const string& getName() const;
		const string& getEffects() const;

		virtual ASpell* clone() const = 0;

		ASpell(const string& name, const string& effects);

		void launch(const ATarget& target) const;

		
};
