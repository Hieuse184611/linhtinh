#include <stdio.h>
#include <stdlib.h>
	
	int main(){
	
	char* pc1 = (int*)malloc(sizeof(int));
	char* pc2 = (int*)malloc(sizeof(int));
	
	printf("Enter pc1 ,pc2:");scanf("%d%d,pA,pB");
	char c;
	if(*pc1 > *pc2 ){
		c = *pc1, *pc1 = *pc2, *pc2 = c;
	}
	
	for(c= *pc1; c<=*pc2; c++) 
	printf("%c\t%d\t0x%x\t0x%x\n",c,c,c,c);
	free(pc1);free(pc2);
	return 0;
}
