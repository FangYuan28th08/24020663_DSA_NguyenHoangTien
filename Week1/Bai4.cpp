//Chuong trinh nhap 2 so a,b; viet ham rut gon a/b(kieu void).
//Do phuc tap thuat toan: 0(log(min(|a|,|b)))
//Do phuc tap bo nho:0(1)

#include <iostream>
using namespace std;

//Do phuc tap thuat toan: 0(log(min(|a|,|b)))
//Do phuc tap bo nho:0(1)
void rutgon(int &a, int &b){
    int x,y;
    x=a;
    y=b;
    while(y!=0){
        int z=x%y;
        x=y;
        y=z;
    }
    int ucln=x;
    a/=ucln;
    b/=ucln;
    if(b<0){
        a=-a;
        b=-b;
    }
}

//Do phuc tap thuat toan: 0(log(min(|a|,|b|)))
//Do phuc tap bo nho:0(1)
int main(){
    int a,b;
    cout << "Gia tri cua a la: ";
    cin >> a;
    cout << "Gia tri cua b la: ";
    cin >> b;
    if(b==0){
        cout << "Khong the rut gon phan so";
    } else{
        rutgon(a,b);
        if(b==1){
            cout << "Ham rut gon phan so la: " << a <<endl;
        } else cout << "Ham rut gon phan so la: " << a << "/" << b <<endl;
    }
    return 0;
}