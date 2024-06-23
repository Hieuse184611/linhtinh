#include <stdio.h>

int binarySearch (int x, int a[],int n)
{  
int i=0, j= n-1, c ;
int cnt = 0;
   while (i<=j)
     {   
	 cnt++;
	 c= (i+j)/2;
         if ( x== a[c] )
		 {printf("So lan lap cua binarySearch : %d \n", cnt );
		  } return c ;
         if (x < a[c] ) j = c-1;
         else i = c +1;
     }
    return -1;
}
int firstSearch(int x, int* a, int n)
int i ;
 for(i=0;i<n;i++){
	cnt++ ;
	if (a[i]==x ){
		printf("So lan lap cua binarySearch : %d \n", cnt );
		return i; 
	}
	
}

int main(){
	int a[10] = 1,2,6,5,7,9,10,13,11,15;
	printf("Vi tri cua x la: %d \n", binarySearch(a,10,9));
	return 0 ;
	
}
