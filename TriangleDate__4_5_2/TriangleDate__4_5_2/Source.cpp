#include<iostream>
using namespace std;
void ReadTriangleDate(float& A , float& B)
{
	cout << "Enter the triangle date side  A : ";
	cin >> A;
	cout << "Enter the triangle date side  A : ";
	cin >> B;
}
float CircleAreaByTirianmgle(float A, float B)
{

	float Ip = 3.141592653589793238;
	float Area = Ip * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

	return Area;
}
void PrintRednit(float Area)
{
	cout << " the Tirianmgle Date = : " << Area << endl;
}
int main()
{
	float A, B;
	ReadTriangleDate(A, B);
	PrintRednit(CircleAreaByTirianmgle(A,B));
	
	return 0;

}