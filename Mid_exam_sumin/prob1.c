//������ �� ���ڸ� ǥ���Է���ġ�� ���� �Է� �޾� �� ���� ���̿� �����ϴ� ���� ū �Ҽ�(prime number)�� ȭ�鿡 ���.

#include<stdio.h>


int prime['ab'];

void trial(int input, int *result)
{
	int getout, b, isprime;
	for (getout = 0; getout == 0; getout++)
	{
		if (input % 2 == 0 && input != 2) //�Ҽ��� ã�� ���ؼ� ����. 2�� ������ 
		{
			/////////////////////////////////////////
			*result = 0; //���� 0�̵ɰ��� �Ҽ��� �ƴ϶�� �ν�
			printf("%d�� �Ҽ� �ƴ�\n", input);
			/////////////////////////////////////////
			continue;
		}
		isprime = 1;
		for (b = 2; b*b <= input; b++) //��Ʈ����: �Ҽ� ã�� �� ���� (������ ã�Ѿ��. �Ȱ�ĥ������. ���� ���� �����.)
		{
			if (input%b == 0)
			{
				isprime = 0;
				break;
			}
		}
		if (isprime)
		{
			*result = 1; //���� 1�� �� ���� �Ҽ��� �ν��Ѵ�.
			printf("%d�� �Ҽ�\n", input);
		}
		else
		{
			*result = 0;
			printf("%d�� �Ҽ� �ƴ�\n", input);
		}

	}
}

int main() //����
{
	int result; //�Ҽ��϶� ���� 1, �ƴҶ��� 0
	int low, high, i; //����ڰ� �Է��� ���� ���� low, ���� ���� high

	printf("�� ���ڸ� �Է��ϼ���. ��)12 67\n"); //����ȭ�� �ߴ� ��
	scanf("%d %d", &low, &high); //�Է��ϴ°�


	for (i = high; i >= low; i--) //i�� ���� 
		//for (i = low; i >= high; i++) //i�� ���� prime �Ҽ��� ���� ������
	{
		trial(i, &result); //i(high��)�� low���� �� �� ���� ����
		if (result == 1)
			break;
	}
	getchar(); //�� �Ȳ�����

	return 0; //����
}