#pragma once
class ScoreManager
{
public:
	ScoreManager();

	void addPoints(int points);
	void resetScore();
	void updatHighScore();
	void displayScore();

private:
	int currentScore;
	int highScore;
};

