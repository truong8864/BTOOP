#include "KhachHang.h"



KhachHang::KhachHang()
{
	strTenKhachHang = "\0";
	iSoLuongHang = 0;
	iDonGiaHang = 0;
}

int KhachHang::TinhTien()
{
	return 0;
}

string KhachHang::Ten()
{
	return strTenKhachHang;
}

KhachHang::KhachHang(string tenkhachhang,int soluonghang,int dongia)
{
	strTenKhachHang = tenkhachhang;
	iSoLuongHang = soluonghang;
	iDonGiaHang = dongia;
}

KhachHang::~KhachHang()
{
}
