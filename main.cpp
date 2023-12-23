#include <iostream>

using namespace std;

int main()
{
    int bil = 100;
    int arr[bil];
    int size, Elemen, Index;

    cout << "masukkan banyaknya array: ";
    cin >> size;

    cout << "masukkan elemen array: "<<endl;
    for (int i = 0; i<size; ++i) {
        cout << "element ke-" << i << ": ";
        cin >> arr[i];
    }
    Elemen = arr[0];
    Index = 0;
    for (int i = 1; i<size; ++i){
        if (arr[i] > Elemen) {
            Elemen = arr[i];
            Index = i;
        }
    }
    cout << "nilai tertinggi dalam array: " << Elemen << endl;
    if (Index != -1) {
        cout << "nilai tersebut ditemukan pada indeks: " << Index << endl;
    }else {
        cout << "nilai tersebut tidak ditemukan dalam array." << endl;
    }
    return 0;
}
