#include<stdio.h>
#include<conio.h>
main() {
	int *ip1, id1;
	id1 = 278;
	ip1 = &id1;
	/* id1 de�erinin do�rudan yaz�lmas� */
	printf("id1 degisken degeri: %d\n", id1);
	/* id1 de�i�ken de�erinin dolayl� olarak yaz�lmas� */
	printf("id1 degisken degeri: %d\n", *ip1);
	/* id1 de�i�ken bellek adresinin i�aret�i yoluyla yaz�lmas� */
	printf("id1 degiskeni bellek adresi: %p\n", ip1);
	/* id1 de�i�ken bellek adresinin & i�lemcisi ile yaz�lmas� */
	printf("id1 degiskeni bellek adresi: %p", &id1); 
}
