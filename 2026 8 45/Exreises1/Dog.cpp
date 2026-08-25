#include<iostream>
#include "Dog.h"
using namespace std;

void Dog::Name(const char* name)
{
	this->name = name;
}

void Dog::ShowProfile()
{
	cout << "Œ¢‚Ì–¼‘O‚Í" << name << "‚Å‚·\n";
}