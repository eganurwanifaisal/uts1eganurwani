#include <iostream>
using namespace std;

struct data_mhs {
    string nama;
    string kelas;
    string nim;
    string tahun;
} a,b,c,d;

int main () {
    a.nama="Ega nurwani f";
    a.kelas="tekom b";
    a.nim="1829141021";
    a.tahun="2018";

    cout<<"nama : "<<a.nama<<"\n";
    cout<<"kelas : "<<a.kelas<<"\n";
    cout<<"nim :"<<a.nim<<"\n";
    cout<<"tahun :"<<a.tahun<<"\n";
}
