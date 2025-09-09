#include <iostream>
using namespace std;

// SOAL 3. Struct + Array

struct Mahasiswa {
    string nama;
    string nim;
    float ipk;
};

int main() {
    const int N = 4;
    Mahasiswa mhs[N];

    cout << "Silakan masukkan 4 mahasiswa dan datanya:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "\nMahasiswa " << i + 1 << endl;
        cout << "Nama: ";
        cin >> mhs[i].nama;
        cout << "NIM: ";
        cin >> mhs[i].nim;
        cout << "IPK: ";
        cin >> mhs[i].ipk;
    }

    // mengurutkan menggunakan bubble sort
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (mhs[j].ipk > mhs[j + 1].ipk) {
                Mahasiswa temp = mhs[j];
                mhs[j] = mhs[j + 1];
                mhs[j + 1] = temp;
            }
        }
    }

    cout << "\nData mahasiswa setelah mengurutkan IPK (ascending):" << endl;
    for (int i = 0; i < N; i++) {
        cout << i + 1 << ". Nama: " << mhs[i].nama
             << ", NIM: " << mhs[i].nim
             << ", IPK: " << mhs[i].ipk << endl;
    }

    return 0;
}