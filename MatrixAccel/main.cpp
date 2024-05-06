//
// Created by suyi on 24-5-6.
//
#include "Matrix.h"

int main() {
	float a[]{1.f, 2.f, 3.f, 4.f,5.f,6.f};
	Matrix mat1{2, 3, a};
	mat1.printMatrix();
	Matrix mat2{2, 3, a};
	mat1.add(mat2);
	mat1.printMatrix();
	mat2.printMatrix();

	return 0;
}
