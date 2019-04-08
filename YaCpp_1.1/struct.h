#pragma once
struct ivector3d
{
	int arrElem[3];
	void plusArr(int k);
};
void scale(ivector3d v, int k);
void testPlusArr(ivector3d * v, int plus);

struct IntArray2D
{
	int & get(size_t i, size_t j) {
		return data[i * b + j];
	}
	size_t a;
	size_t b;
	int * data;
};