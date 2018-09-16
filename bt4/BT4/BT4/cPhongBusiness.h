#pragma once
#include "cPhong.h"
class cPhongBusiness :
	public cPhong
{
public:
	cPhongBusiness();
	int DoanhThu();
	cPhongBusiness(string,int,long);
	~cPhongBusiness();
};

