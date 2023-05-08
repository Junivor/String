#include "thuvien.h"

void nhapchuoi(char ten[]) {
    cout << "Nhap chuoi: ";
    cin.get(ten, 20);
}

void xuatchuoi(char ten[]) {
    cout << "Chuoi da nhap la: ";
    for (int i = 0; i < strlen(ten); i++) {
        cout << ten[i];
    }
}

void nhapdoan(char ten[]) {
    cout << "Nhap doan: ";
    cin.get(ten, 20,'$');
}

void xuatdoan(char ten[]) {
    cout << "Chuoi doan da nhap la: ";
    for (int i = 0; i < strlen(ten); i++) {
        cout << ten[i];
    }
}

void dem_ky_tu_x(char chuoi[], char x, int &dem) {
    dem = 0;

    cout << "Nhap ky tu x (ky tu can tim): ";
    cin >> x;
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == x) {
            dem++;
        }
    }
    cout << "So ky tu " << x << " co trong chuoi la: " << dem << endl;
}

void dao_chuoi(char chuoi[]) {
    int n = strlen(chuoi);
    for (int i = 0; i < n / 2; i++) {
        char temp = chuoi[i];
        chuoi[i] = chuoi[n - i - 1];
        chuoi[n - i - 1] = temp;
    }
    cout << "Chuoi sau khi dao la: " << chuoi << endl;
}

void chuyen_chu_hoa(char chuoi[]) {
    for (int i = 0; i < strlen(chuoi); i++) {
        chuoi[i] = toupper(chuoi[i]);
    }
    cout << "Chuoi sau khi chuyen sang chu hoa la: " << chuoi << endl;
}

void chuyen_chu_thuong(char chuoi[]) {
    for (int i = 0; i < strlen(chuoi); i++) {
        chuoi[i] = tolower(chuoi[i]);
    }
    cout << "Chuoi sau khi chuyen sang chu thuong la: " << chuoi << endl;
}

void sao_chep_chuoi(char src[], char dest[]) {
    strcpy(dest, src);
    cout << "Chuoi sau khi sao chep la: " << dest << endl;
}

void sao_chep_tu(char chuoi[], char tu[]) {
    int index;
    cout << "Nhap vi tri bat dau sao chep tu: ";
    cin >> index;

    int i = index, j = 0;

    while (i < strlen(chuoi) && chuoi[i] != ' ') {
        tu[j] = chuoi[i];
        i++;
        j++;
    }
    tu[j] = '\0';
    cout << "Tu sau khi sao chep la: " << endl;
}
