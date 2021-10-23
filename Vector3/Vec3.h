#pragma once
#include <math.h>
#define VEC3_H
#include <iostream>


using namespace std;

template <typename T>
class Vec3{

private:
	T x, y, z;

public:
	
	Vec3();

	Vec3(T _x, T  _y, T  _z);

	T NormalizeVector();
	double Distance_to(Vec3 b);
	double Dot_prod(Vec3 b);
	T getX();
	T getY();
	T getZ();
};

