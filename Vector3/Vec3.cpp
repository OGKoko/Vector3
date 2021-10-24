#include "Vec3.h"


template <class T>
Vec3<T>::Vec3() {
	x = 0, y = 0, z = 0;
}

template <class T>
Vec3<T>::Vec3(T _x, T  _y, T  _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
}

template <class T>
T Vec3<T>::normalizeVector() {
	T n = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	return (x / n + y / n + z / n);
}

template <class T>
T Vec3<T>::getX() {
	return this->x;
}

template <class T>
T Vec3<T>::getY() {
	return this->y;
}

template <class T>
T Vec3<T>::getZ() {
	return this->z;
}

template <class T>
T Vec3<T>::distance_to(Vec3<T> b) {
	this->x -= b.getX();
	this->y -= b.getY();
	this->y -= b.getZ();

	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

template <class T>
T Vec3<T>::dot_prod(Vec3<T> b) {
	double dot = (x * b.getX()) + (y * b.getY()) + (z * b.getZ());

	return dot;
}

template<class T>
Vec3<T> Vec3<T>::cross_prod(Vec3<T> b)
{
	Vec3<T> dotVec;

	dotVec.x = this->y * b.getZ() - this->z * b.getY();
	dotVec.y = this->z * b.getX() - this->x * b.getZ();
	dotVec.z = this->x * b.getY() - this->y * b.getX();

	return dotVec;
}
template<class T>
T Vec3<T>::angle_between(Vec3<T> b) {

	double a = (x * b.x + y * b.y + z * b.z) / sqrt(x*x +y*y + z*z) * sqrt(b.x*b.x + b.y*b.y + b.z*b.z), result;
	
	return acos(a);
}
	


