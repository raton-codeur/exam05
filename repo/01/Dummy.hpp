#pragma once
#include <iostream>
using namespace std;

class Dummy : public ATarget
{
	public : 
		Dummy();
		~Dummy();

		ATarget* clone() const;
};