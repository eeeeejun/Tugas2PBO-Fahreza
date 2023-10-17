#include <iostream>
#include <cmath>
using namespace std;


class BangunDatar {
public:
    virtual void hitungLuas() = 0; 
    virtual void hitungKeliling() = 0; 
};


class Persegi : public BangunDatar {
public:
    void hitungLuas() override {
        double sisi;
        cout << "Masukkan panjang sisi persegi: ";
        cin >> sisi;
        luas = sisi * sisi;
        cout << "Luas persegi: " << luas << endl;
    }

    void hitungKeliling() override {
        double sisi;
        cout << "Masukkan panjang sisi persegi: ";
        cin >> sisi;
        keliling = 4 * sisi;
        cout << "Keliling persegi: " << keliling << endl;
    }

private:
    double luas;
    double keliling;
};


class PersegiPanjang : public BangunDatar {
public:
    void hitungLuas() override {
        double panjang, lebar;
        cout << "Masukkan panjang persegi panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar persegi panjang: ";
        cin >> lebar;
        luas = panjang * lebar;
        cout << "Luas persegi panjang: " << luas << endl;
    }

    void hitungKeliling() override {
        double panjang, lebar;
        cout << "Masukkan panjang persegi panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar persegi panjang: ";
        cin >> lebar;
        keliling = 2 * (panjang + lebar);
        cout << "Keliling persegi panjang: " << keliling << endl;
    }

private:
    double luas;
    double keliling;
};


class Segitiga : public BangunDatar {
public:
    void hitungLuas() override {
        double alas, tinggi;
        cout << "Masukkan panjang alas segitiga: ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggi;
        luas = 0.5 * alas * tinggi;
        cout << "Luas segitiga: " << luas << endl;
    }

    void hitungKeliling() override {
        double sisi1, sisi2, sisi3;
        cout << "Masukkan panjang sisi pertama segitiga: ";
        cin >> sisi1;
        cout << "Masukkan panjang sisi kedua segitiga: ";
        cin >> sisi2;
        cout << "Masukkan panjang sisi ketiga segitiga: ";
        cin >> sisi3;
        keliling = sisi1 + sisi2 + sisi3;
        cout << "Keliling segitiga: " << keliling << endl;
    }

private:
    double luas;
    double keliling;
};


class Lingkaran : public BangunDatar {
public:
    void hitungLuas() override {
        double jariJari;
        cout << "Masukkan panjang jari-jari lingkaran: ";
        cin >> jariJari;
        luas = 3.14 * jariJari * jariJari;
        cout << "Luas lingkaran: " << luas << endl;
    }

    void hitungKeliling() override {
        double jariJari;
        cout << "Masukkan panjang jari-jari lingkaran: ";
        cin >> jariJari;
        keliling = 2 * 3.14 * jariJari;
        cout << "Keliling lingkaran: " << keliling << endl;
    }

private:
    double luas;
    double keliling;
};

int main() {
    
    Persegi persegi;
    PersegiPanjang persegiPanjang;
    Segitiga segitiga;
    Lingkaran lingkaran;

    cout << "Menghitung Luas dan Keliling Bangun Datar\n";

    cout << "\nPersegi:\n";
    persegi.hitungLuas();
    persegi.hitungKeliling();

    cout << "\nPersegi Panjang:\n";
    persegiPanjang.hitungLuas();
    persegiPanjang.hitungKeliling();

    cout << "\nSegitiga:\n";
    segitiga.hitungLuas();
    segitiga.hitungKeliling();

    cout << "\nLingkaran:\n";
    lingkaran.hitungLuas();
    lingkaran.hitungKeliling();

    return 0;
}
