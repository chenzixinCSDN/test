#include <stdio.h>
int main()
{
	//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�

	int frist , second , third ;
	for (frist = 1; frist < 5; frist++)
	{
		for (second = 1; second< 5; second++)
		{
			for (third =1; third< 5; third++)
			{
				if (frist!=second&&frist!=third&&second!=third)
				{
					printf("%d,%d,%d\n", frist, second, third);
				}
			
			}
		}
	}

	return 0;

}