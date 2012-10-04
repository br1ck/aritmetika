#include <iostream>
using namespace std;

int sudetis(int x, int y){
	return x + y;
}
int main (int argc, char const *argv[])
{
	int x = 15, y = 25;
	cout << "Sveika aritmetika!";
	cout << "x + y = " << sudetis(x,y);
	return 0;
}
