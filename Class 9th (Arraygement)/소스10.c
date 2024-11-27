#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SUM(int a, int b)
{
	int c = a + b;
	return c;
}

void position(int a, int b)
{
	printf("x : %d , y : %d\n", a, b);
}

int Compare(float a, float b)
{
	if (a > b)
	{
		return 1;
	}
	else if(b > a)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}


void Swap(int a, int b,int *p1, int *p2)
{
	
	int temp = a;
	a = b;
	b = temp;
	*p1 = a;
	*p2 = b;
	
}
int main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합입니다.

	// 함수의 경우 자료형과 반환하는 값의 형태가
	// 일치하지 않으면 원하는 값을 얻을 수 없습니다.

	
#pragma endregion
	
	
#pragma region 매개 변수
	//함수의 정의에서 전달받은 인수를 함수 내부로
	// 전달하기 위해 사용하는 변수입니다.

	// 매개변수는 함수 내부에서만 연산이 이루어지며,
	// 함수가 종료되면 메모리에서 사라집니다.
	//position(1, 2);
	// 하나의 함수에 서로 다른 자료형의 매개 변수를
	// 함께 정의할 수 있으며, 여러 개의 매개 변수를
	// 생성하여 사용 할 수 있습니다.

	//int a = SUM(4,4);
	//printf("a의 값은: %d", a);
	// float x = 2.5f;
	// float y = 1.5f;
	// int value = 0;
	// value = Compare(x,y);
	// printf("value의 값: %d\n", value);
	// printf("Compare의 값: %d\n",Compare(5.4f, 3.2f));
#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 전달되는
	// 값입니다.

	// 인수의 경우 함수에 있는 매개 변수의 수에 따라
	// 전달할 수있는 인수의 수가 결정되며, 값을 전달하는
	// 인수와 값을 전달받는 매개 변수의 자료형이 서로 일치해야 합니다.
	int a = 10;
	int b = 20;
	int* p1 = &a;
	int* p2 = &b;
	Swap(a, b,p1,p2);
	printf("a의 값: %d b의 값: %d", a, b);
	
#pragma endregion

}