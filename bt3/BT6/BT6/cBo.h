#pragma once
#include "cGiaSuc.h"
class cBo :
	public cGiaSuc
{
public:
	cBo();
	void Nhap();
	void Xuat();
	void ChoSua();
	void SinhCon();
	void Doi();
	cBo(int);
	~cBo();
};

