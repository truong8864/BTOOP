#pragma once
#include "cPerSon.h"
class cDev :
	public cPerSon
{
private:
	int iSoSkill;
	string *iSkill;
	int iLv;
public:
	cDev();
	void Nhap();
	int GetLv();
	string *GetSkill();
	int GetSoSkill();
	void Xuat();
	~cDev();
};

