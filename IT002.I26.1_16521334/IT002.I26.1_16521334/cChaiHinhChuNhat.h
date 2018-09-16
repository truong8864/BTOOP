#pragma once
#include "cChai.h"
class cChaiHinhChuNhat :
	public cChai
{
private:
	int iChieuDai;
	int iChieuRong;
public:
	cChaiHinhChuNhat();
	cChaiHinhChuNhat(int,int,int);
	int DienTich();
	int TheTich();
	~cChaiHinhChuNhat();
};

