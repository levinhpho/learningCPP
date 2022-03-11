/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int nhapN ()
{
    int n;
    do{
        cout << "nhap n: ";
        cin >> n;
    }while(!(0 < n) || (n > 100));
    cout << n << endl;
    return n;
}
void nhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap mang n phan tu " << i << ":";
        cin >> a[i];
    }
}
void inMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void soLonNhat(int a[], int n)
{
    int x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x);
            x = a[i];
    }
    cout <<"\nso lon nhat: " << x;    
}
void tongSoChan(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        sum = a[i] + sum;
    }
    cout << "\ntong so chan: " << sum;
}
int main()
{
    int b;
    int n;
    b = nhapN();
    int a[n];
    nhapMang(a, n);
    inMang(a,n);
    soLonNhat(a, n);
    tongSoChan(a,n);
    return 0;
}

    
