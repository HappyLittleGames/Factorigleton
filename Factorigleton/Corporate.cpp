#include "Corporate.h"

Corporate::Corporate()
{
};


Corporate* Corporate::m_instance = nullptr;  //??


Corporate* Corporate::GetInstance()
{
	if (m_instance == nullptr)
	{
		m_instance = new Corporate;
	}
	return m_instance;
}


int Corporate::GetInt()
{
	return m_integer;
}


void Corporate::SetInt(int value)
{
	m_integer = value;
}