#include <iostream>

using namespace std;

struct Town

{
	char Name[30]; // название
	int kolvo; // население
	double S;   //площадь

	void print()

	{

		cout << "название: " << Name << endl;
		cout << "количество населения: " << kolvo << endl;
		cout << "площадь: " << S << endl;

	}

};

int main()
{
  setlocale(LC_ALL, "rus");

  int size = 0;

   cout << "Введите размер массива элементов Town: " << endl;

   cin >> size;

Town** A = new Town * [size];

for (int i = 0; i < size; i++)

{
	A[i] = new Town;
}
for (int i = 0; i < size; i++)

{

	cout << "Введите название " << i + 1 << ":";

	cin >> A[i]->Name;

	cout << "Введите количество жителей " << i + 1 << ":";

	cin >> A[i]-> kolvo;

	cout << "Введите площадь " << i + 1 << ":";

	cin >> A[i]->S;


}
Town* swap;

for (int i = 0; i < size; i++)
{

	for (int j = i + 1; j < size; j++)
	{



		if (A[i]->S > A[j]->S)

		{
			swap = A[i];

			A[i] = A[j];

			A[j] = swap;
		}

		if (A[i]->kolvo > A[j]->kolvo)
		{
			swap = A[i];

			A[i] = A[j];

			A[j] = swap;

		}
	};
}

for (int i = 0; i < size; i++)

{

	A[i]->print();

}
 return 0;
}
