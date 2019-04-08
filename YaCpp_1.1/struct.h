#pragma once
struct ivector3d
{
	int arrElem[3];
	void plusArr(int k) {
		this->arrElem[0] += k;
	}
};
void scale(ivector3d v, int k);
void testPlusArr(ivector3d * v, int plus);