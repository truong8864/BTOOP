#include "cCaNgheSi.h"



cCaNgheSi::cCaNgheSi()
{
	strNgheDanh = "\0";
	strLinhVucCHuyenMon = "\0";
}

cCaNgheSi::cCaNgheSi(string ten, string ngaysinh, string noio, bool gioitinh, string nghedanh, string chuyenmon) :cNguoi(ten, ngaysinh, noio, gioitinh)
{
	strNgheDanh = nghedanh;
	strLinhVucCHuyenMon = chuyenmon;
}

void cCaNgheSi::Nhap()
{
	cNguoi::Nhap();
	cout << "Nghe danh: \n";
	cin.ignore();
	getline(cin, strNgheDanh);
	cout << "Linh vuc chuyen mon: \n";
	cin.ignore();
	getline(cin, strLinhVucCHuyenMon);
}

void cCaNgheSi::Xuat()
{
	cNguoi::Xuat();
	cout << "Nghe danh: " << strNgheDanh << "\n";
	cout << "Linh vuc chuyen mon: " << strLinhVucCHuyenMon << "\n";
}
cCaNgheSi::~cCaNgheSi()
{
}
