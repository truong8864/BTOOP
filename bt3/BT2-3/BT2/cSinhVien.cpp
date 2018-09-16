#include "cSinhVien.h"



cSinhVien::cSinhVien()
{
	iNam = 0;
	strNienKhoa = "\0";
	strTruong = "\0";
	strNganh = "\0";
}

cSinhVien::cSinhVien(string ten,string ngaysinh,string noio,bool gioitinh,int nam,string nienkhoa,string truong,string nganh):cNguoi(ten,ngaysinh,noio,gioitinh)
{
	iNam = nam;
	strNienKhoa = nienkhoa;
	strTruong = truong;
	strNganh = nganh;
}

void cSinhVien::Nhap()
{
	cNguoi::Nhap();
	cout << "Nam :\n";
	cin >> iNam;
	cout << "Nien khoa: \n";
	cin.ignore();
	getline(cin, strNienKhoa);
	cout << "Truong: \n";
	cin.ignore();
	getline(cin, strTruong);
	cout << "Nganh: \n";
	cin.ignore();
	getline(cin, strNganh);
}

void cSinhVien::Xuat()
{
	cNguoi::Xuat();
	cout << "Nam: " << iNam << "\n";
	cout << "Nien khoa: " << strNienKhoa <<"\n";
	cout << "Truong: " << strTruong << "\n";
	cout << "Nganh: " << strNganh << "\n";
}
cSinhVien::~cSinhVien()
{
}
