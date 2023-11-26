#pragma once
#include "shape.h"

class Circle : public Shape2
{
public:
	Circle(const int& _x1, const int& _y1,
		const double& R);

protected:
	void calculateSquare(const double& R, const double& H) override;
	void calculateVolume(const double& R, const double& H) override;

};