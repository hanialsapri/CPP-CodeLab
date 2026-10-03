#include<iostream>
#include<string>
using namespace std;

int ReadNumber()
{
	int number;
	cout << "please enter a number : ";
	cin >> number;
	return number;

}
float CalculatHalfNumber(int Num)
{
	return (float) Num/2;

}
void PrintResults(int Num)
{
	string Result = "Half of " + to_string(Num) + " is " + to_string(CalculatHalfNumber(Num));
	cout << Result<<endl;
}
int main()
{

	PrintResults(ReadNumber());
	
	return 0;

}