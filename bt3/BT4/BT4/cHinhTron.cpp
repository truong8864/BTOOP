#include "cHinhTron.h"



cHinhTron::cHinhTron()
{
	iBanKinh = 0;
}

cHinhTron::cHinhTron(int hoanhdotam, int tungdotam,int bankinh):cDiem(hoanhdotam,tungdotam)
{
	iBanKinh = bankinh;
}

void cHinhTron::Nhap()
{
	cout << "Nhap tam: \n";
	cDiem::Nhap();
	cout << "Nhap ban kinh: \n";
	cin >> iBanKinh;
}

void cHinhTron::Xuat()
{
	cout << "Hinh tron\n";
	cout << "Tam \n";
	cDiem::Xuat();
	cout << "Ban kinh: " << iBanKinh << "\n\n";
}
cHinhTron::~cHinhTron()
{
}
