#include"Game.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void Game()
{
	int playerInput=0;
	int ary[TOTAL_CARD];
	int result[GROUP_CARD_1];
	int k = 0;

	bool endflag = false;
	
	CreateCard(ary);

	ShuffleCard(ary);

	for (int i = GROUP_CARD_2; i < GROUP_CARD_3; i++)
	{
		result[k] = ary[i];
		k++;
	}

	ShowCard(ary);
	ShowHiddenCard(ary);
	PlayerCard(ary);
	CPUCard(ary);

	while (!endflag)
	{
		cout << "playerが当てるカードにある数字7枚を当てましょう\n";
		InputChack(playerInput);

		Result(result, playerInput, ary,endflag);
	}
	
}

void CreateCard(int cards[])
{
	int index = 0;
	int number = 0;
	int count = 0;

	for (number = 1; number <= MAX_NUMBER; number++)
	{
		for (count = 0; count < number; count++)
		{
			cards[index] = number;
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
	cout << "オープンカード\n";
	for (int i = 0; i < GROUP_CARD_1; i++)
	{
		cout << "[" << cards[i] << "]";
	}

	cout << endl;
}

void ShowHiddenCard(int cards[])
{
	cout << "クローズドカード\n";
	for (int i = GROUP_CARD_1; i < GROUP_CARD_2; i++)
	{
		cout << "[?]";
	}
	cout << endl;
}

void PlayerCard(int cards[])
{
	cout << "playerが当てるカード\n";
	for (int i = GROUP_CARD_2; i < GROUP_CARD_3; i++)
	{
		cout << "[?]";
	}

	cout << endl;
}

void CPUCard(int cards[])
{
	cout << "cpuのカード確認\n";
	for (int i = GROUP_CARD_3; i < GROUP_CARD_4; i++)
	{
		cout << "[" << cards[i] << "]";
	}

	cout << endl;
}

void InputChack(int &num)
{
	while (true)
	{
		cout << "1～7の数字を入力してください\n";
		cin >> num;
		if (num < 1 || num>7)
		{
			cout << "再度入力してください\n";
		}
		else
		{
			break;
		}
	}
}

void Result(int cards[], int num, int card[], bool& flag)
{
	bool correct = false;
	int remain = 0;

	// 入力した数字があるか探す
	for (int i = 0; i < GROUP_CARD_1; i++)
	{
		if (cards[i] == num)
		{
			cards[i] = -1;
			correct = true;
		}
	}

	if (correct)
	{
		cout << "正解！\n";
	}
	else
	{
		cout << "不正解！\n";
	}

	// まだ当てていないカードの枚数を数える
	for (int i = 0; i < GROUP_CARD_1; i++)
	{
		if (cards[i] != -1)
		{
			remain++;
		}
	}

	// 7枚すべて当てた
	if (remain == 0)
	{
		cout << "7枚すべて正解しました！\n";
		flag = true;
	}
}