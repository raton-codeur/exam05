#pragma once
#include <iostream>
using namespace std;
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public :
		Fwoosh();
		~Fwoosh();

		ASpell* clone() const;
};
