#include <iostream>
using namespace std;

int i;
string abjad;

string enkripsi() {
    cout << "Masukkan kata yang ingin dienkripsi: ";
    cin >> abjad;

    for (i = 0; (i < 1000 && abjad[i] != '\0'); i++) {
        abjad[i] = (((abjad[i] - 97) + 8) % 26) + 97;
    }
    cout << "\nKata yang sudah terenkripsi: " << abjad << endl;

    return abjad;
}

class dekripsi {
public:
    string methoddekripsi() {
        cout << "Masukkan kata yang ingin didekripsi: ";
        cin >> abjad;

        for (i = 0; (i < 1000 && abjad[i] != '\0'); i++)
            abjad[i] = ((abjad[i] - 97 - 8 + 26) % 26) + 97;

        cout << "\nKata yang sudah terdekripsi: " << abjad << endl;
        return abjad;
    }
};

int main() {

    int pilihan;
    dekripsi obj;

    cout << "Pilih salah satu metode berikut : " << endl;
    cout << "1 = mengenkripsi sebuah kata.\n";
    cout << "2 = mendekripsi sebuah kata random.\n";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
        enkripsi();
        break;

    case 2:
        obj.methoddekripsi();
        break;

    default:
        cout << "Error! Masukkan pilihan yang tepat!" << endl;
    }
}