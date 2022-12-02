#include <iostream>
//modul struktur data
//BSI - nur hidayati
//halaman 10
using namespace std;

int main() {
    int bil[5];

    cout << "masukkan 5 bilangan: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "bilangan ";
        cout << i + 1 << " : ";
        cin >> bil[i];
        cout << endl;
    }
    cout << endl;
    cout << "5 bilangan yang dimasukkan " << endl;
    for(int i = 0; i<5; i++){
        cout << " " << bil[i];
    }
    
    return 0;
}
