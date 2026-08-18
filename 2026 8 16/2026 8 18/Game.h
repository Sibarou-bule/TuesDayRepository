#pragma once

//カードの総枚数
const int TOTAL_CARD = 28;
//1グループのカード枚数
const int GROUP_CARD_1 = 7;
//2グループのカード枚数
const int GROUP_CARD_2 = 14;
//3グループのカード枚数
const int GROUP_CARD_3 = 21;
//4グループのカード枚数
const int GROUP_CARD_4 = 28;
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

/// <summary>
/// playerが見えないカード
/// </summary>
/// <param name="cards"></param>
void PlayerCard(int cards[]);

/// <summary>
/// plyaerが見れるカード
/// </summary>
/// <param name="cards"></param>
void CPUCard(int cards[]);

void InputChack(int &num);

void Result(int cards[], int num, int card[], bool &flag);
