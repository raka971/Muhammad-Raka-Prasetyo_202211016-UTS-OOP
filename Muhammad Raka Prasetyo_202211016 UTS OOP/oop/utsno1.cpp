#include <iostream>
using namespace std;
class PersegiPanjang {
public:
    double panjang;
    double lebar;

public:
    // Constructor
    PersegiPanjang(double p, double l) : panjang(p), lebar(l) {}

    // Getter
    double getPanjang() const {
        return panjang;
    }

    double getLebar() const {
        return lebar;
    }

    // Setter
    void setPanjang(double p) {
        if (p > 0) {
            panjang = p;
        } else {
            cout << "Panjang harus lebih dari 0" <<endl;
        }
    }

    void setLebar(double l) {
        if (l > 0) {
            lebar = l;
        } else {
            cout << "Lebar harus lebih dari 0" << endl;
        }
    }

    // Menghitung luas
    double hitungLuas() const {
        return panjang * lebar;
    }

    // Menghitung keliling
    double hitungKeliling() const {
        return 2 * (panjang + lebar);
    }
};
int main() {
    // Contoh penggunaan
    PersegiPanjang persegiPanjang1(20, 10);

    cout << "Luas: " << persegiPanjang1.hitungLuas() << endl;
    cout << "Keliling: " << persegiPanjang1.hitungKeliling() << endl;

    // Mengubah panjang dan lebar menggunakan setter
    persegiPanjang1.setPanjang(20);
    persegiPanjang1.setLebar(10);

    cout << "Luas ke-2: " << persegiPanjang1.hitungLuas() << endl;
    cout << "keliling ke-2: " << persegiPanjang1.hitungKeliling() << endl;

    return 0;
}
