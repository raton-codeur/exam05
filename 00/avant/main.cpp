#include "Warlock.hpp"

int main()
{
	std::cout << "--- 1 ---" << std::endl;
	{
		const Warlock richard("Richard", "Mistress of Magma");
		richard.introduce();
		std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;
	}
	std::cout << "--- 2 ---" << std::endl;
	Warlock* jack = new Warlock("Jack", "the Long");
	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();
	delete jack;
}
