#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcat fonksiyonu kullan�laca�� i�in string.h k�t�phanesini kulland�k.

int main(int argc, char *argv[]) {
	
	char kitapad[30],yazar[30],kitapyazar[60];
	
	printf("Kitabin adini giriniz: ");
	gets(kitapad);
	puts(kitapad);
	
	printf("\n");
	
	printf("Yazarin adini giriniz: ");
	gets(yazar);
	puts(yazar);
	
	strcat(kitapyazar,kitapad);
	strcat(kitapyazar," ");
	strcat(kitapyazar,"--->");
	strcat(kitapyazar," ");
	strcat(kitapyazar,yazar);
	
	printf("\n\n");
	
	printf("%s",kitapyazar);
	
	/* strcat fonksiyonu de�i�kenlerdeki ifadelerin birle�tirilmesini sa�lar.
	strcat(i�inde birle�tirme yap�lacak de�i�ken, i�indeki ifadenin birle�tirilece�i de�i�ken ya da ifade) �eklinde kullan�m yapar�z. */
	
	return 0;
}
