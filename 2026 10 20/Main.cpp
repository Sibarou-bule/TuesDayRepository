#include<iostream>

#include"Scorcerer.h"
#include"Gojo.h"
#include"Inumaki.h"
#include"Megumi.h"

using namespace std;

int main(void)
{
	Gojo gojo;
	Inumaki inumaki;
	Megumi megumin;

	Scorcerer* scorcerer[3] = { &megumin,&inumaki,&gojo };

	for (int i = 0; i < 3; i++)
	{
		scorcerer[i]->ShowStatus();
		scorcerer[i]->UseTechnigue();
		cout << "============================\n";
	}
	return 0;
}