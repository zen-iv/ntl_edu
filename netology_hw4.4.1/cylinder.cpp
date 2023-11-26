#include "cylinder.h"

Cylinder::Cylinder(const int& _x1, const int& _y1,
	const double& R, const double& H)
{
	type = static_cast<int>(figures::cylinder);
	x1 = _x1; y1 = _y1;
	radius = R; height = H;
	calculateSquare(R, H);
	calculateVolume(R, H);
}

void Cylinder::calculateSquare(const double& R, const double& H)
{
	square = M_PI * R * R + 2 * R * H;
}

void Cylinder::calculateVolume(const double& R, const double& H)
{
	volume = M_PI * R * R * H;
}
