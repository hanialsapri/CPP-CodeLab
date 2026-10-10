#include<iostream>
using namespace std;

void ReadNumber(int& Mark1, int& Mark2)
{

    cout<<"Welcome to my humble program."<<endl;
	cout << " please Enter tow number \n";
	cout << " please Enter number of one    :    ";
	cin >> Mark1;
	cout << " \n please Enter number of tow   : ";
	cin >> Mark2;
	


}
int Chech_MaxNumber(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;


}
void Print_Results(int Max)
{
	cout << " \n the Max  number   : " << Max<<endl;
	
	
}

int main()
{
	int Num1, Num2;
	ReadNumber(Num1, Num2);
	Print_Results(Chech_MaxNumber(Num1, Num2));

	return 0;

}
