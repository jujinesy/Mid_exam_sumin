//��ǻ���� ���� �ӵ��� �˾ƺ��� ���Ͽ� '1'�� �Է��ϸ� 0�������� ���ڸ� ������Ű�� �ִٰ� '2'�� �Է��ϸ� ���ݱ��� �� ���ڸ� ȭ�鿡 ���//

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <process.h>
unsigned int WINAPI ThreadFunction(void *arg);
int count, flag;

int main()
{
	HANDLE hThread = NULL;
	DWORD dwThreadID = NULL;
	int input;
	hThread = (HANDLE)_beginthreadex(NULL, 0, ThreadFunction, NULL, 0, (unsigned*)&dwThreadID);
	if (hThread == 0)
		printf("error");
	printf("������ �������� �ڵ� : %d\n", hThread);
	printf("������ �������� ID : %d\n", dwThreadID);

	while (1)
	{
		scanf("%d", &input);

		if (input == 0)
		{
			flag = 1;
		}
		else if (input == 1)
		{
			flag = 0;
			printf("ī��Ʈ ���� %llu\n", count);
		}
	}
	return 0;
}

unsigned int WINAPI ThreadFunction(void *arg)
{
	while (1)
	{
		if (flag)
			count++;
		//Sleep(2000);
		//printf("������ ���� ��\n");
	}
	return 0;
}