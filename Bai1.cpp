//nh?p 1 s? có 4 chu s? => in ra s? ngu?c l?i ex: 1245 => 5421
#include <iostream>
int main()
{
	int num, dv, ch, tr, ng;  
	 
	std::cout << "nhap so ";
	std::cin >> num;
	std::cout << "so vua nhap ";
	std::cout << num ;
	dv = num % 10;
	ch = (num % 100) / 10 ;
	tr = (num % 1000) / 100; 
	ng = (num % 10000) / 1000; 
	std::cout << std::endl;
	std::cout << dv * 1000 + ch * 100 + tr * 10 + ng; 
	return 0;
}

