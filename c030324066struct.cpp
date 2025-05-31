#include <iostream>
#include <string>
using namespace std;

int main() {
    struct mahasiswa {
        string nim;
        string nama;
        string alamat;
        float ipk;
    };

    mahasiswa edy;
    mahasiswa* ptr = &edy; // pointer ke struct edy

   
    ptr->nama = "Edy Sukarma";
    ptr->nim = "c030324066";
    ptr->alamat = "Jl. Ahmad Yani KM 15.200";
    ptr->ipk = 3.9;

    // Menampilkan data
    cout << "Nama   : " << ptr->nama << "\n";
    cout << "NIM    : " << ptr->nim << "\n";
    cout << "Alamat : " << ptr->alamat << "\n";
    cout << "IPK    : " << ptr->ipk << "\n";

    return 0;
}