#pragma once
class Corporate
{
public:
	static Corporate* GetInstance();

	void SetInt(int value);
	int GetInt();

private:
	Corporate();
	static Corporate* m_instance;
	int m_integer;
};
