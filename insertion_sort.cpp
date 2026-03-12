#include <iostream>
using namespace std;

int arr[20]; 
int n; 

int main() {
    return 0;
}

void input() {
    while (true) {
        cout << "Masukkan jumlah data pada array: ";
        cin >> n;
        if (n <= 20) break;
        else cout << "\nArray tidak boleh lebih dari 20.\n";
    }
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}
// Di main, panggil input();