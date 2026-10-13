#include<iostream>
#include "Player.h"
#include "Enemy.h"
#include "Boss.h"
#include "Wizard.h"
#include "BattleManager.h"
int main(void)
{
	//コンストラクタ
	Player player("勇者シュタルク");
	Enemy enemy("魔族");
	Boss boss("断頭台のアウラ");
	Wizard wizard("大魔法使いフリーレン");
	BattleManager manager;

	manager.StartBattle(&player);
	manager.StartBattle(&enemy);
	manager.StartBattle(&boss);
	manager.StartBattle(&wizard);

	return 0;
}
