#include <iostream>

using namespace std;
int stepic_reference();
void stepic_swap(int * a, int * b);
void stepic_arr();
int max_element(int * m, int size);
int * max_ref_element(int * m, int * q);
bool max_ref_to_ref_element(int * m, int * q, int ** res);

int main() {
	//stepic_reference();
	/*int k = 10, m = 20;
	stepic_swap(&k, &m);
	cout << k << ' ' << m;*/
	//stepic_arr();
	int arr[11] = {12,22,3,4,5,6,7,8,9,10,45};
	int *k = &arr[3];
	int * pmax = 0;
	//max_element(&arr[3], 9);
	//max_ref_element(arr, arr + 10);
	max_ref_to_ref_element(arr, arr + 10, &pmax);
}

int stepic_reference()
{
	int i = 3;
	int * p = 0;
	cout << i;
	p = &i;
	*p = 10;

	cout << i;
	return i;
}

void stepic_swap(int * a, int * b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void stepic_arr()
{
	int m[4] = { 1, 2, 3, 4 };
	/*int *p = &m[0];
	int *q = &m[4];
	cout << *(p + 2);
*/
	int n[15] = {};
	for (int * p = n; p <= n + 9; ++p) {
		*p = (p - n) + 1;
		cout << *p;

	}
}

int max_element(int * m, int size)
{
	int max = *m;
	for (int i = 1; i < size; ++i)
		if (m[i] > max)
			max = m[i];
	return max;
}

int * max_ref_element(int * m, int * q)
{
	int * pmax = m;
 	for (; m != q; ++m)
		if (*m > *pmax)
			pmax = m;
	cout << *pmax;
	return pmax;
}

bool max_ref_to_ref_element(int * m, int * q, int ** res)
{
	if (m == q)
		return false;
	*res = m;
	for (; m != q; ++m)
		if (*m > **res)
			*res = m;
	return true;
}