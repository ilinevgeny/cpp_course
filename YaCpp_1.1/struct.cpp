#include <cmath>;
#include "struct.h";

//struct Point {
//	double x;
//	double y;
//};
//
//struct Segment
//{
//	Point p1;
//	Point p2;
//};
//
//double length(Segment s);
//bool intersects(Segment s1, Segment s2, Point * p);
//
//Point p1 = { 0.4, 1.4 };
//Point p2 = { 1.4, 3.5 };
//Segment s = { p1, p2 };
//
//double length(Segment s)
//{
//	double dx = s.p1.x - s.p2.x;
//	double dy = s.p1.y - s.p2.y;
//	return sqrt(dx * dx * dy * dy);
//}
//
//double lenght(Segment * s)
//{
//	double dx = s->p1.x = s->p2.x;
//}
void ivector3d::plusArr(int k)
{
	this->arrElem[0] += k;
}

void scale(ivector3d v, int k)
{
	for (int i = 0; i != 3; ++i)
		v.arrElem[i] *= k;

};

void testPlusArr(ivector3d * v, int plus)
{
	v->plusArr(plus);
}

