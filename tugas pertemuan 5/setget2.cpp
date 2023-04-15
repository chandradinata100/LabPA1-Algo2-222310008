#include <iostream>
#include <string>
using namespace std;

class Perpustakaan{
  private:
    string meminjam;
    string mengembalikan;

  public:
    void setPinjam(string p){
      meminjam = p;
    }
    void setKembali(string k){
      mengembalikan = k;
    }
    string getPinjam(){
      return meminjam;
    }
    string getKembali(){
      return mengembalikan;
    }
};

int main(){
  Perpustakaan buku;
  buku.setPinjam(" Buku Mein Kampf by Adolf Hitler telah dipinjam oleh ");
  buku.setKembali(" Buku Tesla Inventor Of The Electrical Age telah dikembalikan oleh ");
  cout <<  buku.getPinjam() << "Anggun" <<endl;
  cout <<  buku.getKembali() << "Anggun" << endl;

  return 0;
}