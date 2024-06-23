//Nhap 2 so 
//tinh TBCong cua 2 so tren 
//chi dung bien trong heap 
//3,2 -> 3.5 

#include <stdio.h>
	
	int main(){
	int* pA = (int*)malloc(sizeof(int));
	int* pB= (int*)malloc(sizeof(int));

	printf("Enter a ,b:");scanf("%d%d,pA,pB");
	printf("*pA=%d,*pB=%d\n",*pA,*pB);
	printf("average%.1lf\n",(float)(*pA,*pB)/2);
	free(pA);free(pB);	
	return 0; 
	
}
