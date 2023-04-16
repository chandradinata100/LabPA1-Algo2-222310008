#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
public:
  virtual void identitas() { cout << "..." << endl; }
};

class Status1 : public Mahasiswa {
public:
  void identitas() { cout << "Status: Mahasiswa Aktif"; }
};
class Nama1 : public Mahasiswa {
public:
  void identitas() { cout << "\nNama: Chandradinata"; }
};
class Usia1 : public Mahasiswa {
public:
  void identitas() { cout << "\nUmur: 19 tahun"; }
};
class Jurusan1 : public Mahasiswa {
public:
  void identitas() { cout << "\nJurusan: S1 - Teknologi Informasi"; }
};
class Fakultas1 : public Mahasiswa {
public:
  void identitas() { cout << "\nFakultas: Informatika & Pariwisata"; }
};

class Status2 : public Mahasiswa {
public:
  void identitas() { cout << "\n\nStatus: Mahasiswa Aktif" << endl; }
};
class Nama2 : public Mahasiswa {
public:
  void identitas() { cout << "Nama: Thimotius Vincent" << endl; }
};
class Usia2 : public Mahasiswa {
public:
  void identitas() { cout << "Umur: 19 tahun" << endl; }
};
class Jurusan2 : public Mahasiswa {
public:
  void identitas() { cout << "Jurusan: S1 - Manajemen" << endl; }
};
class Fakultas2 : public Mahasiswa {
public:
  void identitas() { cout << "Fakultas: Bisnis" << endl; }
};

int main() {
  Mahasiswa *a = new Status1();
  Mahasiswa *b = new Nama1();
  Mahasiswa *c = new Usia1();
  Mahasiswa *d = new Jurusan1();
  Mahasiswa *e = new Fakultas1();
  Mahasiswa *f = new Status2();
  Mahasiswa *g = new Nama2();
  Mahasiswa *h = new Usia2();
  Mahasiswa *i = new Jurusan2();
  Mahasiswa *j = new Fakultas2();

  a->identitas();
  b->identitas();
  c->identitas();
  d->identitas();
  e->identitas();
  f->identitas();
  g->identitas();
  h->identitas();
  i->identitas();
  j->identitas();

  return 0;
}