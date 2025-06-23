#pragma once
#include <iostream>
using namespace std;
#include <map>
#include "ATarget.hpp"
typedef map<const string, ATarget*> MapTarget;

class TargetGenerator
{
	private :
		MapTarget _targets;

		TargetGenerator(const TargetGenerator& other);
		TargetGenerator& operator=(const TargetGenerator& other);

	public :
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget* target);
		void forgetTargetType(const string& target);
		ATarget* createTarget(const string& target);
};
