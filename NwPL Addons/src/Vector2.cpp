#include <Vector2.hpp>

using namespace Nwpl;

template<typename T> Vector2<T>::Vector2(T x, T y)
	: x(x), y(y) {}

template<typename T> Vector2<T> Vector2<T>::Add(const Vector2& other)
{
	x += other.x;
	y += other.y;
	return *this;
}
template<typename T> Vector2<T> Vector2<T>::Add(double number)
{
	x += number;
	y += number;
	return *this;
}

template<typename T> Vector2<T> Vector2<T>::Sub(const Vector2& other)
{
	x -= other.x;
	y -= other.y;
	return *this;
}
template<typename T> Vector2<T> Vector2<T>::Sub(double number)
{
	x -= number;
	y -= number;
	return *this;
}

template<typename T> Vector2<T> Vector2<T>::Mult(const Vector2<T>& other)
{
	x *= other.x;
	y *= other.y;
	return *this;
}
template<typename T> Vector2<T> Vector2<T>::Mult(double number)
{
	x *= number;
	y *= number;
	return *this;
}

template<typename T> Vector2<T> Vector2<T>::Div(const Vector2<T>& other)
{
	x /= other.x;
	y /= other.y;
	return *this;
}
template<typename T> Vector2<T> Vector2<T>::Div(double number)
{
	x /= number;
	y /= number;
	return *this;
}

template<typename T> Vector2<T> Vector2<T>::operator+(const Vector2<T>& other)
{
	return Vector2<T> (
		x + other.x,
		y + other.y
	);
}
template<typename T> Vector2<T> Vector2<T>::operator+(double number)
{
	return Vector2<T> (
		x + number,
		y + number
	);
}

template<typename T> Vector2<T> Vector2<T>::operator-(const Vector2<T>& other)
{
	return Vector2<T> (
		x - other.x,
		y - other.y
	);
}
template<typename T> Vector2<T> Vector2<T>::operator-(double number)
{
	return Vector2<T> (
		x - number,
		y - number
	);
}

template<typename T> Vector2<T> Vector2<T>::operator*(const Vector2<T>& other)
{
	return Vector2<T> (
		x * other.x,
		y * other.y
	);
}
template<typename T> Vector2<T> Vector2<T>::operator*(double number)
{
	return Vector2<T> (
		x * number,
		y * number
	);
}

template<typename T> Vector2<T> Vector2<T>::operator/(const Vector2<T>& other)
{
	return Vector2<T> (
		x / other.x,
		y / other.y
	);
}
template<typename T> Vector2<T> Vector2<T>::operator/(double number)
{
	return Vector2<T> (
		x / number,
		y / number
	);
}

template<typename T> Vector2<T> Vector2<T>::operator+=(const Vector2& other)
{
	return Add(other);
}
template<typename T> Vector2<T> Vector2<T>::operator+=(double number)
{
	return Add(number);
}

template<typename T> Vector2<T> Vector2<T>::operator-=(const Vector2& other)
{
	return Sub(other);
}
template<typename T> Vector2<T> Vector2<T>::operator-=(double number)
{
	return Sub(number);
}

template<typename T> Vector2<T> Vector2<T>::operator*=(const Vector2& other)
{
	return Mult(other);
}
template<typename T> Vector2<T> Vector2<T>::operator*=(double number)
{
	return Mult(number);
}

template<typename T> Vector2<T> Vector2<T>::operator/=(const Vector2& other)
{
	return Div(other);
}
template<typename T> Vector2<T> Vector2<T>::operator/=(double number)
{
	return Div(number);
}

template<typename T> float Vector2<T>::Avg() const
{
	return (x + y) * 0.5;
}
template<typename T> Vector2<T> Vector2<T>::Normalize()
{
	double mag = sqrt(x*x + y*y);
	return this->Div(mag);
}
