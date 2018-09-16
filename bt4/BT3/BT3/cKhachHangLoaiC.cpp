#include "cKhachHangLoaiC.h"



cKhachHangLoaiC::cKhachHangLoaiC():KhachHang()
{
}

cKhachHangLoaiC::cKhachHangLoaiC(string ten, int soluonghang, int dongia):KhachHang(ten,soluonghang,dongia)
{
}

int cKhachHangLoaiC::TinhTien()
{
	return (int)((iSoLuongHang*iDonGiaHang)*0.5*1.1);
}

cKhachHangLoaiC::~cKhachHangLoaiC()
{
}
