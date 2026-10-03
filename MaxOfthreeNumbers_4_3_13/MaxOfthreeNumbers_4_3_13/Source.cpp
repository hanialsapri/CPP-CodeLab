#include<iostream>
using namespace std;

void ReadNumber(int& num1, int& num2 ,int& num3)
{


	cout << " please Enter tow number \n";
	cout << " please Enter number of one    :    ";
	cin >> num1;
	cout << " \n please Enter number of tow   : ";
	cin >> num2;
	cout << " \n please Enter number of Three   : ";
	cin >> num3;


}
int Chech_MaxNumber(int num1, int num2,int num3)
{
	if (num1 > num2 && num1>num3)
		return num1;
	else if(num2>num3)
		return num2;
	else
		return num3;


}
void Print_Results(int Max)
{
	cout << " \n the Max  number   : " << Max << endl;


}

int main()
{
	int Numnuber1, Numnuber2, Numnuber3;
	ReadNumber(Numnuber1, Numnuber2, Numnuber3);
	Print_Results(Chech_MaxNumber(Numnuber1, Numnuber2, Numnuber3));

	return 0;

}