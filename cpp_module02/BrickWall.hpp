#pragma once
#include <iostream>
using namespace std;
#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public :
		BrickWall();
		~BrickWall();

		ATarget* clone() const;
};
