/******************************************************************************
Viết một chương trình C++ để nhận 5 giá trị nguyên từ bàn phím. 5 giá trị này sẽ được lưu trữ trong một mảng bởi sử dụng một con trỏ.
Sau đó, in các phần tử của mảng trên màn hình.
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a[5];
    cout << "Nhap 5 gia tri nguyen " ;
    for (int i = 0; i < 5; i++)
    {
        cout << i << ": "; // In ra từng phần tử
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "\n" << &a[i];
    }
    int *ptr = a;
    for (int i = 0; i < 5; i++)
        cout << "\nGia tri bien: " << *(ptr + i); // ptr tro den phan tu dau tien, 
    return 0;
}