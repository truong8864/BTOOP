#pragma once
#include "KhachHang.h"
class cKhachHangLoaiC :
	public KhachHang
{
public:
	cKhachHangLoaiC(string, int, int);
	int TinhTien();
	cKhachHangLoaiC();
	~cKhachHangLoaiC();
};

