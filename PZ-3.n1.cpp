// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using  namespace std;

int main()
{
	double a, b, S, P;
	cout << "a= ";  cin >> a;
	cout << "b= ";  cin >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "S = "<< S << endl;
	cout << "P = " << P << endl;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout<< "* ";
		}
		cout << endl;
	}
	return 0;

}

