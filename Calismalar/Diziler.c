#include<stdio.h>
#include<conio.h>

int main(){
	
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int result;
	
	result = get(a,10);
	
	return 0;
}

int get(const int *pi,int size){
	
	int k;
	int total;
	total=0;
	
	for(k=0;k<size; ++k){
		
		total +=pi[k];
		
	}
	
	return total;
	
	printf("%d",total);
}
