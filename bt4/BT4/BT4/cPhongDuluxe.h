#pragma once
#include "cPhong.h"
class cPhongDuluxe :
	public cPhong
{
private:
	int iPhiDichVu;
	int iPhiPhucVu;
public:
	cPhongDuluxe();
	cPhongDuluxe(string,int,int,int,long);
	int DoanhThu();
	~cPhongDuluxe();
};

