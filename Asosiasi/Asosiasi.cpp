#include <iostream>
#include <vector>

using namespace std;

class dokter;
    class pasien {
    public : 
        string nama;
        vector<dokter*> daftar_dokter;
        pasien(string pNama) : nama(pNama) {
            cout << "pasien \"" << nama << "\"ada\n";
        }
        ~pasien() {
            cout << "pasien \"" << nama << "\"tidak akan \n";
        }
        void tambahDokter(dokter*);
        void cetakDokter();
    };

    class dokter {
    public:
        string nama;
        vector<pasien*> daftar_pasien;

        dokter(string pNama) : nama(pNama) {
            cout << "dokter\"" << nama << "\"ada\n";
        }
        ~dokter(){
            cout << "dokter"\"" << nama << "\"tidak ada\n";
        }
        void tambahkanPasien(pasien*);
        void cetakPasien();
    };
int main()
{
    std::cout << "Hello World!\n";
}


