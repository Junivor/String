#include "thuvien.h"

void nhap(char x[]) {
    cout << "Nhap : ";
    cin >> x;
}

void nhapchuoi1(char ten[]) {
    cout << "Nhap chuoi: ";
    cin.get(ten, 20);
}

void nhapdoan(char ten[]) {
    cout << "Nhap doan: ";
    cin.get(ten, 20,'$');
}

void xuatchuoi(char ten[]) {
    cout << "Chuoi da nhap la: ";
    for (int i = 0; i < strlen(ten); i++) {
        cout << ten[i];
    }
}
void xuatchuoi1(char ten1[]) {
    cout << "\tChuoi da sao chep la: ";
    for (int i = 0; i < strlen(ten1); i++) {
        cout << ten1[i];
    }
}

void dem(char ten[], char x[],int& dem1) {
    for (int i = 0; i < strlen(ten); i++) {
        if (ten[i] == x[0]) {
            dem1++;
        }
    }
}

void xuatdem(int dem) {
    cout << "Co " << dem << " ki tu giong voi ki tu da nhap";
}

void inhoa(char ten[]) {
    for (int i = 0; i < strlen(ten); i++) {
        ten[i] = toupper(ten[i]);
    }
}

void daochuoi(char ten[]) {
    int min = 0, max = strlen(ten) - 1;
    while (min < max) {
        char sotg = ten[min];
        ten[min] = ten[max];
        ten[max] = sotg;
        min++;
        max--;
    }
}

void saochep(char ten[], char ten1[]) {
    int vitri, sokytu, j = 0;
    cout << "Nhap vi tri: "; cin >> vitri;
    cout << "Nhap so ky tu muon sao chep : "; cin >> sokytu;
    for (int i = vitri; i < (vitri + sokytu); i++) {
        ten1[j++] = ten[i];
    }
    ten1[sokytu] = '\0';
}