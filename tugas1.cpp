#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Ktp {
  friend ostream &operator << (ostream &out, const Ktp &ktp);
  friend istream &operator >> (istream &inp,Ktp &ktp);
  public:

  private:
  string nik, prov, kab, nama, tempatTanggal,jenis, alamat, desa, camat, agama, status, pelerjaan;
  int rt, rw;
  char gol;
};
istream &operator>>(istream &inp,Ktp &ktp){
  //Isi input dan output buat masukkin data
  cout << "Masukkan NIK anda: ";
  //ganti cin jadi inp
  inp >> ktp.nik;

  return inp;
}
ostream &operator<<(ostream &out, const Ktp &ktp){
  //isi untuk keluaran outputnya atau tampilan ktp nya
  // ganti cout jadi out
  out << "NIK: " << ktp.nik;

  return out;
}

int main(){
  Ktp biodata;
  cin >> biodata;
  cout << biodata;
}