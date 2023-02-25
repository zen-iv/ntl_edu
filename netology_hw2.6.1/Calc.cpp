#include "Header.h"

int Calc::sum(int x, int y) {
	return x + y;
};
int Calc::dif(int x, int y) {
	return x - y;
};
int Calc::multiply(int x, int y) {
	return x * y;
};
int Calc::division(int x, int y) { // Здесь следует использовать double
	return x / y;
};
long long int Calc::power(int x, int y) {
	long long int z;
	z = x;
	for (int i = 0; i < y; i++) { 
		z = z * x; 
	}
	return z;
};