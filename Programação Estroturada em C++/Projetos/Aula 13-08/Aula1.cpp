#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159
int main()
{
	int Raio;
	float Perim, Area;

	cout << "Entre com o valor do raio:";
	cin >> Raio;

	Perim = 2 * PI * Raio;
	
	Area = PI * pow(Raio,2);
	cout << "Perimetro:" << Perim << endl;
	cout << "Area:" << Area;
	
}