#include <stdio.h>
void bubbleSort(int a[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for (j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				//swap
				int temp = a[j];
				a[j]=a[j-1];
				a[j-1] = temp ;
				
			}
		}
	}
}
int main(){
	int a[]={-1,4,0,-2,7,5,9,11,16,-3};
	bubbleSort(a,10);
	int i;
	for(i=0;i<10;i++)printf("%d,",a[i]);
	return 0 ;
}
