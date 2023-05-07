#include "thuvien.h"

int main()
{
    char chuoi[50], chuoi1[50], x[10];
    int dem1 = 0;

    nhapchuoi(chuoi);
    cin.ignore();
    nhapdoan(chuoi1);
    cin.ignore();
    nhap(x);

    xuatchuoi(chuoi);
    cout << endl;
    xuatchuoi(chuoi1);
    cout << endl;

    dem(chuoi, x, dem1);
    xuatdem(dem1);
    cout << endl;

    inhoa(chuoi);
    xuatchuoi(chuoi);
    cout << endl;

    daochuoi(chuoi);
    xuatchuoi(chuoi);
    cout << endl;

    saochep(chuoi, chuoi1);
    xuatchuoi1(chuoi1);
    cout << endl;

    return 0;
}
