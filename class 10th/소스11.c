#include <stdio.h>
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



#pragma endregion

}