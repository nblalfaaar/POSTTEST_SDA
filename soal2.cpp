#include <iostream>
using namespace std;

// SOAL 2. Array 2D

int main() {
    const int N = 3;
    int matriks[N][N];

    cout << "Silakan masukkan elemen matriks 2D:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "M[" << i << "][" << j << "] = ";
            cin >> matriks[i][j];
        }
    }

    cout << "\nMatriks 3x3:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <  N; j++) {
            cout << matriks[i][j] << " "; 
        }
        cout << endl;
    }

    int barisGenap = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < N; j++) {
                barisGenap += matriks[i][j];
            }
        }
    }

    cout << "Jumlah elemen baris genap = " << barisGenap << endl;

    return 0;
}