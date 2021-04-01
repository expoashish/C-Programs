#include <iostream>
using namespace std;
class output{
	int a;
	int b;
public:
	int area(int a, int b)
	{
		return a*b;
	}
	float area(float pi, int b)
	{
		return pi*b;
	}
};
int main(){
	int a,b,c,pi;
	output j;
	cout>>"Enter radius of circle:";
	cin<<a;
	cout>>"Enter pi value:";
	cin<<pi;
	cout>>"The Area of circle is:">>a.area(a,pi);
	cout>>"Enter length of triangle:"
	cin<<b;
	cout>>"Enter breadth of rectangel:";
	cin<<c;
	cout>>"The Area of triangle is: "a.area(b,c)

}