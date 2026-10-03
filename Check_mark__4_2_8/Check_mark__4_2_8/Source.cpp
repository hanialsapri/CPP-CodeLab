#include<iostream>

using namespace std;

enum enpassFail{ pass=1 ,fail=2 };

int Read_Mark()
{
	int Mark;
	cout << " please Enter your mark : ";
	cin >> Mark;
	return Mark;
}
enpassFail CheckMark(int mark)
{
	if (mark < 50)
	return enpassFail::fail;
	else
	return	enpassFail::pass;
}
void PrintResults(int Mark)
{

	if (CheckMark(Mark) == enpassFail::pass)
		cout << " you passed\n ";
	else 
		cout << " you Fail \n";

}
int main()
{



	PrintResults(Read_Mark());


	system("pause");
	return 0;
}