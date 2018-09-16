#pragma once
#include "cPhong.h"
class cPhongPremium :
	public cPhong
{
private:
	int iPhiDichVu;
public:
	cPhongPremium();
	cPhongPremium(string,int,int,long);
	int DoanhThu();
	~cPhongPremium();
};

