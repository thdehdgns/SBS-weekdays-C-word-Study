#include <stdio.h>

void main()
{

#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ������� 
	// �����ϴ� ��ɹ��Դϴ�.

#pragma region ���� ������
	//�� �����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų ��
	//����ϴ� �������Դϴ�/

	// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ�
	// ������ �����մϴ�.
	//++i
	//int x = 0;
	//int vectorX = ++x;
	//printf("���� ������ x�� �� : %d\n", x); // 1
	//printf("vectorX�� ��: %d\n", vectorX); // 1
	//
	//vectorX = --x;
	//printf("���� ������ x�� �� : %d\n", x); // 0
	//printf("vectorX�� ��: %d\n", vectorX); // 0


	// ���� ���� �����ڴ� ������ ������ ���� ������
	//���� �尨��ŵ�ϴ�.
	//i++
	//	int y = 0;
	//	int vectory = y++;
	//	printf("���� ������ y�� ��: %d\n",y); //1
	//	printf("vectory�� ����: %d\n", vectory);//0
	//	
	//	vectory = y--;
	//	printf("���� ������ y�� ��: %d\n", y);//0
	//	printf("vectory�� ����:%d\n", vectory);//1

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư����
	// Ƚ����ŭ �ݺ��ϴ� �ݺ����Դϴ�.

	// for���� ��� ������ ������ ���¿� �ݴ�� �ʱ����
	// �����ϰ� �Ǹ� ������ ��ġ�����ʾ� �ݺ������� ���صǴ� ������ �߻��մϴ�.

	

	//	for (int i = 0; i < 10; i++)
	//	{
	//		printf("i �� �� : %d\n\n",i);
	//	}

	//	for (int i = 1; i < 10; i++) //������ 
	//	{
	//		for (int j = 1; j < 10; j++)
	//		{
	//			printf("%d X %d = %d\n", i, j, i * j);
	//		}
	//	}
#pragma endregion

#pragma region while��
	// Ư�� ������ ������ ������ ����ؼ� �־���
	// ��ɹ��� �����ϴ� �ݺ����Դϴ�.
	//	
	//	int a = 1;
	//	
	//	while (a <= 5)
	//	{
	//		printf("%d\n", a);
	//		a++;
	//	}

	//while���� ��� ������ �Ʒ��� ���ؿ����,
	// �Ʒ��� �ִ� ��ɹ��� ������ �� ������
	// �ٽ� �����ִ� ��ɹ����� ���ư��� �����մϴ�.
#pragma endregion //s

#pragma region do while ��
	// ���ǰ� ������� �� ���� �۾��� ������ ����
	// ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	//	int connection = 0;
	//	
	//	do
	//	{
	//		printf("connection\n");
	//		connection++;
	//	} while (connection<0);
#pragma endregion

#pragma region continue��
	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾ 
	// �����ϴ� ����Դϴ�.
	//	for (int i = 1; i < 11; i++)
	//	{
	//		if (i % 3)
	//		{
	//			printf("%d\n", i);
	//			
	//		}
	//		continue;
	//		
	//	}
#pragma endregion

#pragma region ���� �� ���
	// ����� �����ϴ� ���߿� ����� �̹� Ȯ���� ���,
	// ������ ����ϴ� ������ �����ϴ� ���Դϴ�.

	//	int x = 0;
	//	int y = 0;
	//	int z = 0;
	//	if (x == 0 && y++)
	//	{
	//		printf("Short Circuit\n");
	//	}
	//	if (z == 0 || y++)
	//	{
	//		printf("OR Operator\n");
	//	}
	//	
	//	printf("y�� ���� : %d\n", y);

#pragma endregion

#pragma region ���� for��
	//	for (int i = 0; i < 3; i++)
	//	{
	//		printf("i�� ��: %d\n", i);
	//		for (int j = 0; j < 3; j++)
	//		{
	//			printf("j�� ��: %d\n",j);
	//		}
	//	}
#pragma endregion


#pragma endregion
	

#pragma endregion



}