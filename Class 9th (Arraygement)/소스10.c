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


void Swap(int * a, int * b)
{
	
	int temp = *a;
	*a = *b;
	*b = temp;
	
	
}

inline void Process(float progress)
{
	printf("progress :%f\n", progress);

	//�ζ��� �Լ��� ������ ������ Ȯ��Ǹ�, ������
	// �� �ζ��� �Լ��� �����ϴ��� ��Ȳ�� ����
	// �Ϲ� �Լ��� ��ȯ�Ǳ⵵ �մϴ�.
}


void Recursive(int count)
{

	--count;
	printf("asd\n");
	if (count <= 0)
	{
		return;
	}
	else
	{
		
		Recursive(count);

	}
}

void Ai()
{
	int array[10] = { 4,3,2,5,6,7,8,9,0,1 };
	int temp = 0;
	int min = 5;
	
		for (int i = 0; i <= sizeof(array) / 4; i++)
		{
			if (array[i] < array[i + 1])
			{
				min = array[i];
			}
			else
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}

	for (int i = 0; i < 9; i++)
	{
		printf("%d", array[i]);
	}
		
		
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
	//int a = 10;
	//int b = 20;
	//
	//Swap(&a, &b);
	//printf("a�� ��: %d b�� ��: %d", a, b);
	
#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ���� 
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	//Process(46.7f);

	//�ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó���ӵ���
	// ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡
	// ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���Ե˴ϴ�.
#pragma endregion

#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� 
	// �����ϴ� �Լ��Դϴ�.

	
	//Recursive(3);

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ������
	// // �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡
	// // �߻��ϰԵ˴ϴ�. 


#pragma endregion

	
	Ai();
	

}