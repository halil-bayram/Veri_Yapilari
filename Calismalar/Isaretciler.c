#include<stdio.h>
#include<conio.h>

	main(){
	int *ip1, *ip2, id1, id2; /* 1 */
	ip1 = &id1; /* 2 */
	ip2 = &id2; /* 3 */
	id1 = 42; /* 4 */
	*ip2 = 67; /* Dolayl� de�er atama y�ntemi */ /* 5 */
	printf("id1 de�i�keninin de�eri: %d\n", *ip1);
	printf("id2 de�i�keninin de�eri: %d\n", *ip2);
	printf("id1 de�i�keninin bellek adresi: %p\n", ip1);
	printf("id2 de�i�keninin bellek adresi: %p\n", ip2);
}
