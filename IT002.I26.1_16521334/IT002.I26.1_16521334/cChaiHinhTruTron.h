#pragma once
#include "cChai.h"
class cChaiHinhTruTron :
	public cChai
{
private:
	int iBanKinh;
public:
	cChaiHinhTruTron(int, int);
	int DienTich();
	int TheTich();
	cChaiHinhTruTron();
	~cChaiHinhTruTron();
};

