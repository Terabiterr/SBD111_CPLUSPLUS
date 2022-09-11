#include <iostream>
#include <string>

using namespace std;

#define PLUS( x, y ) ( x + y )
#define MINUS( x, y ) ( x - y )
#define CLS system("CLS")
#define PAUSE system("PAUSE")
#define SYMBOLUSER cout << "Enter the symbol: \t1: [+]\t2: [-]" << endl;
#define RAND10 rand() % 10;

int main()
{
	string input = "";
	int x = 0, y = 0;
	while (1)
	{
		SYMBOLUSER
			cin >> input;
		x = RAND10;
		y = RAND10;
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
		if (input[0] == '1') cout << "result: " << PLUS(x, y) << endl;
		else if (input[0] == '2') cout << "result: " << MINUS(x, y) << endl;
		else cout << "Incirrect choice:" << endl;
		PAUSE;
		CLS;
	}
}
