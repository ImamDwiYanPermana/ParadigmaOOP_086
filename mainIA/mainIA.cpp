#include <iostream>
#include <vector>
using namespace std;



int main()
{
    ibu* varIbu = new ibu("dini");
    ibu* varIbu = new ibu("novi");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("rini");
    anak* varAnak3 = new anak("dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak1);
    varibu2->tambahAnak(varAnak3);
    varibu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varibu->cetakAnak();

    delete varIbu;
    delete varibu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

    return
}


