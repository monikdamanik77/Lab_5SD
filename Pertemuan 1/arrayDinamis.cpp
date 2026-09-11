#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    system ("cls");
    int var;

    cout << "masukkan ukuran array: ";
    cin >> var;

    int* arr = new int[var];

    cout<<"masukkan " << var << " angka:  \n";
    for (int i = 0; i < var; i++) {
        cin >> arr[i];
    }

    cout << "isi array: ";
    for (int i=0; i < var; i++){
        cout <<arr[i] << " ";
    }

    delete[]arr;
    return 0;

}