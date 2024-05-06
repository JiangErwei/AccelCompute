//
// Created by suyi on 24-5-7.
//

#ifndef MATRIX_H
#define MATRIX_H

#pragma once

#include <algorithm>
#include <iostream>

using namespace std;

class Matrix {
private:
	int rows;
	int cols;
	float *pData;

public:
	Matrix();

	// init matrix with filling init_value
	Matrix(const int &, const int &, float);

	// init matrix with init_array
	Matrix(const int &, const int &, const float *);

	~Matrix();

	void printMatrix() const;

	bool add(const Matrix &);
};


#endif //MATRIX_H
