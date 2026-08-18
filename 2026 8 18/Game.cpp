#include"Game.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void Game()
{
	int ary[TOTAL_CARD];
	CreateCard(ary);

	ShuffleCard(ary);

	ShowCard(ary);
}

void CreateCard(int cards[])
{
	int index = 0;
	int number = 0;
	int count = 0;

	for (number = 1; number <= MAX_NUMBER - 1; number++)
	{
		for (count = 0; count < number + 1; count++)
		{
			cards[index] = number + 1;
			index++;
		}
	}
}

void ShuffleCard(int cards[])
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < TOTAL_CARD; i++)
	{
		int randomeIndex = rand() % TOTAL_CARD;

		int temp = cards[i];
		cards[i] = cards[randomeIndex];
		cards[randomeIndex] = temp;
	}
}

void ShowCard(int cards[])
{
	for (int i = 0; i < GROUP_CARD; i++)
	{
		cout << "[" << cards[i] << "]";
	}

	cout << endl;
}

void ShowHiddenCard(int cards[])
{
	for (int i = 0; i < GROUP_CARD; i++)
	{
		cout << "[?]";
	}
	cout << endl;
}

