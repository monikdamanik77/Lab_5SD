#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls"); 

    int var[3][3][4];
    int angka = 2; 

    for (int i = 0; i < 3; i++) {           
        for (int j = 0; j < 3; j++) {       
            for (int k = 0; k < 4; k++) {   
                var[i][j][k] = angka;       
                angka += 2;                 
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "          Tabel ke-" << i + 1 << "\n";
        
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << var[i][j][k] << "\t"; 
            }
            cout << endl;
        }
        cout << "\n";
    }
}