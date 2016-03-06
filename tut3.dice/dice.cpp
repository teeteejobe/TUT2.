#include<iostream>
#include<cstdlib>
#include"dice.h"
using namespace std;
int Dice::roll()
{
	answer = rand() % 6 + 1;
	return answer;
}
