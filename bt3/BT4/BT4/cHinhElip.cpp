#include "cHinhElip.h"



cHinhElip::cHinhElip()
{
	iBanKinhLon = 0;
	iBanKinhNho = 0;
}

cHinhElip::cHinhElip(int hoanhdotam, int tungdotam, int bankinhlon, int bankinhnho):cDiem(hoanhdotam,tungdotam)
{
	iBanKinhLon = bankinhlon;
	iBanKinhNho = bankinhnho;
}

void cHinhElip::Nhap()
{
	cout << "Nhap tam: \n";
	cDiem::Nhap();
	cout << "Nhap ban kinh lon: \n";
	cin >> iBanKinhLon;
	cout << "Nhap ban kinh nho: \n\n";
	cin >> iBanKinhNho;
}

void cHinhElip::Xuat()
{
	cout << "Hinh elip\n";
	cout << "Tam \n";
	cDiem::Xuat();
	cout << "Ban kinh lon: " << iBanKinhLon << "\n";
	cout << "Ban kinh nho: " << iBanKinhNho << "\n";
}
cHinhElip::~cHinhElip()
{
}
