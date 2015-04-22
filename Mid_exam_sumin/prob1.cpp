//임의의 두 숫자를 표준입력장치를 통해 입력 받아 두 숫자 사이에 존재하는 가장 큰 소수(prime number)를 화면에 출력.

#include<stdio.h>


int prime['ab'];

void trial(int input, int *result)
{
	for (int getout = 0; getout == 0; getout++)
	{
		if (input % 2 == 0 && input != 2)
		{
			*result = 0;
			printf("%d는 소수 아님\n", input);
			continue;
		}
		bool isprime = true;
		for (int b = 2; b*b <= input; b++)
		{
			if (input%b == 0)
			{
				isprime = false;
				break;
			}
		}
		if (isprime)
		{
			*result = 1;
			printf("%d는 소수\n", input);
		}else
		{
			*result = 0;
			printf("%d는 소수 아님\n", input);
		}
		
	}
}

int main()
{
	int result;
	int low, high;

	printf("두 숫자를 입력하세요. 예)12 67\n");
	scanf("%d %d", &low, &high);


	for (int i = high; i >= low; i--)
	{
		trial(i, &result);
		if (result == 1)
			break;
	}
	
 	return 0;
}