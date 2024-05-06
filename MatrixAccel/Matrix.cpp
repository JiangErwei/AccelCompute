//
// Created by suyi on 24-5-7.
//

#include "Matrix.h"

Matrix::Matrix(): rows(0), cols(0), pData(nullptr) {
}

// init matrix with filling init_value
Matrix::Matrix(const int &rows, const int &cols, const float init_value = 0.f): rows(rows), cols(cols) {
	this->pData = new float[rows * cols];
	std::fill_n(pData, rows * cols, init_value);
}

// init matrix with init_array
Matrix::Matrix(const int &rows, const int &cols, const float *init_array): rows(rows), cols(cols) {
	this->pData = new float[rows * cols];
	std::copy_n(init_array, rows * cols, pData);
}

Matrix::~Matrix() {
	delete []pData;
}


void Matrix::printMatrix() const {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j)
			cout << this->pData[i * cols + j] << " ";
		cout << endl;
	}
}

bool Matrix::add(const Matrix &matrix) {
	if (this->rows != matrix.rows || this->cols != matrix.cols)
		return false;
	for (int i = 0; i < rows * cols; ++i)
		this->pData[i] += matrix.pData[i];
		// matrix.pData[i] += this->pData[i];
	return true;
}
