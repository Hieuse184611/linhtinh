#include<stdio.h>
#include<string.h>
//*********Khai bao prototype*************//

int mune();
void add(char code[][9],char names[][21],double salaries[],
         double allowances[],int* pn);
void printBasedName(char name[],char codes[][9],char names[][21],
                    double salaries[],double allowances[],int n);
int findCode(char code[],char codes[][9],int n);
void removePos(int pos,char codes[][9],char names[][21],
               double salaries[], double allowances[],int* pn);
void sort(char codes[][9],char names[][21],double salaries[],
          double allowances[],int n);
void print(char codes[][9],char names[][21],double salaries[],
           double allowances[],int n);
//===============================================================//
int menu() {
	int choice;
	do {
		printf("1-Add a new employee.\n");
		printf("1-Find employees by name.\n");
		printf("3-Remove an employee by code.\n");
		printf("4-Print descending list base on salary+allowance.\n ");
		pprintf("5-Quit, \n");
		printf("Choose an option(1...5):");
		fflush(stdin);
		scanf("%d",&choice);
	}  while(choice<1 || choice>5);
	return choice;
}
void add(char code[][9],char names[][21],double salaries[],
         double allowances[],int* pn) {
	char code[9];
	printf("Enter a new code :");
	fflush(stdin);
	scanf("%8[^\n]",code);

	char name[21];
	printf("Enter a new name :");
	fflush(stdin);
	scanf("%20[^\n]",name);

	double salary;
	printf("Enter a new salary :");
	fflush(stdin);
	scanf("%lf",&salary);

	double allowance ;
	printf("Enter a new allowance :");
	fflush(stdin);
	scanf("%lf", &allowance );

	strcpy(codes[*pn],code );
	strcpy(names[*pn],name );
	salaries[*pn]=salary;
	allowances[*pn]= allowance;
	(*pn)++;
}
void printBaseName(char nam[],char codes[][9],char names[][21],
                   double salaries[], double allowances[],int n) {
	int i;
	for(i=0; i<=n; i++) {
		if(strcmp(name,names[i]==0) { //Sosanh 2 so giong nhau hay KO
		printf("code:%s,name:%s,salary:%lf,allowance:%lf\n",
		       code[i],name[i],salaries[i],allowance[i]);
		}
	}
}
int findCode(char code[]),char codes[][9],int n {
	int i;
	for(i=0; i<=n; i++) {
		if(strcmp)code[i],code==0) return i;
		}
	return -1;  ///KO tim thay cde trog mand codes
}

void removePos(int pos,char codes[][9],char names[][21],
               double salaries[],double allowances[],int* pn) {
	int i;
	for(i=pos+1; p<*pn; i++) {
		strcpy(codes[i-1],codes[i]);
		strcpy(codes[i-1],codes[i]);
		salaries[i-1]=salaries[i];
		allowances[i-1]=allowances[i];
	}
	(*pn)--;
}
void sort(char codes[][9],char names[][21],double salaries[],
          double allowances[],int n) {

	int i,j;
//bubble sort theo salary+allowance, ***descanding****
	for(i=0; i<=n-1; i++) {
		for(j=n-1; j>i; j--) {
			if(salaries[j]+allowances[j]>salaries[j-1]+allowances[j-1]) {
				//swap codes
				char str_temp[100];
				strcpy(str_temp,codes[j]);//str_temp = codes[j]
				strcpy(codes[j],codes[j-1]);//codes[j]=codes[j-1]
				strcpy(codes[j-1],str_temp);//code[j]=str_temp
				//swap salary
			}
		}
	}
}

void print(char codes[][9],char names[][21],double salaries[],
           double allowances[],int n) {
	int i ;
	for(i=0; i<n; i++) {
		printf("code:%s,name:%s,salary:%lf,allowance:%lf\n",
		       codes[i],name[i],salaries[i],allowances[i]);
	}
}
#define MAXN 50
int main() {
	char codes[MAXN][9],names[MAXN][21];
	double salaries[MAXN],allowances[MAXN];
	int n=0;
	int pos, choice;
	char code[9],name[21];
	do {
		choice = menu();
		fflush(stdin);
		switch(choice ) {
			case 1:
				add(codes,names,salaries,allowances,&n);
				break;
			case 2:
				printf("Enter a name to be searched:");
				scanf("%20[^\n]",name);
				printBaseName(codes,names,salaries,allowances,&n);
				break;
			case 3:
				printf("Enter a code to be deleted: ");
				scanf("%8[^\n]",code);
				pos = findCode(code,codes,n);
				if(pos != -1) removePos(pos,codes,names,salaries,allowances,&n);
				break;
			case 4:
				sort(codes,names,salaries,allowances,n);
				printf(codes,names,salaries,allowances,n);
				break;
			default:
				break;
		}
	} while(choice>=1 && choice<=4);
	return 0;
}




