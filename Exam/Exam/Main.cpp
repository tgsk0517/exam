#include <stdio.h>
#include<iostream>
#include<string>

//int main() {

	//��P��
	//printf("%d\n", 10000001);
	//printf("%d\n", 10111111);

	//��2��
	//printf("%d\n", 0b00101100 + 0b01010101);
	//printf("%d\n", 0b10110000 + 0b00001111);

	//��3��
	//char��1�o�C�g
	//int��4�o�C�g
	//float��4�o�C�g
	//double��8�o�C�g

	//��4��
	//char *��4�o�C�g 
	//int *��4�o�C�g
	//float *��4�o�C�g
	//double *��4�o�C�g

	//��5��
	//2

	//��6��
	//int first, second;

	//std::cout << "1�Ԗڂ̓��� = ";
	//std::cin >> first;

	//std::cout << "\n";

	//std::cout << "2�Ԗڂ̓��� = ";
	//std::cin >> second;

	//std::cout << "\n";


	//if (first % 2 == 0)
	//{
	//	printf("first - second = % d\n", first - second);
	//}
	//else
	//{
	//	printf("first + second = % d\n", first + second);
	//}

	//��7��

	//bool flag = true;

	//while (flag)
	//{
	//	int first, second;
	//	std::string quit;

	//	std::cout << "1�Ԗڂ̓��� = ";
	//	std::cin >> first;

	//	std::cout << "\n";

	//	std::cout << "2�Ԗڂ̓��� = ";
	//	std::cin >> second;

	//	std::cout << "\n";


	//	if (first % 2 == 0)
	//	{
	//		printf("first - second = % d\n", first - second);
	//	}
	//	else
	//	{
	//		printf("first + second = % d\n", first + second);
	//	}

	//	std::cout << "\n";

	//	std::cout << "������end����͂���ƏI��\n";

	//	std::cin >> quit;

	//	if (quit == "end") 
	//	{
	//		flag = false;
	//	}

	//}

	//��8��
class Point
{
public:
	Point() { Clear(); }

	void Clear()
	{
		x = 0;
		y = 0;
		z = 0;
	}
public:
	int x, y, z;
};

	int main(){
		Point point;
		Point nextPoint;

		nextPoint.x = 100;
		nextPoint.y = 30;

		while (1)
		{
			if (point.x < nextPoint.x)
			{
				point.x++;
			}
			else if (point.x > nextPoint.x)
			{
				point.x--;
			}

			if (point.y < nextPoint.y)
			{
				point.y++;
			}
			else if (point.y > nextPoint.y)
			{
				point.y--;
			}
			printf("pointX = %d\n", point.x);
			printf("pointY = %d\n", point.y);

			if (point.x == nextPoint.x &&
				point.y == nextPoint.y)
			{
				break;
			}
		}
	}
//}