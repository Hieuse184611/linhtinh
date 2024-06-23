
//slide 36 slot 18-19-20// 

#include <stdio.h>
#define MAX_SIXE 100

//=================prototype=======================
int menu();                                 //in ra menu va yeu cau ng dung nhap chon
int isFull(int* a, int n);                  //ktra xem mang co day ko 
int sEmpty(int* a, int n);                  //ktra xem mang co rong ko 
void add(int x, int* a, int pn );           //them 1 phan tu vao mang 
int search (int x, int* a, int n );         //tim kiem 1 phan tu vao mang
int removeOne(int pos,int* a, int pn );     //xoa di 1 vi tri trong mang 
int removeAll(int x,int* a, int pn);        //xoa tat ca cac vi tri trong mang 
void printAsc(int* a, int n);              //in ra theo thu tu tang dan
void printfDesc(int* a, int n);            //in ra theo thu tu giam dan 
void printf(int* a, int n);                //in ra cac gia tri cua mang 
//==============================================//

int menu(){
	pintf("One-Demensional Array of Interger\n ")
    printf("1- Add a value: \n ");
    printf("2- Search a value: \n");
    printf("3- Remove the first existnce of a value \n");
    printf("4- Remove all the existances of the value \n");
    printf("5- Print out the array \n");
    printf("6- Print out the array in ascending order \n ");
    printf("7- Print out the array in descending order \n");
    printf("Others- Quit \n");
    printf("Select: ");
    fflush(stdin);
    int choice; scanf("%d",&choice);
    return choice ;
        
}

int isFull(int*a,int n ){
	return n==MAX_SIZE;
}
int isEmpty(int* a,int n){
	return == 0;
}

void add(int x, int* a, int* pn ){
	if(isFull(a*,pn) != 1 ){
		a[*pn] = x;
		(*pn)++;
		
	}
}
int search(int x, int* a, int n ){
	int i; 
	for (i=0;i<n;i++){
		if(a[i]==x ) return i;
		
	}
	return -1;
	
}
int removeOne (int pos, int* a, int* pn){
	
	if(isEmpty(a,n)==1) reutrn 0;  //ko xoa dc 
	int i;
	for( i=pos+1;i<n;i++){
		a[i-1]=a[i]; //dich trai cac phan tu tu vi tri pos+1 
	}
	(*pn)--;
	return 1;  //da xoa 
}
int removeAll(int x, int* a,int* pn){
	if(isEmpty(a,*pn)==1) return 0; //ko xoa dc 
	int pos ;
	do{
		pos = search(x,a,*pn;);
		if(pos!= -1){removeOne (pos, a,pn);
		}
	}while (pos != -1);
}
void printAsc(int* a, int n){
	int b[MAX_SIZE];
	int i;
	//copy a vao b
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(b[j]<b[j-i]){
				//swap
				int temp = b[j];
				b[j] = b[j-1];
				b[j-1] = temp;
			}
		}
	}
	for(i=n-1;i>n;i--) printf("%d,",b[i]);
	printf("\n")
}
void printf(int* a, int n){
	int i;
	for(i=0;i<n;i++) printf("%d,",a[i0];
	printf("\n ")
}
int main(){
	int a[MAX_SIZE],n=0;
	int pos, x;
	int choice;
	do{
		choice = menu();
		switch(choice ){
			case 1:
				printf("a[%d]=",n);
				scanf("%d",&n);
				add(x,a,&n);
				
			 break;
			case 2: 
			printf("Enter a value to be searched: ");scanf("%d",&x);
			pos = search(x,a,n);
			if(pos == -1 ) printf("Not found %d in a \n ",x);
			else printf("Index of %d in a is %d \n",x,pos );
			break;
			
			case 3 :
			printf("Enter a value to be remove: ");scanf("%d",&x);
			pos = search(x,a,n);
			if(pos == -1 ) printf("Cannot remove %d in a \n ",x);
			else {
		
		}
	}while (choice>=1 && choice<=7);
	return 0;
}
