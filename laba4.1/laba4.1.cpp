#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int  N, i;
	double S;
	cout << "N = "; cin >> N;
	cout << "i = "; cin >> i;
	S = 0;
	i = 3 ;
	while (i <= N)
	{
	S += (cos ((1. * i)/2)+sin(2. * i))/(1 + sin(cos(1. * i)));
	i++;
	}

	cout << S << endl;
		S = 0;
	i = 3;
	do {
		S += (cos((1. * i) / 2) + sin(2. * i)) / (1 + sin(cos(1. * i)));
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = 3; i <= N; i++ )
	{
		S += (cos((1. * i) / 2) + sin(2. * i)) / (1 + sin(cos(1. * i)));
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= 3; i-- )
	{
		S += (cos((1. * i) / 2) + sin(2. * i)) / (1 + sin(cos(1. * i)));
	}
	cout << S << endl;
	return 0;
}