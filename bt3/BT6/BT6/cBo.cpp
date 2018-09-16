#include "cBo.h"



cBo::cBo()
{
	iSoLuong = 0;
	iSua = 0;
	strTiengKeu = "Bo bo bo";
}

void cBo::Nhap()
{
	cout << "Nhap so luong bo: \n";
	cin >> iSoLuong;
	iSua = 0;
	strTiengKeu = "Bo bo bo";
}

void cBo::Xuat()
{
	cout << "So luong bo: " << iSoLuong << " con\n";
	cout << "So luong sua bo: " << iSua << " lit\n";
}
cBo::cBo(int soluong):cGiaSuc(soluong)
{
	strTiengKeu = "Bo bo bo";
}

void cBo::SinhCon()
{
	int s=0;
	for (int i = 0; i < iSoLuong; i++)
	{
		s = s + rand();
	}
	iSoLuong = iSoLuong + s;
}

void cBo::Doi()
{
	cout << strTiengKeu << "\n";
}

void cBo::ChoSua()
{
	int s = 0;
	for (int i = 0; i < iSoLuong; i++)
	{
		s = s + rand()%21;
	}
	iSua = iSua + s;
}


cBo::~cBo()
{
}
