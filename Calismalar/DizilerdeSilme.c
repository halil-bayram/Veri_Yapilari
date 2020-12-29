#include<stdio.h>
#include<conio.h>
int main(){
	int Num[20]={0},j,k,n,p,t;
	printf("\n kac elemanli dizi oldugunu girin.  ");
	scanf("%d",&n);
		for(j=0;j<n;j++){
			printf("\n -------Elemanlar------- \t");
			scanf("%d",&Num[j]); 
		}
		for(j=0;j<n;j++){
			printf("\n Num[j]=%d",Num[j]);
		}
	printf("\nSilinecek eleman numarasini giriniz.");
	scanf("%d",&p);
	p--;
	for(j=0;j<n;j++){
		if(j>p){
		Num[j]=Num[j+1];
		}
	}
	for(j=0;j<n;j++){
		if(Num[j]!=0){
			printf("\nNum[j]=%d",Num[j]);
		}
	}
	return 0;
}
