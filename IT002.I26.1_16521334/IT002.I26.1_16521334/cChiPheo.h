#pragma once
#include"cChai.h"
#include"cChaiHinhChuNhat.h"
#include"cChaiHinhLapPhuong.h"
#include"cChaiHinhTruTron.h"
class cChiPheo
{
private:
	int iSoChai;
	cChai **a;
public:
	cChiPheo(int);
	void Nhap();
	long DienTichManhVo();
	float TheTichNuocConLai();
	void DapChai();
	cChiPheo();
	~cChiPheo();
};

