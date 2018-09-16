#include"cCaNgheSi.h"
#include"cSinhVien.h"
#include"cCongNhan.h"
#include"cNguoi.h"
#include"cHocSinh.h"
#include"DanhSachDoiTuong.h"

void main()
{
	cNguoi *a;
	int b;
	do
	{
		cout << "Nhap loai doi tuong: \n 1-Hoc sinh\n 2-Sinh vien\n 3-Cong nhan\n 4-Ca nghe si\n";
		cin >> b;
	} while (b < 1 && b>4);

	switch (b)
	{
	case 1:
	{
		a = new cHocSinh;
		((cHocSinh*)a)->Nhap();
		cout << "Thong tin doi tuong: \n";
		((cHocSinh*)a)->Xuat();
		break;
	}
	case 2:
	{
		a = new cSinhVien;
		((cSinhVien*)a)->Nhap();
		cout << "Thong tin doi tuong: \n";
		((cSinhVien*)a)->Xuat();
		break;
	}
	case 3:
	{
		a = new cCongNhan;
		((cCongNhan*)a)->Nhap();
		cout << "Thong tin doi tuong: \n";
		((cCongNhan*)a)->Xuat();
		break;
	}
	case 4:
	{
		a = new cCaNgheSi;
		((cCaNgheSi*)a)->Nhap();
		cout << "Thong tin doi tuong: \n";
		((cCaNgheSi*)a)->Xuat();
		break;
	}
	default:
		break;
	}
	DanhSachDoiTuong c;
	cout << "Nhap danh sach cac doi tuong: \n";
	c.Nhap();
	cout << "Thong tin cac doi tuong la: \n";
	c.Xuat();
	system("pause");

}