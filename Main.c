#include "header.h"

int main(void)
{
	int num;
	scanf("%d", &num);


	int str[10];
	for(int i=0;i<10;i++){

	    	str[i]=countn(num,i);

	}
	print(str,10);
	

}
