//��ǻ���� ���� �ӵ��� �˾ƺ��� ���Ͽ� '1'�� �Է��ϸ� 0�������� ���ڸ� ������Ű�� �ִٰ� '2'�� �Է��ϸ� ���ݱ��� �� ���ڸ� ȭ�鿡 ���//

#include <stdio.h>
#include <Windows.h>

void ReadTSC(DWORD *dwLo, DWORD *dwHi)
{
	_asm
	{
		_emit    0x0F
			_emit    0x31
			mov      ecx, dword ptr dwLo
			mov      dword ptr[ecx], eax
			mov      ecx, dword ptr dwHi
			mov      dword ptr[ecx], edx
	}
}

int main()
{
	ULARGE_INTEGER Cycle, OldCycle;
	int input;

	while (1)
	{
		scanf("%d", &input);

		if (input == 0)
		{
			ReadTSC(&OldCycle.u.LowPart, &OldCycle.u.HighPart);
		}
		else if (input == 1)
		{
			ReadTSC(&Cycle.u.LowPart, &Cycle.u.HighPart);
			printf("ī��Ʈ ���� %llu\n", Cycle.QuadPart-OldCycle.QuadPart);
		}
	}
	return 0;
}