#include <iostream>
using namespace std;

class mahasiswa
{
    public:
        int nim;
        void showNim()
        {
            cout << " No Induk = " << nim << endl;
        }

};

int main()
{
    mahasiswa mhs; // Object mhs
    mhs.nim = 2024;
    mhs.showNim(); // member Access Operator

    mahasiswa &refMhs = mhs; // Pointer reference refMhs
    refMhs.nim = 2;          // Member Access Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs;  // Pointer Deference pHms
    pMhs-> nim = 3;
    pMhs-> showNim();
    return 0;
}