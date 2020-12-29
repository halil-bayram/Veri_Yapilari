#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j;
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	printf("\n Dizi elemanlari ve adresleri");
	printf("\n \t Col-0 Col-1 Col-2");
	printf("\n \t ====== ====== ======");
	for(i=0;i<3;i++){
			printf("\nRow%d ",i);
		for(j=0;j<3;j++){
			printf("%d[%u] ",a[i][j],&a[i][j]);
	}
	}
	return 0;
}
