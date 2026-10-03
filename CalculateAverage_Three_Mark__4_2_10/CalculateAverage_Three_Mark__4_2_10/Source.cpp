#include<iostream>
using namespace std;
enum encheckAvereg{pass=1 ,fall=2};
void ReadNumber(int& Mark1, int& Mark2, int& Mark3)
{


	cout << " please Enter three Mark \n";
	cout << " please Enter Mark of one    :    ";
	cin >> Mark1;
	cout << " \n please Enter Mark of tow   : ";
	cin >> Mark2;
	cout << " \n please Enter Mark of three : ";
	cin >> Mark3;


}
int SumOfNumber(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;

}
float calculateAvereg(int Mark1, int Mark2, int Mark3)
{
	return (float) SumOfNumber(Mark1, Mark2, Mark3) / 3;
}

void Print_Results(int Total)
{
	cout << " \n the um of three number   : " << Total;
	
}

int main()
{
	int Num1, Num2, Num3;
	ReadNumber(Num1, Num2, Num3);
	Print_Results(calculateAvereg(Num1, Num2, Num3));

	return 0;

}