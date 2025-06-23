#pragma once
#include <iostream>
using namespace std;
#include "SpellBook.hpp"

class Warlock
{
	private :
		string _name;
		string _title;
		SpellBook _book;

		Warlock();
		Warlock(const Warlock& other);
		Warlock& operator=(const Warlock& other);

	public :
		~Warlock();

		const string& getName() const;
		const string& getTitle() const;

		void setTitle(const string& title);

		Warlock(const string& name, const string& title);

		void introduce() const;

		void learnSpell(ASpell* spell);
		void forgetSpell(const string& spell);
		void launchSpell(const string& spell, const ATarget& target);
};
