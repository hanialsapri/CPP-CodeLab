#include<iostream>
using namespace std;

void ReadNumber(float& A, float& B)
{


	cout << " please Enter Rectungel_Area   A : ";
	cin >> A;
	cout << " \n please Enter Rectungel_Area B   : ";
	cin >> B;



}
float RectangelArea(float A, float B)
{
	int Area = sqrt(pow(A, 2) - pow(B, 2));
	return Area;
}
void Print_Results(float Area)
{
	cout << " \n The Ractengel_Area is  : " << Area << endl;


}

int main()
{
	float A, B;
	ReadNumber(A, B);
	Print_Results(RectangelArea(A, B));

	return 0;

}