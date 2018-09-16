#include "cChaiHinhTruTron.h"



cChaiHinhTruTron::cChaiHinhTruTron()
{
	iBanKinh = 0;
}

cChaiHinhTruTron::cChaiHinhTruTron(int chieucao, int bankinh):cChai(chieucao)
{
	iBanKinh = bankinh;
}

int cChaiHinhTruTron::DienTich()
{
	return (int)(((2*3.14*iBanKinh)*iChieuCao)+ (3.14*iBanKinh*iBanKinh));
}

int cChaiHinhTruTron::TheTich()
{
	return (int)((3.14*iBanKinh*iBanKinh)*iChieuCao);
}

cChaiHinhTruTron::~cChaiHinhTruTron()
{
}
