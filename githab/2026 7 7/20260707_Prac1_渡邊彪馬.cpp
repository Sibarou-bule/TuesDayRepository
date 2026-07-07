//10 個の数値を入力する。
//入力された数値を偶数（even）と奇数配列（odd）に分類して表示する。
////数字を入れる配列は関数にして配列を渡しましょう。
// 
// 
// 
//ランダム様が入力してくれます
#include<iostream>
#include<cstdlib>
#include<ctime>
#include"Prac_1.h"
using namespace std;



int i;
int main(void)
{
	cout << "偶数（even） 奇数(odd）\n";
	srand((unsigned int)time(NULL));
	int ary[ARY_NUM];

	FOR(ary,ARY_NUM);

	Jughe(ary, ARY_NUM);

}

void FOR(int ary[], int index)
{
	for (i = 0; i < 10; i++)
	{
		ary[i] = rand() % RANDUM;
	}
}

void Jughe(int ary[], int index)
{
	int M;
	for (i = 0; i < 10; i++)
	{
		M = ary[i] % AMARI;
		if (M == 0)
		{
			cout << ary[i] << "(even)\n";
		}
		else
		{
			cout << ary[i] << "(odd)\n";
		}
	}
	
}