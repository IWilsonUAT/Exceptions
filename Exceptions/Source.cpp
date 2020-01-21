#include <iostream>
#include <string>

int main()
{
	try
	{
		//holding all ages acquired from user
		int k_age;
		int m_age;
		int d_age;
		//getting dad's age from user
		std::cout << "\n\n\t\t****Welcome to the DNA Freeway!****\n\n";
		std::cout << "\nEnter Dad's age: ";
		std::cin >> d_age;
		//getting mom's age from user
		std::cout << "\nEnter Mom's age: ";
		std::cin >> m_age;
		//getting kid's age from user
		std::cout << "\nEnter kid's age: ";
		std::cin >> k_age;
		//running DNA Tests = Not really just stupid age tests
		
		std::cout << "\nDNA Freeway is processing Dad's DNA.....\n";
		if (k_age >= d_age)
		{
			throw 33;
		}
		std::cout << "\nDNA Freeway is processing Mom's DNA.....\n";
		if (k_age >= m_age)
		{
			throw 43;
		}
		std::cout << "\nDNA Freeway is processing Kid's DNA.....\n";
		system("pause");
		system("cls");
		//output results to user
		std::cout << "\n\n ### The Results are back ###\n";
		std::cout << "Dad's age is: " << d_age;
		std::cout << "Mom's age is: " << m_age;
		std::cout << "Kid's age is: " << k_age;
		throw 54;
	}
	catch (int errorNumber)
	{
		//specific error messages
		if (errorNumber == 33)
		{
			std::cout << "Strange our DNA Machine found that the son/daughter is older than their Dad.\n";
			
		}
		if (errorNumber == 43)
		{
			std::cout << "Strange our DNA Machine found that the son/daughter is older than their Mom.\n";

		}
		//general error messages 
		std::cout << "Error #" << errorNumber << " has occured.\n";
	}
}