#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct GameObject
	{
		char grade;
		double Atk; // �ְ� 8����Ʈ�� �е��� 7����Ʈ���ȰŰ���
		int Hp;
		
		// ����ü ũ���� ��� ��� ������ ������ ���� �޸���
		// ũ�Ⱑ �ٸ��� ������ �� ������, ����ü ũ�⸦ �����ϴ�
		// ���´� �⺻ �ڷ������θ� �����Ǿ� �ֽ��ϴ�.
	};


struct Cha {
	float x;
	float y;
};

struct Monster
{
	float x;
	float y;

};

int main()
{
	
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.
	//	struct GameObject gameobject;
	//	
	//	gameobject.Hp = 75;
	//	gameobject.Atk = 5.5f;
	//	gameobject.grade = 'A';
	//	
	//	printf("%d\n", gameobject.Hp);
	//	printf("%f\n", gameobject.Atk);
	//	printf("%c\n", gameobject.grade);
 	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.

#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� cpu�� ���� �� �ѹ���
	// ���� �� �ֵ��� �����Ϸ��� ���������� ��Ͽ� ����
	// ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

	//struct GameObject gameobject = {'A',70,5.5f};
	//printf("%d",sizeof(gameobject));//CPU�� �ѹ��� 4byte�� �о �̷��Ե�;
	
	
	

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿� ũ�Ⱑ 
	// ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
#pragma endregion

#pragma region �� �� ������ �Ÿ�
	//printf("100�� ������ : %lf\n", sqrt(100));

	//printf("10�� : %lf\n", pow(10, 2));
	struct Cha cha;
	struct Monster mon;

	cha.x = 1.0f;
	cha.y = 2.0f;

	mon.x = 4.0f;
	mon.y = 1.0f;

	float Value = 0.0f;

	Value = sqrt(pow(cha.x - mon.x, 2) + pow(cha.y - mon.y, 2));

	if (Value <= 3.0f)
	{
		printf("����");
	}
	else if (Value >= 3.0f)
	{
		printf("�̵�");
	}

#pragma endregion


	return 0;
}