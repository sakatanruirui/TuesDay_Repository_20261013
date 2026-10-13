#include "Wizard.h"
#include <iostream>
using namespace std;

Wizard::Wizard(string name) :Character(name) {}

void Wizard::Attack()
{
	cout << "これが魔族を殺す魔法「ゾルトラーク」" << endl;
}
