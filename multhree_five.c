#include <stdio.h>


int main(int argc, char* argv[]){

int count = 0;
	for(int i = 0; i< 1000; i++)
	{
		if(i%3 == 0 || i%5 ==0)
		{
			count = count + i;
		}

	}
	printf("%d",count);
return 0;
}
