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
    int n;
    int b = 1,c,d,e;
    do {
        cout << "Nhap gia tri cua n: ";
        cin >> n;
        }
    while (n >= 10 || n <= 2);
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            a[i][j] = 0;
    }
    for (int j = 0; j < n; j++)
    {   
        a[0][j] = b++;
    }
    for (int i = 0; i < n; i++)
    {
        a[i+1][n-1] = b++;
    }
    for (int j = n - 2 ; j >= 0 ; j--)
    {
        a[n-1][j] = b++;
    }
   
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j];
        cout << endl;         
    }

    return 0;
}