#include <iostream>

int main()
{
    int num1, num2, num3;
    std::cin>>num1;
    std::cin>>num2;
    std::cin>>num3;
    
{
	if(num1<num2 && num2<num3);
  
    std::cout<<num1;
    std::cout<<num2;
    std::cout<<num3;
}
 {
	if (num1<num3 && num3<num2);
    
    std::cout<<num1;
    std::cout<<num3;
    std::cout<<num2;
}
   {
	 if (num2<num3 && num3<num1);
	 
    std::cout<<num2;
    std::cout<<num3;
    std::cout<<num1;
}
 return 0;
}

