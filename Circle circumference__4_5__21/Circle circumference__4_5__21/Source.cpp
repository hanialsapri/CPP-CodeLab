#include<iostream>
using namespace std;
//áÍÓÇÈ ãÍíØ ÇáÏÇÆÑÉ
float ReadCircumference()
{
	float L;

	cout << " please   Enter Circumference  ?  :    ";

	cin >> L;
	return L;
}
float RectangelArea(float L)
{
	const float ip = 3.141592653589793238;
	float Area = pow(L, 2) / (4 * ip);
	return Area;
}
void Print_Results(float Area)
{

	cout << " \nCircumference  ?    =: " << Area << endl;


}

int main()
{

	Print_Results(RectangelArea(ReadCircumference()));

	return 0;

}