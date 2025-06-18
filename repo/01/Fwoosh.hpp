#pragma once
#include <iostream>
using namespace std;

class Fwoosh : public ASpell
{
	public : 
		Fwoosh();
		~Fwoosh();

		ASpell* clone() const;
};