#pragma once
#include "KhachHang.h"
class cKhachHangLoaiA :
	public KhachHang
{
public:
	cKhachHangLoaiA();
	cKhachHangLoaiA(string,int,int);
	int TinhTien();
	~cKhachHangLoaiA();
};

