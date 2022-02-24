#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c, x1, x2, delta;
    std::cout << " Enter coefficients: " << endl;
    std::cin >> a >> b >> c;
    delta = b*b - 4*a*c;
    
    if (delta > 0)
{    
    x1 = (-b + sqrt(delta))/ 2*a;
    x2 = (-b - sqrt(delta))/ 2*a;
    std::cout << "x1 = " << x1 << endl;
    std::cout << "x2 = " << x2 << endl;
}
    if (delta == 0)
{   
    x1 = -b/(2*a);
    std::cout << "x1 = x2 = " << x1 << endl;
}    

    if (delta < 0)
{
    std::cout << "Math Error" << endl;
}
    return 0;
}
