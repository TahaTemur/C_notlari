#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcat fonksiyonu kullanılacağı için string.h kütüphanesini kullandık.

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
	
	/* strcat fonksiyonu değişkenlerdeki ifadelerin birleştirilmesini sağlar.
	strcat(içinde birleştirme yapılacak değişken, içindeki ifadenin birleştirileceği değişken ya da ifade) şeklinde kullanım yaparız. */
	
	return 0;
}
