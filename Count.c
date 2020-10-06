#include "header.h"

int countseat(int num, int m)
{
	int max=1;
	
	for(int i=0;i<m;i++){

		max*=10;
	}

	num = num/max;
	num -= num/10 *10;

	return num;
}

int countmn(int num, int m, int n)
{
	int max=1;
	int tox;
	
	for(int i=0;i<m;i++){

		max*=10;

	}
	tox = max * (num / (max*10));
	if(countseat(num,m) >= n){

	tox = tox + min(max,num-((num / (max *10)) * (max*10)+max*n) +1);	
	}
	if(n==0) return (tox-max);
	else return tox;
}

int countn(int num, int n)
{
	int total=0;
	int seat=0;
	int num2=num;
	while(num2){

		num2 /= 10;
		seat++;

	}

	for(int i=0; i<seat; i++){

		total = total + countmn(num,i,n);		

	}
	return total;
}
