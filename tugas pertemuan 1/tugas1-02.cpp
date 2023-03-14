#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void bubbleSort(string arr[], int n);

int main() {
    int n;
    cout << "Jumlah buku yang ingin dimasukkan: ";
    cin >> n;
    string judul[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan judul buku ke-" << i+1 << ": ";
        cin >> judul[i];
    }
    bubbleSort(judul, n);
    cout << "\nPengurutan judul buku dalam alfabet:\n";
    for (int i = 0; i < n; i++) {
        cout << judul[i] << endl;
    }
    return 0;
}
void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}