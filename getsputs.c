#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char bilgi[40];
	
	printf("Bilgiyi girin: ");
	gets(bilgi);
	printf("\n");
	puts(bilgi);
	
	/* Kullan�c�dan string t�r�nde veri al�rken ilk bo�luktan sonras�n� alamay�z.
	Bu durumda gets puts devreye girer. �letmek istedi�imiz mesaj�n harf say�s� kadar 
	alan b�rakarak mesaj� iletmeyi ba�arabiliriz. */
	
	return 0;
}
