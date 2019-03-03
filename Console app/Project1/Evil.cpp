#include<iostream>
#include<string>
#include "Header.h"
using namespace std;

Evil::Evil()
{
	this->xp = 0;
	this->name = "";
	this->damage = 0;
	this->defence = 0;
	this->price_for_killing = 0;
}
Evil::Evil(double x, string n, double dd, double df, double pfk)
{
	this->name = n;
	this->xp = x;
	this->damage = dd;
	this->defence = df;
	this->price_for_killing = pfk;
}

Evil::Evil(const Evil& e)
{
	this->xp = e.xp;
	name = e.xp;
	damage = e.damage;
	defence = e.defence;
	price_for_killing = e.price_for_killing;
}

double Evil::Get_defence()
{
	return this->defence;
}
double Evil::Get_damage()
{
	return this->damage;
}
double Evil::Get_xp()
{
	return this->xp;
}
double Evil::Get_price_for_killing()
{
	return this->price_for_killing;
}
void Evil::Change_xp(double value)
{
	this->xp -= value;
}
string Evil::Get_name()
{
	return this->name;
}

void Evil::Die_phrase()
{
}



