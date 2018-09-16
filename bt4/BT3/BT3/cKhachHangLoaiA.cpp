#include "cKhachHangLoaiA.h"



cKhachHangLoaiA::cKhachHangLoaiA():KhachHang()
{
}

cKhachHangLoaiA::cKhachHangLoaiA(string ten, int soluonghang, int dongia):KhachHang(ten,soluonghang,dongia)
{
}

int cKhachHangLoaiA::TinhTien()
{
	return (int)((iSoLuongHang*iDonGiaHang)*1.1);
}


cKhachHangLoaiA::~cKhachHangLoaiA()
{
}
