#include <stdio.h>
int main(){
	int a[5];
	a[0]=1; a[1]=2;a[2]=3;a[3]=4;a[4]=5;
	
	int a1[]={1,2,3,4,5};
	//Khoi tao dong mang thong qua con tro 
	int* b = (int*)calloc(5,sizeof(int));
	b[0]=2;b[1]=4;b[2]=6;b[3]=8;b[4]=10;
	int* c = (int*)malloc(5*sizeof(int));
	c[0]=1;c[1]=3;c[2]=5;c[3]=7;c[4]=9;
	//In ra gia tri cua mang a 
	int i; 
	for(i=0;i<5;i++){
		 print("a[%d] = %d \n",i,a[i]);
		
	}
	printf("Gia tri cua a: %u\n",a);
	printf("Gia tri cua a[0]: %u \n",&a[0]);
	return 0;
	
}

