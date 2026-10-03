#include <iostream>
#include <string>
using namespace std;

struct stinfo
{
	string FristName;
	string LastName;
};

stinfo ReadName()
{
	stinfo info;
	cout << "Enter your Fridt Name : ";
	cin >> info.FristName;
	cout << "Enter your Last Name : ";
	cin >> info.LastName;
	return info;
}
string GetFullName(stinfo info, bool Reversed)
{
	
	string FullName = "";
	if (Reversed)
		FullName = info.LastName + " " + info.FristName;
	else
	
	FullName = info.FristName + " " + info.LastName;
	return FullName;
}
void PrintFullName(string FullName)
{
	stinfo info;
	
	cout << "the FullName is :" << FullName << endl;
	


}
int main()
{
	PrintFullName(GetFullName(ReadName(),true));


}
