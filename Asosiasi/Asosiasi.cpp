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
            cout << "dokter\n" << nama << "\"tidak ada\n";
        }
        void tambahPasien(pasien*);
        void cetakPasien();
    };

    void pasien::tambahDokter(dokter* pDokter) {
        daftar_dokter.push_back(pDokter);
    }

    void pasien::cetakDokter() {
        cout << "Daftar Dokter Yang Menangani pasien \n" << this->nama << "\:\n";
        for (auto& a : daftar_dokter) {
            cout << a->nama << "\n";
        }
        cout << endl;
    }
int main()
{
    std::cout << "Hello World!\n";
}


