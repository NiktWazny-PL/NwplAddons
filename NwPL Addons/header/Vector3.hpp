#pragma once
#ifndef NWPL_VECTOR3_HPP
#define NWPL_VECTOR3_HPP

#include <cmath>

namespace Nwpl
{
	// The type must have all operators for logic operations overloaded
	// Else.. It'll propable bug out or throw an error and we don't want that do we?
	template<typename T>
	struct Vector3
	{
		Vector3(T x, T y, T z);
	
	public:
		T x, y, z;

	public:
		Vector3<T> Add(const Vector3<T>& other);
		Vector3<T> Add(double number);
		Vector3<T> Add(float number);
		Vector3<T> Add(int number);

		Vector3<T> Sub(const Vector3<T>& other);
		Vector3<T> Sub(double number);
		Vector3<T> Sub(float number);
		Vector3<T> Sub(int number);

		Vector3<T> Mult(const Vector3<T>& other);
		Vector3<T> Mult(double number);
		Vector3<T> Mult(float number);
		Vector3<T> Mult(int number);

		Vector3<T> Div(const Vector3<T>& other);
		Vector3<T> Div(double number);
		Vector3<T> Div(float number);
		Vector3<T> Div(int number);

	public:
		float Avg() const;
		Vector3<T> Normalize();

	public:
		Vector3<T> operator+(const Vector3<T>& other);
		Vector3<T> operator+(double number);
		Vector3<T> operator+(float number);
		Vector3<T> operator+(int number);

		Vector3<T> operator-(const Vector3<T>& other);
		Vector3<T> operator-(double number);
		Vector3<T> operator-(float number);
		Vector3<T> operator-(int number);

		Vector3<T> operator*(const Vector3<T>& other);
		Vector3<T> operator*(double number);
		Vector3<T> operator*(float number);
		Vector3<T> operator*(int number);

		Vector3<T> operator/(const Vector3<T>& other);
		Vector3<T> operator/(double number);
		Vector3<T> operator/(float number);
		Vector3<T> operator/(int number);

	public:
		Vector3<T> operator+=(const Vector3<T>& other);
		Vector3<T> operator+=(double number);
		Vector3<T> operator+=(float number);
		Vector3<T> operator+=(int number);

		Vector3<T> operator-=(const Vector3<T>& other);
		Vector3<T> operator-=(double number);
		Vector3<T> operator-=(float number);
		Vector3<T> operator-=(int number);

		Vector3<T> operator*=(const Vector3<T>& other);
		Vector3<T> operator*=(double number);
		Vector3<T> operator*=(float number);
		Vector3<T> operator*=(int number);

		Vector3<T> operator/=(const Vector3<T>& other);
		Vector3<T> operator/=(double number);
		Vector3<T> operator/=(float number);
		Vector3<T> operator/=(int number);
	};

	typedef Vector3<int> Vector3i;
	typedef Vector3<int> Vec3i;
	typedef Vector3<int> V3i;
	typedef Vector3<float> Vector3f;
	typedef Vector3<float> Vec3f;
	typedef Vector3<float> V3f;
	typedef Vector3<double> Vector3d;
	typedef Vector3<double> Vec3d;
	typedef Vector3<double> V3d;
}

#endif//NWPL_VECTOR3_HPP
