#include <String.hpp>
using namespace Nwpl;

String::String(){}
String::String(char* string)
	: m_String(string), m_Size(CalcSize(string))
{}
String::~String()
{
	delete[] m_String;
}

String::operator char*()
{
	return m_String;
}

String String::operator+(char c)
{
	return m_String + c;
}

String String::operator+(const char* string)
{
	String  str = (char*)string;
	size_t strSize = CalcSize(string);
	for (size_t i = 0; i < strSize; i++)
		str += string[i];	
	return str;
}

String String::operator+=(char c)
{
	m_String += c;
	m_Size++;
	return m_String;
}

size_t String::CalcSize(const char* string)
{
	size_t size = 1;
	unsigned char c = 255;
	while(c != 0)
	{
		c = string[size-1];
		size++;
	}
	return size;
}