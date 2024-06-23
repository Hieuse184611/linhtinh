// Nhap mang a gom n phan tu (khoi tao dong)
//in ra man hinh tat ca cac so chinh phuong trong a 
//so chinh phuong x = z^2

#include <stdio.h>
#include <math.h>

int check(int x){
	int t = sqrt(x);
	return t*t==x;
} 
int input(int* a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]=",i); scanf("%d",&a[i]);
	}
}

 int main(){
  int a[10000];
  int n; printf("Enter n: ");scanf("%d",&n);
  int*a = malloc(n*sizeof(int));
  input(a,n);
  int i;
 
for (int i = 0; i < n; i++) {
  if(check(a[i]==1) 

