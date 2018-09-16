#include "cDiem.h"



cDiem::cDiem()
{
	iHoanhDo = 0;
	iTungDo = 0;
}

cDiem::cDiem(int hoanhdo,int tungdo)
{
	iHoanhDo = hoanhdo;
	iTungDo = tungdo;
}

void cDiem::Nhap()
{
	cout << "Nhap hoanh do: \n";
	cin >> iHoanhDo;
	cout << "Nhap tung do: \n";
	cin >> iTungDo;
}

void cDiem::Xuat()
{
	cout << "Hoanh do: " << iHoanhDo << "\n";
	cout << "Tung do: " << iTungDo << "\n";
}
cDiem::~cDiem()
{
}
