#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// stdbool.h k�t�phanesi true ve false u tan�mlar. bool veri tipinde kullan�l�r.

int main(int argc, char *argv[]) {
	
	int i,sayi,top=0;
	
	for (i=0;true;i++)
	{
		printf("Eglenmek icin sayi gir! (Cikmak icin -1 e basin): ");
	    scanf("%d",&sayi);
		{
		if (sayi== -1) break;
		}
		top += sayi;
	}
	printf("Toplam: %d",top);
	
	/* true kelimesiyle d�ng� sonsuza kadar devam eder. Kodda -1 ifadesi girilince durdurulaca�� ifade ediliyor.
	Durdurma i�lemi break komutuyla ger�ekle�tirilir ve kod durdurulur. En sonda d�ng� durana kadar devam eden toplama i�leminin sonucu kar��m�za ��kar. */
	
	return 0;
}
