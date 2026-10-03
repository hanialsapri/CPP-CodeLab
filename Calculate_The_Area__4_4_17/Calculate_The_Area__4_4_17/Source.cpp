#include<iostream>
using namespace std;
//·Õ”«» „”«Õ… ‰’› «·œ«·œ«∆—…
void ReadNumber(float& A, float& H)
{


	cout << " please   Enter triangle sase A ?  :    ";
	cin >> A;
	cout << " \n please Enter triagel height H  : ";
	cin >> H;



}
float RectangelArea(float A, float H)
{
	return (A / 2) * H;
}
void Print_Results(float Area)
{
	cout << " \n triangel Area = : " << Area << endl;


}

int main()
{
	float A, H;
	ReadNumber(A, H);
	Print_Results(RectangelArea(A, H));

	return 0;

}