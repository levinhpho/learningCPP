/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int i,j,m,n;
    int b = 1;
    cout << "Nhap cap cua ma tran: ";
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = b++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout << "\n";
    }  
    return 0;
}