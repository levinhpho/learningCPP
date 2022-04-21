#include <iostream>
#include <cmath>

using namespace std;

char nhapN(){
    char n;
    cout << "Chuong trinh may tinh co ban: " << endl;
    cout << "+: tinh tong 2 so" << endl;
    cout << "-: tinh hieu 2 so" << endl;
    cout << "*: tinh tich 2 so" << endl;
    cout << "/: tinh thuong 2 so" << endl;
    cout << "x: neu ban muon thoat chuong trinh" << endl;
    std::cout << "Moi nhap lua chon: ";
    std::cin >> n;
    return n;
}
int main()
{
    while(true){
        char option;
        option = nhapN();
        if(option == 'x'){
            cout << "Ban da thoat chuong trinh. Xin cam on!";
            break;
        }
        int a,b;
        float kq = 0;
        switch(option)
        {
            case '+':{
                cout << "Moi nhap 2 so can tinh tong: ";
                cin >> a;
                cin >> b;
                kq = a + b;
                cout << "Tong la: " << kq << endl;
            } break;
            
            case '-':{
                cout << "Moi nhap 2 so can tinh hieu: ";
                cin >> a;
                cin >> b;
                kq = a - b;
                cout << "Hieu la: " << kq << endl;
            } break;
            
            case '*':{
                cout << "Moi nhap 2 so can tinh tich: ";
                cin >> a;
                cin >> b;
                kq = a*b;
                cout << "Tich la: " << kq << endl;
            } break;
            
            case '/':{
                cout << "Moi nhap 2 so can tinh thuong: ";
                cin >> a;
                cin >> b;
                kq = a/b;
                cout << "Thuong la: " << kq << endl;
            } break;
                
            default:{
                cout << "Error" << endl;
            } break;
        }
}
    
    return 0;
}