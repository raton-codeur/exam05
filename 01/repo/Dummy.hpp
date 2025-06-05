#include <iostream>
class ATarget;

class Dummy : ATarget
{
	public :
		Dummy();
		~Dummy();
		ATarget* clone ();
}