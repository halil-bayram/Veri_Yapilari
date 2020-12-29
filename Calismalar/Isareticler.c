#include<stdio.h>
#include<conio.h>
main() {
	int *ip1, id1;
	id1 = 278;
	ip1 = &id1;
	/* id1 deðerinin doðrudan yazýlmasý */
	printf("id1 degisken degeri: %d\n", id1);
	/* id1 deðiþken deðerinin dolaylý olarak yazýlmasý */
	printf("id1 degisken degeri: %d\n", *ip1);
	/* id1 deðiþken bellek adresinin iþaretçi yoluyla yazýlmasý */
	printf("id1 degiskeni bellek adresi: %p\n", ip1);
	/* id1 deðiþken bellek adresinin & iþlemcisi ile yazýlmasý */
	printf("id1 degiskeni bellek adresi: %p", &id1); 
}
