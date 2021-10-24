#include <iostream>
#include "Vec3.cpp"




int main()
{
	
	Vec3<double> a();
	Vec3<double> b(1,0,1);
	Vec3<double> c(b);
	Vec3<double> d = b + c;

	Vec3<double> cross = d.cross_prod(b);

	cout << "The normalized vector from d is = " << d.normalizeVector() << endl;
	
	cout << "The Distance from d to b is = " << d.distance_to(b) << endl;

	cout << "The Dot product from d and b is = " << d.dot_prod(b) << endl;
	
	cout << "The Cross product from d and b is = " << "x: " << cross.getX() << " y: " << cross.getY() << " z: " << cross.getZ() << endl;
	
	cout<< "The angle between d and b is: "<<d.angle_between(b);
	 
}