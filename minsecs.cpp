#include <iostream>

int main()
{
	int min, sec;
	std::cout<<"Enter minutes.";
	std::cin>>min;
	sec=min*60;
	std::cout<<"The "<< min <<" minutes are "<< sec <<" seconds.";
	
	return 0;
}
