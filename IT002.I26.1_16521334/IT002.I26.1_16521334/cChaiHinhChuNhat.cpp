#include "cChaiHinhChuNhat.h"



cChaiHinhChuNhat::cChaiHinhChuNhat()
{
	iChieuDai = 0;
	iChieuRong = 0;
}

cChaiHinhChuNhat::cChaiHinhChuNhat(int chieucao,int chieudai,int chieurong) :cChai(chieucao)
{
	iChieuDai = chieudai;
	iChieuRong = chieurong;
}

int cChaiHinhChuNhat::DienTich()
{
	return (int)((iChieuDai*iChieuRong) + (iChieuRong*iChieuCao * 2) + (iChieuDai*iChieuCao*2));
}

int cChaiHinhChuNhat::TheTich()
{
	return (int)(iChieuDai*iChieuRong*iChieuCao);
}

cChaiHinhChuNhat::~cChaiHinhChuNhat()
{
}
