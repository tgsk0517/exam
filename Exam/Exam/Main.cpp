#include <stdio.h>
#include<iostream>
#include<string>

//int main() {

	//第１問
	//printf("%d\n", 10000001);
	//printf("%d\n", 10111111);

	//第2問
	//printf("%d\n", 0b00101100 + 0b01010101);
	//printf("%d\n", 0b10110000 + 0b00001111);

	//第3問
	//charは1バイト
	//intは4バイト
	//floatは4バイト
	//doubleは8バイト

	//第4問
	//char *は4バイト 
	//int *は4バイト
	//float *は4バイト
	//double *は4バイト

	//第5問
	//2

	//第6問
	//int first, second;

	//std::cout << "1番目の入力 = ";
	//std::cin >> first;

	//std::cout << "\n";

	//std::cout << "2番目の入力 = ";
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

	//第7問

	//bool flag = true;

	//while (flag)
	//{
	//	int first, second;
	//	std::string quit;

	//	std::cout << "1番目の入力 = ";
	//	std::cin >> first;

	//	std::cout << "\n";

	//	std::cout << "2番目の入力 = ";
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

	//	std::cout << "文字列endを入力すると終了\n";

	//	std::cin >> quit;

	//	if (quit == "end") 
	//	{
	//		flag = false;
	//	}

	//}

	//第8問
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