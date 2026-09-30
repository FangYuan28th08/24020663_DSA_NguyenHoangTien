//Viet chuong trinh nhap vao mot so n, tinh n!.
//Do phuc tap thuat toan: 0(n)
//Do phuc tap bo nho:0(1)

#include <iostream>
using namespace std;

int main(){
    int n;
    int giaithua=1;
    cout << "Gia tri dau vao la: ";
    cin >>n;
    if(n<0){
        cout <<"Khong co ket qua";
    } else if(n==0 || n==1){
        cout << "Ket qua la: 1";
    } else{
        for(int i=1; i<=n; i++){
            giaithua*=i;
        }
        cout << "Ket qua la: " << giaithua;
    }
    return 0;
}