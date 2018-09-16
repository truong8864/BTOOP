#include "DanhSachDoiTuong.h"



DanhSachDoiTuong::DanhSachDoiTuong()
{
	iSoLuong = 0;
}

void DanhSachDoiTuong::Nhap()
{
	cout << "Nhap so luong doi tuong: \n";
	cin >> iSoLuong;
	DanhSach = new cNguoi*[iSoLuong];
	iLoaiDoiTuong = new int[iSoLuong];
	for (int  i = 0; i < iSoLuong; i++)
	{
		cout << "Nhap doi tuong: " << i + 1 << "\n";
		cout << "Nhap loai doi tuong: \n 1-Hoc sinh\n 2-Sinh vien\n 3-Cong nhan\n 4-Ca nghe si\n";
		cin >> iLoaiDoiTuong[i];
		switch (iLoaiDoiTuong[i])
		{
		case 1:
		{
			DanhSach[i] = new cHocSinh;
			((cHocSinh*)DanhSach[i])->Nhap();
			break;
		}
		case 2:
		{
			DanhSach[i] = new cSinhVien;
			((cSinhVien*)DanhSach[i])->Nhap();
			break;
		}
		case 3:
		{
			DanhSach[i] = new cCongNhan;
			((cCongNhan*)DanhSach[i])->Nhap();
			break;
		}
		case 4:
		{
			DanhSach[i] = new cCaNgheSi;
			((cCaNgheSi*)DanhSach[i])->Nhap();
			break;
		}
		default:
			break;
		}
	}
}

void DanhSachDoiTuong::Xuat()
{
	for (int i = 0; i < iSoLuong; i++)
	{
		switch (iLoaiDoiTuong[i])
		{
		case 1:
		{
			((cHocSinh*)DanhSach[i])->Xuat();
			break;
		}
		case 2:
		{
			((cSinhVien*)DanhSach[i])->Xuat();
			break;
		}
		case 3:
		{
			((cCongNhan*)DanhSach[i])->Xuat();
			break;
		}
		case 4:
		{
			((cCaNgheSi*)DanhSach[i])->Xuat();
			break;
		}
		default:
			break;
		}
	}
}
DanhSachDoiTuong::~DanhSachDoiTuong()
{
}
