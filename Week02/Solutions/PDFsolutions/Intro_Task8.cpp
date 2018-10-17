//Условие:
//По дадени координати (x, y) - цели числа, на точка равнината,
//да се определи в кой квадрант лежи точката. Ако лежи на някоя от координатните оси,
//това да се отчете.

#include <iostream>

using namespace std;


int main()
{
	int x, y;
	cin >> x >> y;

	if(x == 0 && y == 0) // ако точката е (0,0)
	{
		cout << "The point is the center of the coordinate system." << endl;
	}

	else if(x != 0 && y == 0) // ако точката лежи на оста Х
	{
		cout << "The point is on the X coordinate axis." << endl;
	}

	else if(x == 0 && y != 0) // ако точката лежи на оста Y
	{
		cout << "The point is on the Y coordinate axis." << endl;
	}

	else // точката не е на никоя от координатните оси
	{
		if(x > 0 && y > 0) // първи квадрант
		{
			cout << "The point is in I quadrant." << endl;
		}

		if(x < 0 && y > 0) // втори квадрант
		{
			cout << "The point is in II quadrant." << endl;
		}

		if(x < 0 && y < 0) // трети квадрант
		{
			cout << "The point is in III quadrant." << endl;
		}

		if(x > 0 && y < 0) // четвърти квадрант
		{
			cout << "The point is in IV quadrant." << endl;
		}
	}

	return 0;
}
