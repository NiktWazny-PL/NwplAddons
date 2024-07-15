#include <Vector3.hpp>

using namespace Nwpl;

template<typename T> Vector3<T>::Vector3(T x, T y, T z)
	: x(x), y(y), z(z) {}

template<typename T> Vector3<T> Vector3<T>::Add(const Vector3<T>& other)
{
	x += other.x;
	y += other.y;
	z += other.z;
	return *this;
}
template<typename T> Vector3<T> Vector3<T>::Add(double number)
{
	x += number;
	y += number;
	z += number;
	return *this;
}

template<typename T> Vector3<T> Vector3<T>::Sub(const Vector3<T>& other)
{
	x -= other.x;
	y -= other.y;
	z -= other.z;
	return *this;
}
template<typename T> Vector3<T> Vector3<T>::Sub(double number)
{
	x -= number;
	y -= number;
	z -= number;
	return *this;
}

template<typename T> Vector3<T> Vector3<T>::Mult(const Vector3<T>& other)
{
	x *= other.x;
	y *= other.y;
	z *= other.z;
	return *this;
}
template<typename T> Vector3<T> Vector3<T>::Mult(double number)
{
	x *= number;
	y *= number;
	z *= number;
	return *this;
}

template<typename T> Vector3<T> Vector3<T>::Div(const Vector3<T>& other)
{
	x /= other.x;
	y /= other.y;
	z /= other.z;
	return *this;
}
template<typename T> Vector3<T> Vector3<T>::Div(double number)
{
	x /= number;
	y /= number;
	z /= number;
	return *this;
}

template<typename T> Vector3<T> Vector3<T>::operator+(const Vector3<T>& other)
{
	return Vector3<T> (
		x + other.x,
		y + other.y,
		z + other.z
	);
}
template<typename T> Vector3<T> Vector3<T>::operator+(double number)
{
	return Vector3<T> (
		x + number,
		y + number,
		z + number
	);
}

template<typename T> Vector3<T> Vector3<T>::operator-(const Vector3<T>& other)
{
	return Vector3<T> (
		x - other.x,
		y - other.y,
		z - other.z
	);
}
template<typename T> Vector3<T> Vector3<T>::operator-(double number)
{
	return Vector3<T> (
		x - number,
		y - number,
		z - number
	);
}

template<typename T> Vector3<T> Vector3<T>::operator*(const Vector3<T>& other)
{
	return Vector3<T> (
		x * other.x,
		y * other.y,
		z * other.z
	);
}
template<typename T> Vector3<T> Vector3<T>::operator*(double number)
{
	return Vector3<T> (
		x * number,
		y * number,
		z * number
	);
}

template<typename T> Vector3<T> Vector3<T>::operator/(const Vector3<T>& other)
{
	return Vector3<T> (
		x / other.x,
		y / other.y,
		z / other.z
	);
}
template<typename T> Vector3<T> Vector3<T>::operator/(double number)
{
	return Vector3<T> (
		x / number,
		y / number,
		z / number
	);
}

template<typename T> Vector3<T> Vector3<T>::operator+=(const Vector3<T>& other)
{
	return Add(other);
}
template<typename T> Vector3<T> Vector3<T>::operator+=(double number)
{
	return Add(number);
}

template<typename T> Vector3<T> Vector3<T>::operator-=(const Vector3<T>& other)
{
	return Sub(other);
}
template<typename T> Vector3<T> Vector3<T>::operator-=(double number)
{
	return Sub(number);
}

template<typename T> Vector3<T> Vector3<T>::operator*=(const Vector3<T>& other)
{
	return Mult(other);
}
template<typename T> Vector3<T> Vector3<T>::operator*=(double number)
{
	return Mult(number);
}

template<typename T> Vector3<T> Vector3<T>::operator/=(const Vector3<T>& other)
{
	return Div(other);
}
template<typename T> Vector3<T> Vector3<T>::operator/=(double number)
{
	return Div(number);
}

template<typename T> float Vector3<T>::Avg() const
{
	constexpr double oneThird = 0.3333333333333333;
	return (x + y + z) * oneThird;
}
template<typename T> Vector3<T> Vector3<T>::Normalize()
{
	double mag = sqrt(x*x + y*y + z*z);
	return this->Div(mag);;
}
