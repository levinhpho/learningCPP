#include <iostream>
/*
    Nh?p t? b�n ph�m m?ng s? nguy�n g?m n ph?n t?. (0< n < 100 )
    a, nh?p m?ng n ph?n t?
    b, in mnagr v?a nh?p
    1. T�m s? l?n nh?t trong m?ng v?a nh?p
    2. in c�c s� nguy�n t? trong m?ng
    3. t�nh t?ng c�c s? ch?n trong m?ng
    */
using namespace std;

int main()
{
   int n;
   do{
        cout << "nhap n: ";
        cin >> n;
   }while(!(0 < n) || !(n < 100));
    cout << n << endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap mang n phan tu " << i << ": ";
        cin  >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    int x = a[0];
    for (int i = 0; i < n; i++)
    {    if (a[i] > x);
            x = a[i];
    }        
    cout << "\nso lon nhat: " << x;
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0);
        sum = a[i] + sum;
    }
    cout << "\ntong so chan: " << sum;
    return 0;
}
