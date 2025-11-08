#include <iostream>

using namespace std;

int tong(int a, int b) {
    return a + b;
}

int hieu(int a, int b) {
    return a - b;
}

int tich(int a, int b) {
    return a * b;
}

float thuong(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else {
        cout << "Loi: Mau bang 0!" << endl;
        return 0;
    }
}

int main() {
    int a, b;
    cout << "DAY LA CHUONG TRINH DE THUC HANH GIT\n";
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    cout << "Tong = " << tong(a, b) << endl;
    cout << "Hieu = " << hieu(a, b) << endl;
    cout << "Tich = " << tich(a, b) << endl;
    cout << "Thuong = " << thuong(a, b) << endl;
<<<<<<< HEAD
    cout << "BT2";
=======

    cout << "\nViDu2\n";
>>>>>>> 6ef0be6f313400c4b450637ea9afb631a692f22b

    system("pause");
    return 0;
}