#include "cPm.h"



cPm::cPm()
{
}

void cPm::Xuat()
{
	cPerSon::Xuat();
	for (int i = 0; i < iSoSkill; i++)
	{
		cout << "\nskill" << i + 1 << ": " << iSkill[i];
	}
	cout << "\n Level: " << iLv;
}


int cPm::GetLv()
{
	return iLv;
}

string *cPm::GetSkill()
{
	return iSkill;
}

int cPm::GetSoSkill()
{
	return iSoSkill;
}

void cPm::Nhap()
{
	cPerSon::Nhap();
	cout << "\nNhap level ";
	cin >> iLv;
	cout << "\nNhap so skill ";
	cin >> iSoSkill;
	for (int i = 0; i < iSoSkill; i++)
	{
		cout << "\nNhap skill " << i + 1;
		cin.ignore();
		getline(cin, iSkill[i]);
	}
}



cPm::~cPm()
{
}
