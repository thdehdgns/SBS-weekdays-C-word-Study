#include <stdio.h>
#include <stdlib.h>
int hp = 10;
int count;
void sum(int value)
{
	hp += value;
}


void Increase()
{
	static int score = 0;

	score++;

	printf("score : %d\n", score);
}

void main()
{
#pragma region �޸�
#pragma region CODE ����
	// ���μ����� ������ �ڵ�� ��ũ�� �����
	// ���� ���·� ����Ǵ� �����Դϴ�.


#pragma endregion

#pragma region DATA ����
	//���� ������ ���� ������ ����Ǵ� �����Դϴ�.
#pragma endregion

#pragma region Bss ����
	// �ʱ�ȭ ���� ���� ������
	// ����Ǵ� �����Դϴ�.

#pragma endregion

#pragma region STACK ����
	// �Լ��� ȣ��� ����Ǵ� ���� ������
	// �Ű� ������ ����Ǵ� �����Դϴ�.

#pragma endregion

#pragma region HEAP ����
	// ����ڰ� ���� �Ҵ��ϴ� �޸� �����Դϴ�.
#pragma endregion

#pragma region ��������
	// �Լ� ���ο� ����� ������, �Լ� ���ο����� ��� �����ϸ�,
	// {} �� ����� ������ �޸𸮰� ������� Ư¡�� �������ִ� �����Դϴ�.

	//	int x = 10;
	//	
	//	{
	//		int x = 20;
	//		printf("%d", x);
	//	}
	//	printf("%d", x);
	//	
#pragma endregion

#pragma region ���� ����
	// �Լ� �ܺο��� ������ �����ϸ�, ���α׷��� ����� ��
	// �޸𸮿��� �����ǰ�, ���α׷��� ����Ǿ�߸� �޸𸮿���
	// ������� Ư¡�� �������ִ� �����Դϴ�.
	//sum(20);
	//printf("%d\n", hp);
	//printf("%d\n", count);
#pragma endregion

#pragma region ���� ����
	// ���� ������ ���������� Ư���� ������ ������, ���α׷��� ����� �� �� �ѹ��� �ʱ�ȭ��
	// �̷������, ���α׷��� ����� �� �޸𸮿� �����ǰ� ���α׷��� ����
	// �Ǿ�߸� �޸𸮿��� �����Ǵ� Ư¡�� ������ �ִ� �����Դϴ�.

	//Increase();
	//Increase();
	//Increase();
#pragma endregion

#pragma region �����Ҵ�
	// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ�
	// �۾��Դϴ�.
	
	//���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦
	// �����ų �� ������, �������� �޸��� ũ�⸦ �Ҵ��� ��
	// ����Ʈ ������ �����մϴ�.

	//	int* reference = (int *)malloc(sizeof(int));
	//	*reference = 100;
	//	printf("���۷��� �� :%d", *reference);	
	//	
	//	free(reference);

	//�������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�
	// ����� ������ ���� ������ ���־���մϴ�.
#pragma endregion

#pragma region ��� ������
	// �̹� ������ �޸� ������ ����Ű�� �������Դϴ�.

	//	float * pointer = malloc(sizeof(float));
	//	
	//	*pointer = 37.5f;
	//	
	//	printf("pointer �� ����Ű�� �� : %f\n", *pointer);
	//	
	//	free(pointer);
	//	
	//	pointer = NULL; //���� ���ϰ� NULL�� �־����.
	//	printf("pointer �� ����Ű�� �� : %f\n", *pointer);

	

#pragma endregion

#pragma region ���� �迭
	//int* pointer = calloc(3,sizeof(int));
	//printf("pointer = %d\n", pointer);
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	pointer[i] = (i + 1) * 10;
	//	printf("pointer[%d] = %d\n", i,pointer[i]);
	//	
	//}
	//
	//free(pointer);
	//pointer = NULL;//���� �ʿ��� ������ ����.
	//pointer = calloc(5, sizeof(int));
	//printf("���ο� ������ :%d\n", pointer);
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d\n", pointer[i]);
	//}
	//free(pointer);



#pragma endregion


#pragma endregion

}