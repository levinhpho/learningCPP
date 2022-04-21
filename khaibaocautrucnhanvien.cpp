
/****************************************************************************** 

  

Welcome to GDB Online. 

GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,  

C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS 

Code, Compile, Run and Debug online from anywhere in world. 

  

*******************************************************************************/ 

#include <iostream> 

using namespace std; 

struct Employee 

{ 

    string name {}; 

    int id {}; 

    int age {}; 

    float wage {}; 

    bool gender {}; 

}; 
void swap(Employee &x, Employee &y);
void bubbleSort(Employee a[], int b);
int main() 

{ 

    int n; 
    cout << "Nhap so phan tu: ";
    cin >> n;
    
    Employee a[n]; 
    string x; 

    for (int i = 0; i < n ; i++) 
    { 
        cout << "\nNhap ten nhan vien thu "<< i << ": ";
        cin.ignore();
        std::getline(cin, a[i].name); 
        
        cout << "Nhap ngay sinh nhan vien thu "<< i << ": "; 
        cin >> a[i].id; 

        cout << "Nhap tuoi nhan vien thu "<< i << ": "; 
        cin >> a[i].age; 

        cout << "Nhap luong nhan vien thu "<< i << ": "; 
        cin >> a[i].wage; 

        cout << "Nhap gioi tinh nhan vien thu "<< i << ": "; 
        cin >> a[i].gender; 

         
    }
    for (int i = 0; i < n ; i++) 
    {
        cout << "\nTen nhan vien thu "<< i << ": " << a[i].name << endl; 

        cout << "Ngay sinh nhan vien thu "<< i << ": " << a[i].id << endl; 

        cout << "Tuoi nhan vien thu "<< i << ": " << a[i].age << endl; 

        cout << "Luong nhan vien thu "<< i << ": " << a[i].wage << endl; 

        if (a[i].gender == 1) 
            x = "Nam"; 
        else 
            x = "Nu";
        cout << "Gioi tinh nhan vien thu "<< i << ": " << x << endl; 

    } 
    cout << "\nNhan vien tren 40 tuoi: \n";
    for (int i = 0; i < n ; i++)
    {
        if (a[i].age >= 40)
            cout << a[i].name << endl;
    }
    cout << "\nSo luong nhan vien co luong tren 1000: \n";
    int tong = 0;
    for (int i = 0; i < n ; i++)
    {
        if (a[i].wage >= 1000)
            tong = tong + 1;
    }
    cout << tong << endl;
    bubbleSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << endl;
    }
    
    return 0; 
}   

void swap(Employee &x, Employee &y)
{
    Employee z = x;
    x = y;
    y = z;
}
void bubbleSort(Employee a[], int b)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < b ; i++ )
    {
        haveSwap = false;
        for (j = 0; j < b - j - 1; j++)
        {
            if (a[j].age > a[j+1].age)
            {
                swap(a[j],a[j+1]);
                haveSwap = true;
            }
        }
        if (haveSwap == false)
        {
            break;
        }
    }
}

    
    
   