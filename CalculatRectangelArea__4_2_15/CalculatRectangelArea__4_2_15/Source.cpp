#include<iostream>
using namespace std;

void ReadNumber(float& A,float& B)
{


	cout << " please Enter Area_number of one    :    ";
	cin >> A;
	cout << " \n please Enter Area_number of tow   : ";
	cin >> B;

	

}
float RectangelArea(float A,float B)
{
	return A * B;
}
void Print_Results(float Area)
{
	cout << " \n The Ractengel_Area is  : " << Area << endl;


}

int main()
{
	float A, B;
	ReadNumber(A, B);
	Print_Results(RectangelArea(A,B));

	return 0;

}