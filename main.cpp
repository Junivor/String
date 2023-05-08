#include "thuvien.h"
int main()
{
    char chuoi[50], doanvan[50], x, chuoi_sao_chep[50], tu_sao_chep[50];
    int demx = 0;
    int index;

    nhapchuoi(chuoi);
    cin.ignore();
    xuatchuoi(chuoi);
    cout << endl;

    nhapdoan(doanvan);
    cin.ignore();
    xuatdoan(doanvan);
    cout << endl;

    dem_ky_tu_x(chuoi, x, demx);

    dao_chuoi(chuoi);

    chuyen_chu_hoa(chuoi);
    chuyen_chu_thuong(chuoi);

    sao_chep_chuoi(chuoi, chuoi_sao_chep);


    cout << "Nhap vi tri bat dau sao chep tu: ";
    cin >> index;
    sao_chep_tu(chuoi, tu_sao_chep);
    cout << "Tu sau khi sao chep la: " << tu_sao_chep << endl;
    return 0;
}