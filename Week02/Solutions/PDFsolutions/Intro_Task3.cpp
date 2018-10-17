//Условие :
//Да се прочетат коефициентите на квадратно уравнение и да се определи
//дали то има реални корени и колко на брой са те - 1 или 2
//(Приемаме, че за целта е достатъчно дискриминантата
//на уравнението да е >= 0).
//.....................................................................................

#include <iostream>

using namespace std;


int main()
{
    int a, b, c, discriminant;
	cin >> a >> b >> c;

	discriminant = b * b - 4 * a * c;

	if(discriminant == 0)
	{
		cout << "The equation has one real root." << endl;
	}

	else if(discriminant > 0)
	{
		cout << "The equation has two real roots." << endl;
	}

	else //discriminant < 0
	{
		cout << "The equation has no real roots." << endl;
	}

	return 0;
}
