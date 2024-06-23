#include <stdio.h>
//Nhap 2 so va in ra ket qua 
// 2 so tren ko khai bao bien trong stack 

int main (){
	//int a,b; //bien trong stack 
	//printf("Enter a , b:");
	//scanf("%d%d",&a,&b);
	
	int* pA = (int*)malloc(sizeof(int));
	int* pB = (int*)malloc(sizeof(int));
	//to do 
	
	printf("Enter a ,b:");scanf("%d%d",pA,pB);
	printf("*pA=%d,*pB=%d\n",*pA,*pB);
	free(pA);free(pB);
	
	printf("average=%.4f\n",average(a,b,c));
	return 0;
}
