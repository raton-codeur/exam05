#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::TargetGenerator(const TargetGenerator& other)
{
	*this = other;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& other)
{
	(void)other;
	return *this;
}

TargetGenerator::~TargetGenerator()
{
	MapTarget::iterator i = _targets.begin();
	while (i != _targets.end())
	{
		delete i->second;
		i++;
	}
}

void TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		_targets[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(const string& target)
{
	MapTarget::iterator i = _targets.find(target);
	if (i != _targets.end())
	{
		delete i->second;
		_targets.erase(i);
	}
}

ATarget* TargetGenerator::createTarget(const string& target)
{
	MapTarget::iterator i = _targets.find(target);
	if (i != _targets.end())
		return i->second;
	return 0;
}
