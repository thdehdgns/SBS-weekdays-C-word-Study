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
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
	// ��ġ���� ������ ���ϴ� ���� ���� �� �����ϴ�.

	
#pragma endregion
	
	
#pragma region �Ű� ����
	//�Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η�
	// �����ϱ� ���� ����ϴ� �����Դϴ�.

	// �Ű������� �Լ� ���ο����� ������ �̷������,
	// �Լ��� ����Ǹ� �޸𸮿��� ������ϴ�.
	//position(1, 2);
	// �ϳ��� �Լ��� ���� �ٸ� �ڷ����� �Ű� ������
	// �Բ� ������ �� ������, ���� ���� �Ű� ������
	// �����Ͽ� ��� �� �� �ֽ��ϴ�.

	//int a = SUM(4,4);
	//printf("a�� ����: %d", a);
	// float x = 2.5f;
	// float y = 1.5f;
	// int value = 0;
	// value = Compare(x,y);
	// printf("value�� ��: %d\n", value);
	// printf("Compare�� ��: %d\n",Compare(5.4f, 3.2f));
#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ�
	// ���Դϴ�.

	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ����
	// ������ ���ִ� �μ��� ���� �����Ǹ�, ���� �����ϴ�
	// �μ��� ���� ���޹޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ� �մϴ�.
	int a = 10;
	int b = 20;
	int* p1 = &a;
	int* p2 = &b;
	Swap(a, b,p1,p2);
	printf("a�� ��: %d b�� ��: %d", a, b);
	
#pragma endregion

}