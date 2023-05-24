#include <iostream>
#include <string>

using namespace std;

class orang {
public:
    string nama;

    orang(string pNama) :
        nama(pNama) {
        cout << "Orang di buat\n" << endl;
    }

    ~orang() {
        cout << "Orang di hapus" << endl;
    }

    int jumlah(int a, int b) {
        return a + b;
    }
};

class pelajar : public orang {
public : 
    string sekolah;

    pelajar (string pNama, string pSekolah):
        orang (pNama),
        sekolah(pSekolah) {
        cout << " pelajar dohapus\n" << endl;
    }
    ~pelajar() {
        cout << "pelajar dihapus\n" << endl;
    }
    string perkenalan() {
        return "Hallo, Nama Saya " + nama + " dari sekilah " + sekolah + "\n\n";
    }
};
int main()
{
    pelajar siswa1("andi lasksono", " SMAN 1 BANTUL");
    cout << siswa1.perkenalan();
    cout << "hasi =" << siswa1.jumlah(10, 90) << endl;

    return 0;

};