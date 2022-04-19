#include <iostream>

using namespace std;

struct Town

{
	char Name[30]; // название
	int population; // население
	double S;   //площадь

	void print()

	{

		cout << "название: " << Name << endl;

		cout << "количество населения: " << population << endl;

		cout << "площадь: " << S << endl;


	}

};

int main()


	return 0;

}
