#include <iostream>
#include "Vec3.cpp"




int main()
{
	
	Vec3<double> a();
	Vec3<double> b(1,2,3);
	Vec3<double> c(b);
	Vec3<double> d = b + c;
	
	cout << "The normalized vector v1 is = " << b.normalizeVector() << endl;
	
	cout << "The Distance from v1 to v2 is = " << c.distance_to(b) << endl;

	cout << "The Dot product from v1 & v2 is = " << d.dot_prod(b) << endl;

	cout << "The Cross product from v1 & v2 is = " << d.cross_prod(b).getX() << endl;
}