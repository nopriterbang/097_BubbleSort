// SortBubble.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variabel global array a dengan ukuran 20
int n; // Deklarasi variabel global n untuk menyimpan banyaknya elemen array

void input() {  // Procedur untuk input

    while (true) {
        cout << "Masukan banyaknya elemen pada array : "; //output ke layar
        cin >> n;   // input dari pengguna
        if (n <= 20) // jika n kurang dari atau sama dengan 20
            break;  // keluar dari loop
        else {    // jika n lebih dari 20
            cout << "\nArray dapat maksimal 20 elemen. \n"; // output ke layar

        }

    }
         cout << endl;
         cout << "====================" << endl;
         cout << "Masukan Elemen Array" << endl;
         cout << "====================" << endl;

         for (int i = 0; i < n; i++) { // Looping dengan i dimulai dari 0 hingga n-1
             cout << "Data ke-" << (i + 1) << ": "; // output ke layar
             cin >> arr[i];

         }


}

void bubblesortArray() { // procedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1; // step 1
    do {
        for (int j = 0; j <= n - 1 - pass;) { // step 2
            if (arr[j + 1]) { // step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }

        }
        pass = pass + 1; // step 4

        cout << "\nPass" << pass - 1 << ": "; // number of pass
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " "; // Menampilkan data pada number of pass
        }
    
    
    
    }

}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
