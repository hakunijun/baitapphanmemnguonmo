#include <iostream>

using namespace std;

int tong(int a, int b){
	return a+b;
}

int hieu(int a, int b){
	return(a-b);
}
int tich(int a, int b){
	return a*b;
}

float thuong(int a, int b);
int main()
{
	int a, int b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Tong = "<<tong(a,b)<<endl;
	cout<<"Hieu = "<<hieu(a,b)<<endl;
	cout<<"Tich = " << tich(a, b) << endl;
	cout<<endl;
	cout<<"ViDu2";

	system("pause");
	return 0;
}