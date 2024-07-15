#pragma once
#ifndef NWPL_STRING_HPP
#define NWPL_STRING_HPP

#include <stdint.h>
#include <memory>

namespace Nwpl
{
	class String
	{
	public:
		String(char* string);
		String();
		~String();

		size_t Length() const;
		size_t Length();

		operator char*();
		
		String operator+(char c);
		String operator+(const char* string);
		String operator+=(char c);
		String operator+=(const char* string);

	private:
		size_t CalcSize(const char* string);

	private:
		char* m_String;
		size_t m_Size;
	};
}

#endif//NWPL_STRING_HPP