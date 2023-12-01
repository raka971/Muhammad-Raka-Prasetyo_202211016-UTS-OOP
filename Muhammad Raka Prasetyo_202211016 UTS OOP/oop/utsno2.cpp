#include <iostream>
#include <cmath>
using namespace std;
class Tabung {
public:
    float jariJari;
    float tinggi;

public:
    // Property
    void setJariJari(float r) { jariJari = r; }
    void setTinggi(float h) { tinggi = h; }

    float getJariJari() const { return jariJari; }
    float getTinggi() const { return tinggi; }

    // Method
    float hitungVolume() const {
        return M_PI * pow(jariJari, 2) * tinggi;
    }

    float hitungLuasPermukaan() const {
        return 2 * M_PI * jariJari * (jariJari + tinggi);
    }
};

int main() {
    // Objek Tabung
    Tabung tabung;

    // Variabel untuk menyimpan input dari pengguna
    float inputJariJari, inputTinggi;

    // Input dari pengguna
    cout << "Masukkan jari-jari tabung: ";
    cin >> inputJariJari;
    tabung.setJariJari(inputJariJari);

    cout << "Masukkan tinggi tabung: ";
    cin >> inputTinggi;
    tabung.setTinggi(inputTinggi);

    // Menghitung dan mencetak volume dan luas permukaan
    cout << "Volume Tabung: " << tabung.hitungVolume() << endl;
    cout << "Luas Permukaan Tabung: " << tabung.hitungLuasPermukaan() << endl;

    // Menggunakan method setter dan getter
    cout << "Masukkan jari-jari baru: ";
    cin >> inputJariJari;
    tabung.setJariJari(inputJariJari);

    cout << "Masukkan tinggi baru: ";
    cin >> inputTinggi;
    tabung.setTinggi(inputTinggi);

    cout << "Jari-Jari Tabung (setelah diubah): " << tabung.getJariJari() << endl;
    cout << "Tinggi Tabung (setelah diubah): " << tabung.getTinggi() << endl;
    cout << "Volume Tabung (setelah diubah): " << tabung.hitungVolume() << endl;
    cout << "Luas Permukaan Tabung (setelah diubah): " << tabung.hitungLuasPermukaan() << endl;

    return 0;
}
