#pragma once
#include<iostream>
#include<string.h>
using namespace std;

struct IFly   // ��������� ��� ��������
{
	virtual void Fly() = 0;
};
struct ISwim   // ��������� ��� ���������
{
	virtual void Swim() = 0;
};

class Animal  // ����������� ����� !!
{
protected:
	char * name;
	int kg;
public:
	Animal() = default;
	Animal(const char * n, int k)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		kg = k;
	}
	void Print()
	{
		cout << "Name: " << name << "Kg: " << kg << endl;
	}	
	virtual void Continent() = 0;
	virtual void Eat() = 0;
	virtual void Sound() = 0;

	~Animal()
	{
		delete[] name;
	}
};

class Pinguin: public Animal, public ISwim
{
	char* continent;
public:
	Pinguin() = default;
	Pinguin(const char *  n, int kg, const char* cont) :Animal(n, kg)
	{
		continent = new char[strlen(cont) + 1];
		strcpy_s(continent, strlen(cont) + 1, cont);
	}
	// ���������� ���������� IAnimal
	virtual void Eat()
	{
		cout << "�������� ���� ����\n";
	}
	virtual void Sound()
	{
		cout << "�������� ������ ����� �� �����\n";
	}
	virtual void Continent()
	{
		cout << "�������� ����� � ����������\n";
	}
	// ���������� ���������� ISwim

	virtual  void Swim()
	{
		cout << "�������� ������� �������\n";
	}
	~Pinguin()
	{
		delete[] continent;
	}

};
class Parrot :public Animal, public IFly
{
	char* continent;
public:
	Parrot() = default;
	Parrot(const char* n, int kg, const char* cont) :Animal(n, kg)
	{
		continent = new char[strlen(cont) + 1];
		strcpy_s(continent, strlen(cont) + 1, cont);
	}
	virtual void Eat()
	{
		cout << "������� ���� �����\n";
	}
	virtual void Sound()
	{
		cout << "������� ����� �������������\n";
	}
	virtual void Continent()
	{
		cout << "������� ����� � ���������\n";
	}
	virtual void Fly()
	{
		cout << "������� -�����,������� ����� ������\n";
	}
	~Parrot()
	{
		delete[]continent;
	}
};
class Airplane: public IFly
{
	unsigned int weight;
public:
	Airplane() = default;
	Airplane(unsigned int w) :weight(w) {};
	virtual void Fly()
	{
		cout << "�������� ���� ������� ��� ������ �� ����\n";
	}
};