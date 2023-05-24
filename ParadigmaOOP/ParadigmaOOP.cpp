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
};
int main()
{
    std::cout << "Hello World!\n";
}


