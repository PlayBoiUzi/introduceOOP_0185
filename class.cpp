#include <iostream>
using namespace std;

class Lingkaran
{
public:
    double jari_jari;
    double phi;
    double luas;

    void inputData()
    {
        cout << "Masukkan jari-jari: " << endl;
        cin >> jari_jari;
        cout << "Masukkan phi: " << endl;
        cin >> phi;
    }
    double hitungLuas()
    {
        return 3.14 * jari_jari * jari_jari;
    }
};

int main()
{
        Lingkaran Bulet;
        Bulet.inputData();
        cout << endl;
        cout << "Luas lingkaran: " << Bulet.hitungLuas() << endl;
        cout << endl;
    
    
};