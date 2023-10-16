#include <iostream>
#include <cmath>
using namespace std;


class BangunDatar {
public:
    virtual double hitungLuas() const = 0;
    virtual double hitungKeliling() const = 0;
};


class Persegi : public BangunDatar {
private:
    double sisi;

public:
    Persegi(double s) : sisi(s) {}

    double hitungLuas() const override {
        return sisi * sisi;
    }

    double hitungKeliling() const override {
        return 4 * sisi;
    }
};

class PersegiPanjang : public BangunDatar {
private:
    double panjang, lebar;

public:
    PersegiPanjang(double p, double l) : panjang(p), lebar(l) {}

    double hitungLuas() const override {
        return panjang * lebar;
    }

    double hitungKeliling() const override {
        return 2 * (panjang + lebar);
    }
};

class Segitiga : public BangunDatar {
private:
    double alas, tinggi;

public:
    Segitiga(double a, double t) : alas(a), tinggi(t) {}

    double hitungLuas() const override {
        return 0.5 * alas * tinggi;
    }

    double hitungKeliling() const override {
        
        return -1;
    }
};

class Lingkaran : public BangunDatar {
private:
    double jariJari;

public:
    Lingkaran(double r) : jariJari(r) {}

    double hitungLuas() const override {
        return M_PI * jariJari * jariJari;
    }

    double hitungKeliling() const override {
        return 2 * M_PI * jariJari;
    }
};

int main() {
    
    Persegi persegi(5);
    PersegiPanjang persegiPanjang(4, 6);
    Segitiga segitiga(3, 4);
    Lingkaran lingkaran(2);

    cout << "Luas Persegi: " << persegi.hitungLuas() << endl;
    cout << "Keliling Persegi: " << persegi.hitungKeliling() << endl;

    cout << "Luas Persegi Panjang: " << persegiPanjang.hitungLuas() << endl;
    cout << "Keliling Persegi Panjang: " << persegiPanjang.hitungKeliling() << endl;

    cout << "Luas Segitiga: " << segitiga.hitungLuas() << endl;
    
    cout << "Keliling Segitiga: " << segitiga.hitungKeliling() << endl;

    cout << "Luas Lingkaran: " << lingkaran.hitungLuas() << endl;
    cout << "Keliling Lingkaran: " << lingkaran.hitungKeliling() << endl;

    return 0;
}
