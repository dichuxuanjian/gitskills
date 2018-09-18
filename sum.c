#include <stdio.h>
int main()
{
	int a=3,b=4;
	for (int i=0,i<5;i++)
	{
		a+=3;
		b+=a;
	}
	printf("b=%d\n",b);
}
