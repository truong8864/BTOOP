#include "cKhachHangLoaiB.h"



cKhachHangLoaiB::cKhachHangLoaiB():KhachHang()
{
	iSoNamThanThiet = 0;
}

cKhachHangLoaiB::cKhachHangLoaiB(string ten, int soluonghang, int dongia,int sonamthanthiet):KhachHang(ten,soluonghang,dongia)
{
	iSoNamThanThiet = sonamthanthiet;
}

float cKhachHangLoaiB::PhanTramKhuyenMai()
{
	if ((iSoNamThanThiet*0.05 < 0.5))
	{
		return (float)(iSoNamThanThiet*0.05);
	}
	else
	{
		return 0.5;
	}
}

int cKhachHangLoaiB::TinhTien()
{
	return (int)(((iSoLuongHang*iDonGiaHang)*(1 - PhanTramKhuyenMai()))*1.1);
}


cKhachHangLoaiB::~cKhachHangLoaiB()
{
}
