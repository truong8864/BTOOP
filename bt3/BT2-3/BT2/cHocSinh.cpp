#include "cHocSinh.h"



cHocSinh::cHocSinh()
{
	strTruong = "\0";
	iLop = 0;
}

cHocSinh::cHocSinh(string ten,string ngaysinh,string noio,bool gioitinh,string truong,int lop):cNguoi(ten,ngaysinh,noio,gioitinh)
{
	strTruong = truong;
	iLop = lop;
}

void cHocSinh::Nhap()
{
	cNguoi::Nhap();
	cout << "Truong: \n";
	cin.ignore();
	getline(cin, strTruong);
	cout << "Lop: \n";
	cin >> iLop;
}

void cHocSinh::Xuat()
{
	cNguoi::Xuat();
	cout << "Truong: " << strTruong << "\n";
	cout << "Lop: " << iLop << "\n";
}

cHocSinh::~cHocSinh()
{
}
