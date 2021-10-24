#pragma once
#include <math.h>
#define VEC3_H
#include <iostream>


using namespace std;

template <class T>
class Vec3 {
private:
	T x;
	T y;
	T z;

public:
	Vec3();
	Vec3(T _x, T  _y, T  _z);

	T normalizeVector();
	T distance_to(Vec3<T> b);
	T dot_prod(Vec3<T> b);
	Vec3<T> cross_prod(Vec3<T> b);
	//T angle_between(Vec3<T> b);

	T getX();
	T getY();
	T getZ();

	

	Vec3<T> operator +(Vec3<T>& v) {
		return Vec3<T>(this->x + v.x, this->y + v.y, this->z + v.z);
	}
};
