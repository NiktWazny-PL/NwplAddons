#include <ArrayList.hpp>

using namespace Nwpl;

template<typename T> ArrayList<T>::ArrayList()
	: m_Size(0), m_Capacity(0)
{
	ReAlloc(2);
}

template<typename T> ArrayList<T>::ArrayList(const T* values)
	: m_Size(0), m_Capacity(0)
{
	size_t valuesArrSize = static_cast<int>(sizeof(values) / sizeof(T));
	ReAlloc(valuesArrSize);
	Clear();
	for (size_t i = 0; i < valuesArrSize; i++)
		m_Data[i] = values[i];
}

template<typename T> ArrayList<T>::~ArrayList()
{
	delete[] m_Data;
}

template<typename T> T ArrayList<T>::At(size_t idx)
{
	if (idx >= m_Size)
	{
		ERR("Exited size limit of " << m_Size << " Using the index: " << idx);
	}
	return m_Data[idx];
}

template<typename T> T ArrayList<T>::operator[](size_t idx)
{
	return At(idx);
}

template<typename T> T ArrayList<T>::PushBack(const T& value)
{
	if (m_Size >= m_Capacity)
		ReAlloc(static_cast<int>(m_Capacity*1.5));
	m_Data[m_Size++] = value;
	return value;
}

template<typename T> void ArrayList<T>::ReAlloc(size_t newCapacity)
{
	T* newBlock = new T[newCapacity];
	if (m_Size < newCapacity)
		m_Size = newCapacity;
	for(size_t i = 0; i < m_Size; i++)
		newBlock[i] = m_Data[i];
	delete m_Data;
	m_Data = newBlock;
	m_Capacity = newCapacity;
}

template<typename T> size_t ArrayList<T>::Size()
{
	return m_Size;
}
template<typename T> size_t ArrayList<T>::Size() const
{
	return m_Size;
}

template<typename T> bool ArrayList<T>::Contains(const T& elem)
{
	for(const T& e : m_Data)
		if (e == elem)
			return true;
	return false;
}

template<typename T> void ArrayList<T>::Clear()
{
	for (size_t i = 0; i < m_Size; i++)
		m_Data[i] = nullptr;
}