#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i,j,uzunluk;
	
	printf("Taban uzunlugu: ");
	scanf("%d",&uzunluk);
	
	for(i=1;i<=uzunluk;i++)
	{
		for(j=1;j<=uzunluk-i;j++)
		{
			printf(" ");
		}
		
		// ��gen kenarlar� d���nda bo�luk b�rakabilmek i�in bu blo�u kulland�k.
		
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		
		// ��gen kenarlar� ve ��genin i�inde simetriyi bozmadan noktalarla �ekli do�ru tamamlayabilmek i�in bu blo�u kulland�k.
		
		printf("\n");
	}
	
	/* Bu kodda ama� taban uzunlu�u girilen ��geni y�ld�zlarla terminal ekran�na �izdirmektir.
	��renirken benim de zorland���m bu kodun mant���n� deneme yan�lma yollar�yla ��zebilirsiniz.
	i,j ve uzunlukla; if bloklar�ndaki * ve bo�luk k�s�mlar�yla oynayabilirsiniz.
	��renince �ok kolay gelecektir. �yi �al��malar dilerim :) */
	
	return 0;
}
