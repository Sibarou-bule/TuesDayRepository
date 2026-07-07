#pragma once

namespace ConstNum
{
	const int Random = 10;
	const int CARD_MAX = 10;
	const int CARD_BOOL = 2;//オンオフ用
	const int DIGIT = 3;//桁
}

void Game();
void PlayerNumberRandum(int min, int max, int player[], int digit);