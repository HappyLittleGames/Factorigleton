#include <iostream>
#include "Corporate.h"

int main()
{
	std::cout << "Hello." << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "put it int" << std::endl << std::endl;
	
	Corporate* corporate = Corporate::GetInstance();
	int tempInt = 0;
	std::cin >> tempInt; 
	corporate->SetInt(tempInt);

	std::cout << "--------------" << std::endl;
	std::cout << "it's " << corporate->GetInt() << "now." << std::endl;

	while (corporate->GetInt() != 9)
	{
		std::cin >> tempInt;
		corporate->SetInt(tempInt);
		std::cout << "--------------" << std::endl;
		std::cout << "it's " << corporate->GetInt() << "now." << std::endl;
	}


	return 0;
}
