#include <iostream>
using namespace std;

class hewan {
    private:
    string jeniskelamin;
    public:
    string tipe;
    string umur;

    void inputData() {
        cout << "Masukkan jenis kelamin hewan: " << endl;
        cin >> jeniskelamin;
        cout << "Masukkan tipe hewan: " << endl;
        cin >> tipe;
        cout << "Masukkan umur hewan: " << endl;
        cin >> umur;
    }

    void tampilhewan() {
        cout << "jenis kelamin nya adalah: " << jeniskelamin << endl;

    }
};

int main() {
    hewan ambon;
    ambon.inputData();
    cout << "Umurnya adalah: " << ambon.umur << endl;
    cout << "Tipe hewan adalah: " << ambon.tipe << endl;
    ambon.tampilhewan();

}