#pragma once
#ifndef NWPL_VECTOR2_HPP
#define NWPL_VECTOR2_HPP

#include <cmath>

namespace Nwpl
{
	// The type must have all operators for logic operations overloaded
	// Else.. It'll propable bug out or throw an error and we don't want that do we?
	//
	// + I know I don't have to add the <T> everywhere. I just like doing it 'cuase of consistency
	template<typename T> struct Vector2
	{
	public:
		Vector2<T>(T x, T y);

	public:
		T x, y;

	public:
		Vector2<T> Add(const Vector2<T>& other);
		Vector2<T> Add(double number);

		Vector2<T> Sub(const Vector2<T>& other);
		Vector2<T> Sub(double number);

		Vector2<T> Mult(const Vector2<T>& other);
		Vector2<T> Mult(double number);

		Vector2<T> Div(const Vector2<T>& other);
		Vector2<T> Div(double number);

	public:
		float Avg() const;
		Vector2<T> Normalize();

	public:
		Vector2<T> operator+(const Vector2<T>& other);
		Vector2<T> operator+(double number);

		Vector2<T> operator-(const Vector2<T>& other);
		Vector2<T> operator-(double number);

		Vector2<T> operator*(const Vector2<T>& other);
		Vector2<T> operator*(double number);

		Vector2<T> operator/(const Vector2<T>& other);
		Vector2<T> operator/(double number);

	public:
		Vector2<T> operator+=(const Vector2<T>& other);
		Vector2<T> operator+=(double number);

		Vector2<T> operator-=(const Vector2<T>& other);
		Vector2<T> operator-=(double number);

		Vector2<T> operator*=(const Vector2<T>& other);
		Vector2<T> operator*=(double number);

		Vector2<T> operator/=(const Vector2<T>& other);
		Vector2<T> operator/=(double number);
	};

	typedef Vector2<int> Vector2i;
	typedef Vector2<int> Vec2i;
	typedef Vector2<int> V2i;
	typedef Vector2<float> Vector2f;
	typedef Vector2<float> Vec2f;
	typedef Vector2<float> V2f;
	typedef Vector2<double> Vector2d;
	typedef Vector2<double> Vec2d;
	typedef Vector2<double> V2d;
}

#endif//NWPL_VECTOR2_HPP
