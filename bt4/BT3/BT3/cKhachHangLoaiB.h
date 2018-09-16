#pragma once
#include "KhachHang.h"
class cKhachHangLoaiB :
	public KhachHang
{
private:
	int iSoNamThanThiet;
public:
	cKhachHangLoaiB(string, int, int,int);
	int TinhTien();
	float PhanTramKhuyenMai();
	cKhachHangLoaiB();
	~cKhachHangLoaiB();
};

