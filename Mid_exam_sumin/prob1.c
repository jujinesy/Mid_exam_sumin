//������ �� ���ڸ� ǥ���Է���ġ�� ���� �Է� �޾� �� ���� ���̿� �����ϴ� ���� ū �Ҽ�(prime number)�� ȭ�鿡 ���.

#include<stdio.h>


int prime['ab'];

void trial(int input, int *result)
{
	int getout, b, isprime;
	for (getout = 0; getout == 0; getout++)
	{
		if (input % 2 == 0 && input != 2)
		{
			*result = 0;
			printf("%d�� �Ҽ� �ƴ�\n", input);
			continue;
		}
		isprime = 1;
		for (b = 2; b*b <= input; b++)
		{
			if (input%b == 0)
			{
				isprime = 0;
				break;
			}
		}
		if (isprime)
		{
			*result = 1;
			printf("%d�� �Ҽ�\n", input);
		}else
		{
			*result = 0;
			printf("%d�� �Ҽ� �ƴ�\n", input);
		}
		
	}
}

int main()
{
	int result;
	int low, high, i;

	printf("�� ���ڸ� �Է��ϼ���. ��)12 67\n");
	scanf("%d %d", &low, &high);


	for (i = high; i >= low; i--)
	{
		trial(i, &result);
		if (result == 1)
			break;
	}
	
 	return 0;
}