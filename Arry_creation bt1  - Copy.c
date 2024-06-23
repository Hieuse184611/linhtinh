//Nhap n tu ban phim, khai bao dong mang a gom 
// n phan tu va yeu cau ng dung nhap vap 
//tung phan tu, sau do in ra mang a 

#include <stdio.h>
int n;
printf(" Nhap so n : \n");scanf("%d",&n);

int a[n];

for (int i= 0;i < n; i++){
	printf("Nhap phan tu thu %d",i);
	scanf("%d",&a[i]);
}

for(int i = 0; i < n; i++){
	printf("%d", a[i]);
}
return 0;
}
