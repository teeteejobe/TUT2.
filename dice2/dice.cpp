#include<iostream>
#include<cstdlib>
#include"dice.h"
using namespace std;
int Dice::roll()
{
	answer = rand() % 6 + 1;
	return answer;
}
float Dice::average(Dice dice_1, int NoRolls)
{
	int i;
	int temp, sum = 0;
	for (i = 0; i < NoRolls; i++)
	{
		temp = dice_1.roll;
		sum = +temp;

	}
	return(sum / NoRolls);
	float Dice:: average(int arr[], int No)
{

		int i, sum = 0;
		for (i = 0; i < No; i++)
		{
			sum = +arr[i];

		}
		return(sum / No);
 }
}