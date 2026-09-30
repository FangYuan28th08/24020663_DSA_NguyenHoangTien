// Viet chuong trinh nhap vao mot day gom N phan tu, tinh tong cac phan tu trong day.
// do phuc tap cua thuat toan: 0(n)
// do phuc tap cua bo nho: 0(1)

#include <iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    int a[1000];
    cout << "So luong phan tu la: ";
    cin >> n;
    for(int i=0; i<n; i++){
        cin >>a[i];
        sum+=a[i];
    }
    cout << "Tong cac phan tu trong day la: " << sum<< endl;
    return 0;
}