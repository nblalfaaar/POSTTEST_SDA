#include <iostream>
using namespace std;

// SOAL 4. Pointer pada Fungsi

void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "\nSebelum pertukaran:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    
    tukar(a, b);
    
    cout << "\nSesudah pertukaran:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}