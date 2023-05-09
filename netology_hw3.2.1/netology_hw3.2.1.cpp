#include <iostream>
// убран using namespace std;
struct point {
	double m_x;
	double m_y;
	point(double x, double y) {
		m_x = x;
		m_y = y; // y = y заменено
	}
};

void print_point(const point& point_object) {
	std::cout << "x:" << point_object.m_x << ", y: " << point_object.m_y << std::endl;
};

int main() // изменено название с Main -> main
{
	for (int i = 0; i < 5; i++) { // определение переменной i перенесенов в тело цикла, лишняя точка с запятой
		point my_point(i, 2 * i);
		print_point(my_point);
	}
	return 0;
}
//убранна копия void print_point