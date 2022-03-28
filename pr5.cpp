#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
	float x,Fn;
	cin>>x;
	Fn=fabs(sin(12*x)*cos(fabs(2*x)/3))+4.21;
	cout<<Fn;
	return(0);
}
