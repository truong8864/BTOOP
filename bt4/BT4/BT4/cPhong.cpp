#include "cPhong.h"



cPhong::cPhong()
{
	iSoDem = 0;
	strMaPhong = "\0";
	iDoanhThuThangTruoc = 0;
}

cPhong::cPhong(string maphong, int sodem,long doanhthuthangtruoc)
{
	iSoDem = sodem;
	strMaPhong = maphong;
	iDoanhThuThangTruoc = doanhthuthangtruoc;
}

long cPhong::DoanhThuThangTruoc()
{
	return iDoanhThuThangTruoc;
}

string cPhong::LayMaPhong()
{
	return strMaPhong;
}


int cPhong::DoanhThu()
{
	return 0;
}

cPhong::~cPhong()
{
}
