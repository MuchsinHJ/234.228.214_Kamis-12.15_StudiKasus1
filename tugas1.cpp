#include <iostream>
#include <string>
using namespace std;

class Ktp {
    friend ostream &operator<<(ostream &out, const Ktp &ktp);
    friend istream &operator>>(istream &inp, Ktp &ktp);

public:
    // Ktp() : rt(0), rw(0) {}

private:
    string nik, nama, prov, kab, tempatTanggal, jenis, alamat, desa, camat, agama, status, pekerjaan, kewarganegaraan, masaBerlaku;
    char gol[3];
    int rt, rw;
    string kondisi;
};

istream &operator>>(istream &inp, Ktp &ktp) {
    while (ktp.kondisi != "yes")
    {
        /* code */
        cout << "Masukkan Provinsi(Kapital): ";
        getline(inp, ktp.prov);
    
        cout << "Masukkan Kota/Kabupaten(Kapital): ";
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

        cout << "Apakah data yang anda masukkan sudah benar? (yes/no) : ";
        cin >> ktp.kondisi;
    }
    

    return inp;
}

ostream &operator<<(ostream &out, const Ktp &ktp) {

    out << "\n|==============================================================================|" << endl;
    out << "|                             KARTU TANDA PENDUDUK                             |" << endl; 
    out << "|==============================================================================|" << endl;
    out << "                         PROVINSI " << ktp.prov << endl;
    out << "                              " << ktp.kab << endl;
    out << endl;
    out << "NIK                          \t: " << ktp.nik << endl;
    out << "Nama                         \t: " << ktp.nama << endl;
    out << "Tempat/Tanggal lahir         \t: " << ktp.tempatTanggal << endl;
    out << "Jenis Kelamin                \t: " << ktp.jenis <<"\t\t\tGol. Darah: "<< ktp.gol << endl;
    out << "Alamat                       \t: " << ktp.alamat << endl;
    out << "\tRT/RW                          : " << ktp.rt << "/" << ktp.rw << endl;
    out << "\tKel/Desa                       : " << ktp.desa << endl;
    out << "\tKecamatan                      : " << ktp.camat << endl;
    out << "Agama                        \t: " << ktp.agama << endl;
    out << "Status Perkawinan            \t: " << ktp.status << endl;
    out << "Pekerjaan                    \t: " << ktp.pekerjaan << endl;
    out << "Kewarganegaraan              \t: " << ktp.kewarganegaraan << endl;
    out << "Masa Berlaku                 \t: " << ktp.masaBerlaku << endl;
    out << "|==============================================================================|" << endl;
    return out;
}

int main() {
    Ktp biodata;
    cin >> biodata;
    cout << biodata;
}
