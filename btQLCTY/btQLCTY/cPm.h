#pragma once
#include "cPerSon.h"
class cPm :
	public cPerSon
{
private:
	int iSoSkill;
	string *iSkill;
	int iLv;
public:
	void Nhap();
	int GetLv();
	string *GetSkill();
	int GetSoSkill();
	void Xuat();
	cPm();
	~cPm();
};

