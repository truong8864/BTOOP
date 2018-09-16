#include"cBo.h"
#include"cCuu.h"
#include"cDe.h"
#include"cGiaSuc.h"

void main()
{
	cGiaSuc *a[3];
	a[0] = new cBo();
	a[1] = new cDe();
	a[2] = new cCuu();
	cout << "Nhap cac loai gia suc:\n";
	for (int i = 0; i < 3; i++)
	{
		a[i]->Nhap();
	}

	for (int i = 0; i < 3; i++)
	{
		a[i]->ChoSua();
		a[i]->SinhCon();
	}

	cout << "So luong gia suc va so luong sua la: \n";
	
	for (int i = 0; i < 3; i++)
	{
		a[i]->Xuat();
	}

	system("pause");
}