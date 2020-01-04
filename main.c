

#include "stdio.h"

int sort(int *data, int count)
{
	int temp = 0;
	
	for(int x = count; x > 0; x--)
	{
		temp += *data;
	}
	
	return temp;
}

int main()
{
	int data[5] = {12,13,14,15,16};

	printf("hello!\n");
	
	printf("retult = %d\n", sort(data,5));

}


