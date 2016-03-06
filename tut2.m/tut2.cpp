//212512921
//T.Sithole

#include <iostream>
#include <string.h>

using namespace std;

struct frac{            // Structure for fraction numerator and denominator
	int num;
	int den;
};

frac addsub(frac, frac, int);
frac subdiv(frac, frac, int);
void print(frac, frac, string, frac);

int main()
{
	frac one;
	frac two;
	cout << "Enter fraction one" << endl << "numerator :";
	cin >> one.num;
	cout << "Denominator :";
	cin >> one.den;
	cout << endl << "Enter fraction two" << endl << "numerator :";
	cin >> two.num;
	cout << "Denominator :";
	cin >> two.den;

	frac ans = addsub(one, two, 1);                         //Addition
	print(one, two, "+", ans);

	ans = addsub(one, two, 0);                         //Subraction
	print(one, two, "-", ans);

	ans = subdiv(one, two, 0);                         //Multiplication
	print(one, two, "*", ans);

	ans = subdiv(one, two, 1);                         //Division
	print(one, two, "/", ans);


	return 0;
}
/*
This funtion does thge fraction addition and subtraction depending on an integer input
Answer is printed using universal print function
*/
frac addsub(frac a, frac b, int pick)
{
	frac c;
	c.den = a.den * b.den;                      //common denominator
	int first = a.num * b.den;
	int sec = b.num * a.den;
	if (pick == 1)                                           //addition
	{
		c.num = first + sec;
	}
	else                                                  //Subtraction
	{
		c.num = first - sec;
	}
	return c;
}
/*
The function performs both division and multiplication by simple changes to the maths
an answer is returned and then printed using the universal print function
*/
frac subdiv(frac a, frac b, int pick)
{
	if (pick == 1)                                          // for division
	{
		int just = b.den;
		b.den = b.num;
		b.num = just;
	}
	frac c;
	c.num = a.num * b.num;
	c.den = a.den * b.den;
	return c;
}

// function to print
void print(frac a, frac b, string cun, frac ans)
{
	if (ans.num< 0 && ans.den<0 || ans.num> 0 && ans.den>0)                 //checking if the answer is positive
	{
		cout << a.num << "/" << a.den << " " << cun << " " << b.num << "/" << b.den << " = " << ans.num << "/" << ans.den << endl;
	}
	else                                                                        //if the answer is negative
	{
		if (ans.num<0)                                                           //removing negative sign from numnerator of answer
		{
			ans.num = -1 * ans.num;
		}
		if (ans.den<0)                                                           //removing negative sign from denominator of answer
		{
			ans.den = -1 * ans.den;
		}
		cout << a.num << "/" << a.den << " " << cun << " " << b.num << "/" << b.den << " = - " << ans.num << "/" << ans.den << endl;
	}

}
