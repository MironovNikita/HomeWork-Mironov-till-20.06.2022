#pragma once
class Man
{
	string name;
	int age;
public:
	Man(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	friend ostream& operator << (ostream& out, Man& man)
	{
		out << man.name << " " << man.age;
		return out;
	}
};

