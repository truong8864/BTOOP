#include"cDiem.h"
#include"cHinhElip.h"
#include"cHinhTron.h"

void main()
{
	cDiem **a;
	int b;
	cout << "Nhap so luong hinh :\n";
	cin >> b;
	a = new cDiem*[b];
	for (int i = 0; i < b; i++)
	{
		cout << "Nhap hinh " << i + 1 << ":\n";
		bool c = 0;
		do
		{
			cout << "Ban muon nhap hinh gi :(1-Hinh tron,0-Hinh elip)\n";
			cin >> c;
		} while (c!=0&&c!=1);
		if (c)
		{
			a[i] = new cHinhTron;
			a[i]->Nhap();
		}
		else
		{
			a[i] = new cHinhElip;
			a[i]->Nhap();
		}
	}

	cout << "Danh sach hinh:\n";
	for (int i = 0; i < b; i++)
	{
		a[i]->Xuat();
	}
	system("pause");
}