#pragma once
#ifndef NWPL_ARRAYLIST_HPP
#define NWPL_ARRAYLIST_HPP

#include <stdint.h>
#include "DebugTools.hpp"

namespace Nwpl
{
	template<typename T>
	class ArrayList
	{
	public:
		ArrayList();
		ArrayList(const T* values);
		~ArrayList();

		T PushBack(const T& value);

		T operator[](size_t idx);
		T At(size_t idx);

		size_t Size();
		size_t Size() const;

		bool Contains(const T& elem);

		void Clear();

	private:
		void ReAlloc(size_t newCapacity);

	private:
		T* m_Data;         // Where the elements are stored
		size_t m_Capacity; // How much elements can it hold
		size_t m_Size;     // How much elements is inside
	};
}

#endif//NWPL_ARRAYLIST_HPP
