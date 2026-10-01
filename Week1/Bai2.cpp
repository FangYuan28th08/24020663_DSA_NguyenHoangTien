//Viet chuong trinh nhap vao mot day gom N phan tu, viet ham sap xep day theo thu tu tang dan(ham kieu void)
//Do phuc tap thuat toan: 0(n^2)
//Do phuc tap bo nho:0(1)

#include <iostream>
using namespace std;

//Do phuc tap thuat toan: 0(n^2)
//Do phuc tap bo nho:0(1)
void sapxep(int n, int a[]){
    int luutru;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                luutru= a[i];
                a[i]=a[j];
                a[j]=luutru;
            }
        }
    }
}

//Do phuc tap thuat toan: 0(n^2)
//Do phuc tap bo nho:0(1)
int main(){
    int n;
    int a[1000];
    cout << "So luong phan tu la: ";
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sapxep(n, a);
    for(int i=0; i<n; i++){
        cout <<a[i]<<" ";
    }
    return 0;
}