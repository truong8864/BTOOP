#include "cChaiHinhLapPhuong.h"



cChaiHinhLapPhuong::cChaiHinhLapPhuong()
{
}

cChaiHinhLapPhuong::cChaiHinhLapPhuong(int chieucao) :cChai(chieucao)
{

}

int cChaiHinhLapPhuong::DienTich()
{
	return (int)(iChieuCao*iChieuCao * 5);
}

int cChaiHinhLapPhuong::TheTich()
{
	return (int)(iChieuCao*iChieuCao*iChieuCao);
}

cChaiHinhLapPhuong::~cChaiHinhLapPhuong()
{
}
