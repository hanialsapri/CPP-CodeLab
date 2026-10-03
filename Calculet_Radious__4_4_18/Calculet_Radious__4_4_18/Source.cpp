#include<iostream>
using namespace std;
//·Õ”«» „”«Õ… «·œ«·œ«∆—…
float ReadNumber()
{
	float R;

	cout << " please   Enter Radiouse ?  :    ";
	cin >> R;
	return R;
}
float RectangelArea()
{
	float Area;
	 Area = 3.14 * pow(ReadNumber(), 2);
	return Area;
}
void Print_Results(float Area)
{
	cout << " \n triangel Area = : " << Area << endl;


}

int main()
{

	
	Print_Results(RectangelArea());

	return 0;

}