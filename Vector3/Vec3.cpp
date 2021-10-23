#include "Vec3.h"


template <class T>
Vec3<T>::Vec3()
{
	x = 0, y = 0, z = 0;
}

template <typename T>
Vec3<T>::Vec3(T _x, T  _y, T  _z)
{
	this->x = _x;
	this->y = _y;
	this->z = _z;
}


template <class T>
T Vec3<T>::NormalizeVector()
{
	double n = sqrt(pow(x, 2)+ pow(y, 2)+ pow(z, 2));

	return (x/n + y/n + z/n);
}

template <class T>
T Vec3<T>::getX()
{
	return this->x;
}

template <class T>
T Vec3<T>::getY()
{
	return this->y;
}

template <class T>
T Vec3<T>::getZ()
{
	return this->z;
}

template <class T>
double Vec3<T>::Distance_to(Vec3 b)
{
	
	x = x - b.getX();
	y = y - b.getY();
	y = z - b.getZ();

	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
   
}

template <class T>
double Vec3<T>::Dot_prod(Vec3 b)
{
	double dot = (x * b.getX()) + (y * b.getY()) + (z * b.getZ());

	return dot;
}




