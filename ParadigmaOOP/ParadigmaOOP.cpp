#include <iostream>
#include <string>

using namespace std;

class orang{
public :
    string nama;

    orang(string pNama):
    nama(pNama){
        cout << "Orang di buat\n" << endl;
        }
}

int main()
{
    std::cout << "Hello World!\n";
}


