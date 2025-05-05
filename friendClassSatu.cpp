#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    string nama;

public:
    friend void setNama (mahasiswa &a, string);
};

void setnama (mahasiswa &a, string b)
{
    a.nama = b;
    cout << a.nama;
}

int main()
{
    mahasiswa joko;
    setnama (joko, "kairi Kumar");
    return 0;
}