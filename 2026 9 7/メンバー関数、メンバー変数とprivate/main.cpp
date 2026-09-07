#include"ScoreManager.h"
#include<iostream>
using namespace std;

int main(void)
{
	//ScoreManagere
	ScoreManager score;

	cout << "ゲームスタート" << endl;

	score.displayScore();

	//１００ポイント獲得
	cout << "１００ポイント獲得しました" << endl;

	score.addPoints(100);
	score.displayScore();

	//50ポイント獲得
	cout << "１００ポイント獲得しました" << endl;

	score.addPoints(50);
	score.displayScore();

	//ハイスコアを更新
	cout << endl;
	cout << "ハイスコアを更新" << endl;

	score.updatHighScore();
	score.displayScore();

	cout << endl;
	cout << "ゲーム終了" << endl;

	score.resetScore();
	score.displayScore();
}