#include <stdio.h>
#include <stdlib.h>

int top(int a,int b)
{
	int top=a+b;
}

/* FONKS�YONLAR
C dilinde ana fonksiyonumuz main fonksiyonudur ancak onun haricinde fonksiyonlar olu�turup bu harici fonksiyonlar� main i�inden �a��rarak �al��t�rabiliriz.
�rne�in yukar�da toplama yapmak amac�yla olu�turdu�umuz top fonksiyonunda parametre olarak a ve b yi atad�k. main fonksiyonunda c ve d de�i�kenleri
top fonksiyonundaki a ve b yerine ge�er. Ard�ndan TOP de�i�keniyle yukar�daki top de�i�keninin e�itlendi�i a + b i�lemi yap�lm�� oldu. */

// C de ASLA unutmay�n ki b�y�k ve k���k harf fark� vard�r ve en ufak bir farkl�l�k �o�u �eyi de�i�tirir.

int main(int argc, char *argv[]) {
	
	int TOP,c,d;
	
	printf("Ilk sayiyi giriniz: ");
	scanf("%d",&c);
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&d);
	
	TOP=top(c,d);
	
	printf("Toplam: %d",TOP);
	
	return 0;
}
