#include <iostream>
using namespace std; //standarisasi

class contoh { // nama class nya 'contoh'
  private:       // penentu akses
    int nilai;   // menginput variabel nilai
  public: // penentu akses
    contoh(int n) {
     nilai = n;
    } // menginisialisasi nilai contoh dengan variabel nilai dan n

    int getNum() { 
      return nilai; 
    } // memanggil variabel nilai
};

int main() {
  contoh obj(100); // menginput objek nya menjadi bernilai 100
  cout << "Nilai Yang diinput: " << obj.getNum() << endl; // output program
  return 0; //mengembalikan/mereset program
}

//program ini merupakan penerapan program destructor