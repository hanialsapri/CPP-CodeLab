#include<iostream>
using namespace std;

void ReadNumber(int& A, int& B)
{
	cout << "enter number of one : ";
	cin >> A;
	cout << "enter number of tow   : ";
	cin >> B;

}
void swop(int& A, int& B)
{
	int t = A;
	A = B;
	B = t;

}
void PrintNumber(int x, int y)
{
	cout << "number 1 :" << x << "  " << "number 2 :" << y << endl;

}
int main()
{
	int num1, num2;
	ReadNumber(num1, num2);
	PrintNumber(num1, num2);
	swop(num1, num2);
	PrintNumber(num1, num2);

	return 0;
}