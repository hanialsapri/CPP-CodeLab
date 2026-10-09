#include<iostream>
using namespace std;
int ReadAge()
{
	int age;
	cout << "Enter your Age : ";
	cin >> age;
	return age;
}
bool ValiasteNumberInRange(int number, int from,int to)
{
	return(number >= from && number <= to);
	
}
void PrintRednit(int Age)
{
	if (ValiasteNumberInRange(Age, 20, 50))
		cout << Age << "\n is a valid age \n";
	else
		cout << Age << " \n is a invalid age   \n";
}
int main()
{
	PrintRednit(ReadAge());

	return 0;

}