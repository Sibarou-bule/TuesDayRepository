#include "ScoreManager.h"
#include <iostream>
using namespace std;

//コンストラクター（初期化）
//デストラクタ（終了時）
ScoreManager::ScoreManager()
{
	currentScore = 0;
	highScore = 0;

}

void ScoreManager::addPoints(int point)
{
	currentScore += point;
}

void ScoreManager::resetScore()
{
	currentScore = 0;
}

void ScoreManager::updatHighScore()
{
	if (currentScore > highScore)
	{
		highScore = currentScore;
	}
}

void ScoreManager::displayScore()
{
	cout << "現在のスコア：" << currentScore << endl;
	cout << "ハイスコア：" << highScore << endl;
}