#include <iostream>
using namespace std;

struct Tanggal {
    int tgl, bln, thn;
};

    string zodiak[] = {"Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagitarius", "Capricorn", "Aquarius", "Pisces"};

int indeksZodiak(Tanggal lahir) {
    if ((lahir.bln == 3 && lahir.tgl >= 21) || (lahir.bln == 4 && lahir.tgl <= 19)) {
        return 0;
        } else if ((lahir.bln == 4 && lahir.tgl >= 20) || (lahir.bln == 5 && lahir.tgl <= 20)) {
            return 1;
        } else if ((lahir.bln == 5 && lahir.tgl >= 21) || (lahir.bln == 6 && lahir.tgl <= 20)) {
            return 2;
        } else if ((lahir.bln == 6 && lahir.tgl >= 21) || (lahir.bln == 7 && lahir.tgl <= 22)) {
            return 3;
        } else if ((lahir.bln == 7 && lahir.tgl >= 23) || (lahir.bln == 8 && lahir.tgl <= 22)) {
            return 4;
        } else if ((lahir.bln == 8 && lahir.tgl >= 23) || (lahir.bln == 9 && lahir.tgl <= 22)) {
            return 5;
        } else if ((lahir.bln == 9 && lahir.tgl >= 23) || (lahir.bln == 10 && lahir.tgl <= 22)) {
            return 6;
        } else if ((lahir.bln == 10 && lahir.tgl >= 23) || (lahir.bln == 11 && lahir.tgl <= 21)) {
            return 7;
        } else if ((lahir.bln == 11 && lahir.tgl >= 22) || (lahir.bln == 12 && lahir.tgl <= 21)) {
            return 8;
        } else if ((lahir.bln == 12 && lahir.tgl >= 22) || (lahir.bln == 1 && lahir.tgl <= 19)) {
            return 9;
        } else if ((lahir.bln == 1 && lahir.tgl >= 20) || (lahir.bln == 2 && lahir.tgl <= 18)) {
            return 10;
        } else if ((lahir.bln == 2 && lahir.tgl >= 19) || (lahir.bln == 3 && lahir.tgl <= 20)) {
            return 11;
  }
    return -1;
}

int main() {
    Tanggal lahir;

    cout << "Masukkan tanggal lahir : ";
    cin >> lahir.tgl >> lahir.bln >> lahir.thn;

    int index = indeksZodiak(lahir);

    if (index != -1) {
        cout << "Zodiak: " << zodiak[index] << endl;
    } else {
        cout << "Tanggal lahir tidak valid" << endl;
    }

  return 0;
}
