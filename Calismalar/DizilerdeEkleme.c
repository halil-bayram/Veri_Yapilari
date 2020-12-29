#include<stdio.h>
#include<conio.h>
int main(){
	int num[20]={0},j,k,n,p,t,s;
	printf("\n Lutfen Eleman Sayisini Giriniz: ");
	scanf("%d",&n);
	for(j=0;j<n;j++){
		printf("\t <--- Elemanlari Giriniz --->");
		scanf("%d",&num[j]);
	}
	for(j=0;j<n;j++){
		printf("\n num[j]: %d",num[j]);
	}
	printf("\n Hangi elemani eklemek istersiniz:");
	scanf("%d",&s);
	printf("Nereye eklemek istersiniz:");
	scanf("%d",&p);
	p--;
	for(j=n;j!=p;j--){
		
		num[j]=num[j-1];
		num[j]=s;
	}
	for(j=0;j<n;j++){
		printf("\n num[j]: %d",num[j]);
	}
	return 0;
}
