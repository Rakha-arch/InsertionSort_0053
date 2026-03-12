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

void insertionsort() {
    int temp, j;
    for (int i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        cout << "\nStep " << i << ": ";
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
        }
    }
}

void display() {
    cout << "\n\n======================";
    cout << "\nElemen array yang telah diurutkan\n";
    cout << "======================" << endl;
    for(int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main() {
    input();
    insertionsort();
    display();
    return 0;
}