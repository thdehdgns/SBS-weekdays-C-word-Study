#include <stdio.h>
#include <windows.h>
void main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.

	// �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.

	//�迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ½������� ������ �޸�
	// ����� �����Ե˴ϴ�.
	//	printf("flaot �ڷ����� ũ�� : %d\n", sizeof(float));
	//	
	//	int array[10] = { 1,3,5,7,9,11,13,15,17,19};
	//	for (int i = 0; i < sizeof(array)/sizeof(int); i++)
	//	{
	//		printf("array[%d]:%d\n",i, array[i]);
	//	}
	//	printf("array�� �迭 ����: %d\n", sizeof(array) / sizeof(int));

	//	float List [ ] = { 1.25f,2.6f,4.5f,4.521f };
	//	
	//	for (int i = 0; i < sizeof(List)/sizeof(float); i++)
	//	{
	//		printf("array[%d] = %f\n", i, List[i]);
	//	}

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ���
	// ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�.
	
	// �迭�� �������� �޸� ������ ������, �迭�� �̸���
	// �迭�� �����ּҸ� ����ŵ�ϴ�.

	//	float* p = List;
	//	p += 2;
	//	*p  = 7.875f;
	//	printf("%f\n", List[2]);
	//	printf("%p", &List[2]);
	//	printf("\n % p", p);


	
	
#pragma endregion

#pragma region ���ڿ� 
	// �������� �޸� ������ ����� ���� ������
	// ���մϴ�.

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� 
	// ����Ű���� �� �� ������, ���ڿ� ����� ������
	// ������ �б� ���� ������ ����Ǳ� ������
	// ���ڿ��� ���� ������ �� �����ϴ�.

	//	const char * string = "������ ȭ����";
	//	
	//	printf("string ������ ��: %s\n", string);
	//	
	//	string = "Stack";
	//	
	//	printf("string ������ ��: %s\n", string);
	//	
	//	
	//	printf("string ������ ũ��: %d\n", sizeof("������ ȭ����"));

	//���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�Ⱑ
	// �����Ǹ�, �������� ���ڿ��� ���� �Ʒ��ִ� ����
	// ���ڰ� �߰��˴ϴ�.
	//char word[] = { "darkness" };
	//char content[] = { "GitHub" };
	//printf("%d", sizeof(word));

	// ���ڿ��� ��� ���� �������� �޸� �������� ����Ǿ�
	// ������, ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ�
	// ��ȿ�� ���ڱ����� ����մϴ�.

	//word[4] = '\0';
	//printf("%s\n",word);


#pragma endregion

#pragma region ASCII�ڵ�
	// �̱� ANSI���� ǥ��ȭ�� ���� ��ȯ�� 7bit ��ȣ ü���Դϴ�.

	//	char alphabet = 65;
	//	for (int i = 0; i < 26; i++)
	//	{
	//		printf("%c\n", alphabet + i);
	//	}
	
#pragma endregion



}