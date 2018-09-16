#include"NhanVien.h"
#include"NhanVienSanXuat.h"
#include"NhanVienVanPhong.h"
void main()
{
	NhanVienVanPhong a;
	a.Nhap();
	NhanVien *b;
	b = new NhanVienVanPhong("nam", "12312", 14);
	((NhanVienVanPhong *)b)->Xuat();
	a.Xuat();
	system("pause");
}
