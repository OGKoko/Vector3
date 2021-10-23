#include <iostream>
#include "Vec3.h"




int main()
{
	//Vec3<> a();
	Vec3<double> b(1,0,1);
	//Vec3<Vec3> c(b);
	//Vec3<Vec3T> d = b + c;
	
	
	
	cout << "The normalized vector v1 is = " << b.NormalizeVector() << endl;
	
	
	//cout << "The Distance from v1 to v2 is = " << d.Distance_to(b) << endl;


	//cout << "The Dot product from v1 & v2 is = " << d.Dot_prod(b) << endl;
}

