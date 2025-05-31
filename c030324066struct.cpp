#include <iostream>
using namespace std;
#include <string>

int main(){
    
    struct mahasiswa
    {
        string nim;
        string nama;
        string alamat;
        float ipk;

    };
    mahasiswa Edy;
    Edy.nama = "Edy Sukarma";
    Edy.nim = "c030324066";
    Edy.alamat = "Jl. Ahmad Yani. KM 15.200";
    Edy.ipk = 3.7;
    
    
    cout << "Nama : " <<Edy.nama <<endl;
    cout << "NIM : " <<Edy.nim << endl;
    cout << "Alamat : " <<Edy.alamat << endl;
    cout << "IPK : " <<Edy.ipk << endl;

    return 0;

}