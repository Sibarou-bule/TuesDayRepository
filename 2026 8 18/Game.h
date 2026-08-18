#pragma once

//カードの総枚数
const int TOTAL_CARD = 28;
//1グループのカード枚数
const int GROUP_CARD = 7;
//カードの総枚数
const int MAX_NUMBER = 7;

void Game();

/// <summary>
///２８枚のカードを作成 
/// </summary>
/// <param name="cards"></param>
void CreateCard(int cards[]);

/// <summary>
/// カードをシャッフル
/// </summary>
/// <param name="cards"></param>
void ShuffleCard(int cards[]);

/// <summary>
///カードをひょうじ 
/// </summary>
/// <param name="cards"></param>
void ShowCard(int cards[]);

/// <summary>
///カードを伏せて表示 
/// </summary>
/// <param name="cards"></param>
void ShowHiddenCard(int cards[]);


