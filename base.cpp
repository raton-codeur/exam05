#include "Base.hpp"

Base::Base()
{}

Base::Base(const Base& other)
{
	*this = other;
}

Base& Base::operator=(const Base& other)
{
	(void)other;
	return *this;
}

Base::~Base()
{}
