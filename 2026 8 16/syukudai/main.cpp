#include<iostream>
#include"main.h"

using namespace std;

int main(void)
{
	int hp = 100;
	
	Damege(&hp);
	cout << "ƒ_ƒ[ƒW" << hp << endl;
	Heal(&hp);
	cout << "‰ñ•œ" << hp << endl;
}

void Damege(int *p)
{
	*p -= 20;
	
}

void Heal(int *p)
{
	*p += 30;
	
}