#include <stdio.h>
int main(int argc, char* argv[]){

int start = 2520;
int answer = 0;
int y = 0;
int x = 1;
while(x == 1){
	for(int i = 2; i<21; i++){
	if(start % i == 0)
	{
		y = 1;

	}
	else
	{
		y = 0;
		i = 21;
	}

	}//end for

if( y == 1){
printf("%d",start);
break;
}
else{
start = start +1;
}

}//end while
return 0;
}
