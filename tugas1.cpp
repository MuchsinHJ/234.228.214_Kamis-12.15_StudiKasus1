#include <iostream>
#include <string>
using namespace std;

class Ktp {
    friend ostream &operator<<(ostream &out, const Ktp &ktp);
    friend istream &operator>>(istream &inp, Ktp &ktp);

public:
    Ktp() : rt(0), rw(0) {}

private:
    string nik, nama, prov, kab, tempatTanggal, jenis, alamat, desa, camat, agama, status, pekerjaan, kewarganegaraan, masaBerlaku;
    int rt, rw;
    char gol;
};

istream &operator>>(istream &inp, Ktp &ktp) {
    cout << "Masukkan Provinsi: ";
    getline(inp, ktp.prov);

    cout << "Masukkan Kota/Kabupaten: ";
    getline(inp, ktp.kab);

    cout << "Masukkan NIK: ";
    inp >> ktp.nik;
    inp.ignore();

    cout << "Masukkan Nama: ";
    getline(inp, ktp.nama);

    cout << "Masukkan Tempat/Tanggal Lahir: ";
    getline(inp, ktp.tempatTanggal);

    cout << "Masukkan Jenis Kelamin: ";
    getline(inp, ktp.jenis);

    cout << "Masukkan Golongan Darah: ";
    inp >> ktp.gol;
    inp.ignore();

    cout << "Masukkan Alamat: ";
    getline(inp, ktp.alamat);

    cout << "Masukkan RT: ";
    inp >> ktp.rt;

    cout << "Masukkan RW: ";
    inp >> ktp.rw;
    inp.ignore();

    cout << "Masukkan Kelurahan/Desa: ";
    getline(inp, ktp.desa);

    cout << "Masukkan Kecamatan: ";
    getline(inp, ktp.camat);

    cout << "Masukkan Agama: ";
    getline(inp, ktp.agama);

    cout << "Masukkan Status Perkawinan: ";
    getline(inp, ktp.status);

    cout << "Masukkan Pekerjaan: ";
    getline(inp, ktp.pekerjaan);

    cout << "Masukkan Kewarganegaraan: ";
    getline(inp, ktp.kewarganegaraan);

    cout << "Masukkan Masa Berlaku: ";
    getline(inp, ktp.masaBerlaku);

    return inp;
}

ostream &operator<<(ostream &out, const Ktp &ktp) {

    //output
    return out;
}

int main() {
    Ktp biodata;
    cin >> biodata;
    cout << biidata;
}
