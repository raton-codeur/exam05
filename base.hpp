#pragma once
#include <iostream>
using namespace std;

class Base
{
	private :


	public :
		Base();
		Base(const Base& other);
		Base& operator=(const Base& other);
		~Base();


};
