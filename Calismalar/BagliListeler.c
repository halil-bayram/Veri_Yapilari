#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Meyve{
	
	float agirlik;
	float fiyat;
	
};

int main(){
	
	struct Meyve *muz,elma;
	float muzTutar,elmaTutar;
	
	muz = (struct Meyve*) malloc(sizeof(struct Meyve));
	muz->agirlik = 2.50;
	muz->fiyat =3.50;
	muzTutar = muz->fiyat * muz->agirlik;
	
	
	elma.agirlik=2.00;
	elma.fiyat = 1.75;
	elmaTutar = elma.fiyat*elma.agirlik;
	
	printf("Meyve    Ag�rl�k  Birim Fiyat�     TUTAR (TL)\n");
   	printf("-----    -------  ------------    -----------\n");
   	
   	printf("Muz      %7.2f       %7.2f        %7.2f\n",muz->agirlik, muz->fiyat, muzTutar);

  	printf("Elma     %7.2f       %7.2f        %7.2f\n",elma.agirlik, elma.fiyat, elmaTutar);
   	
   	
	return 0;
}
