#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
 	int n,hane=0,toplam=0;
 
 	printf("Sayiyi giriniz: ");
 	scanf("%d",&n);

 	do {
   		toplam += (n%10);
   		n = n/10;
   		hane++;
 	}
 	while (n>0);
 
 	printf("Rakamlari toplami %d ve %d haneli.",toplam,hane);
 	
 	/* DO-WHILE D�NG�S�
 	D�ng� �e�itlerinden biri de do-while d�ng�s�d�r.
 	�nce do i�erisindeki i�lemler ger�ekle�tirilir. Sonra while daki �arta uyup uymad���na bak�l�r.
 	Yukar�daki kodda, girilen say�n�n rakamlar� toplam� ve ka� basamakl� oldu�u bilgisi bize verilir. */
 	
	return 0;
}
