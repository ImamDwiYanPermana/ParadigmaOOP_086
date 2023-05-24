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



int main()
{
    std::cout << "Hello World!\n";
}


