#include<iostream>
using namespace std;

void ReadNumber(int& num1, int& num2,int& num3)
{
	

	cout << " please Enter three number \n";
	cout << " please Enter number of one   :";
	cin >> num1;
	cout << " \n please Enter number of tow   : \n";
	cin >> num2;
	cout << " \n please Enter number of three :\n";
	cin >> num3;

	
}
int SumOfNumber(int num1, int num2, int num3)
{ 
	return num1 + num2 + num3;

}
void Print_Results(int total)
{

	cout << "the um of three number" << total;


}
int main()
{
	int Num1, Num2, Num3;
	ReadNumber(Num1, Num2, Num3);
	Print_Results(SumOfNumber(Num1, Num2, Num3));
	
	return 0;

}