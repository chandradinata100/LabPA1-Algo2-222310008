#include <iostream>
#include <algorithm>
using namespace std;
const int A = 100;
string buku[A];
int binarySearch (string p, int q, int r){
    if (r >= 1) {
        int mid = 1 + (r - 1)/2;
        if (buku[mid] == p)
            return mid;
        if (buku[mid] > p)
            return binarySearch (p,q,mid - 1);
        return binarySearch (p,mid + 1, r);
    }
    return -1;
}
int main(){
    int n;
    cout <<"Silahkan input banyak buku : ";
    cin >> n;
    for (int i=0 ; i<n ; i++){
        cout <<"Masukkan nama buku "<< i+1 <<" : ";
        cin >> buku[i];
    }
    sort (buku, buku + n);
    string z;
    cout <<"Silahkan input buku yang ingin dicari :";
    cin >> z;
    int result = binarySearch (z, 0 ,n-1);
    if (result == -1 )
    cout <<"Nama buku yang dimasukkan tidak dapat ditemukan." <<endl;
    else
      result = result+1;
    cout <<"Buku ditemukan pada nomor "<< result<<endl;
    return 0;
}