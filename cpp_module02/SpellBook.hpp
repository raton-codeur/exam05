#pragma once
#include <iostream>
using namespace std;
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
typedef map<const string, ASpell*> MapSpell;

class SpellBook
{
	private :
		MapSpell _spells;

		SpellBook(const SpellBook& other);
		SpellBook& operator=(const SpellBook& other);

	public :
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell* spell);
		void forgetSpell(const string& spell);
		ASpell* createSpell(const string& spell);
};
