#include <iostream>
#include <string>
using namespace std;

int main()
{
    string matkul;
    int nim;
    string nama;
    int nilaiAkhir;
    char mutu;

    cout << "masukan nama mata kuliah : ";
    getline(cin, matkul);

    cout << "masukan nim mahasiswa : ";
    cin >> nim;
    cin.ignore();

    cout << "masukan nama mahasiswa : ";
    getline(cin, nama);

    cout << "masukan nilai akhir : ";
    cin >> nilaiAkhir;

    if (nilaiAkhir >= 80)
    {
        mutu = 'A';
    }
    else if (nilaiAkhir >= 70)
    {
        mutu = 'B';
    }
    else if (nilaiAkhir >= 60)
    {
        mutu = 'C';
    }
    else if (nilaiAkhir >= 50)
    {
        mutu = 'D';
    }
    else
    {
        mutu = 'E';
    }

    cout << "Nama : " << nama << endl;
    cout << "Nim : " << nim << endl;
    cout << "Mata Kuliah : " << matkul << endl;
    cout << "Nilai Akhir : " << nilaiAkhir << endl;
    cout << "Huruf Mutu : " << mutu;

    return 0;
}
