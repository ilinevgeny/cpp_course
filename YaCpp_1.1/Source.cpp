#include <iostream>

using namespace std;
int stepic_reference();
void stepic_swap(int * a, int * b);
void stepic_arr();

int main() {
	//stepic_reference();
	/*int k = 10, m = 20;
	stepic_swap(&k, &m);
	cout << k << ' ' << m;*/
	stepic_arr();
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