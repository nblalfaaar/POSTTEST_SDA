#include <iostream>
using namespace std;

// SOAL 1. Array + Pointer

void balikArray(int *array, int n) {
    int *awal = array;
    int *akhir = array + n - 1;
    while (awal < akhir) {
        int temp = *awal;
        *awal = *akhir;
        *akhir = temp;
        awal++;
        akhir--;
    }
}

bool isPrima(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    const int N = 7;
    int array[N];

    int prima = 2, count = 0;
    while (count < N) {
        if (isPrima(prima)) {
            array[count] = prima;
            count++;
        }
        prima++;
    }

    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    balikArray(array, N);
    cout << "Array sesuadah dibalik: ";
    for (int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }

    return 0;
}