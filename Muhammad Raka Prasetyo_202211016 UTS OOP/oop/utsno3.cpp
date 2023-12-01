#include <iostream>
using namespace std;
class RekeningBank {
public:
    string namaPemilik;
    int nomorRekening;
    double saldo;

public:
    // Constructor
    RekeningBank(const string& nama, int nomor, double initialSaldo) 
        : namaPemilik(nama), nomorRekening(nomor), saldo(initialSaldo) {}

    // Property
    void setNamaPemilik(const string& nama) { namaPemilik = nama; }
    void setNomorRekening(int nomor) { nomorRekening = nomor; }

    string getNamaPemilik() const { return namaPemilik; }
    int getNomorRekening() const { return nomorRekening; }
    double getSaldo() const { return saldo; }

    // Method
    void deposit(double amount) {
        if (amount > 0) {
            saldo += amount;
            cout << "Berhasil melakukan deposit. Saldo sekarang: " << saldo << endl;
        } else {
            cout<< "Jumlah deposit harus lebih dari 0." <<endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= saldo) {
            saldo -= amount;
            cout << "Berhasil melakukan penarikan. Saldo sekarang: " << saldo << endl;
        } else {
            cout << "Jumlah penarikan tidak valid atau saldo tidak mencukupi." << endl;
        }
    }
};

int main() {
    // Membuat objek RekeningBank
    RekeningBank rekening("Deri Afandi", 69346934, 5000);

    // Menampilkan informasi awal rekening
    cout << "Nama Pemilik: " << rekening.getNamaPemilik() << endl;
    cout << "Nomor Rekening: " << rekening.getNomorRekening() << endl;
    cout << "Saldo: Rp. " << rekening.getSaldo() << endl;

    // Melakukan deposit dan withdraw
    rekening.deposit(1000);
    rekening.withdraw(400);

    // Menampilkan informasi setelah transaksi
    cout << "\nInformasi rekening:" << endl;
    cout << "Nama Pemilik: " << rekening.getNamaPemilik() << endl;
    cout << "Nomor Rekening: " << rekening.getNomorRekening() << endl;
    cout << "Saldo: " << rekening.getSaldo() << endl;

    return 0;
}