#include "Vector.h"
void init_Vector(Vector& v, int n)
{
	v.elem = new int[n];
	v.sz = n;
}
void rm_Vector(Vector& v)
{
	delete v.elem;
}
