#include <stdio.h>
#include <stdlib.h>

typedef int d1;
	
/* typedef ifadesini kullanarak de�i�ken tiplerini (int, char, float, vs.) farkl� isimlerle tan�mlayabiliriz. 
Bu �ekilde mevcut bir veri t�r� i�in yeni bir isim veya yeni bir veri t�r� olu�turabiliriz */

int main(int argc, char *argv[]) {
	
	int toplam;
	
	d1 d2,d3; // Yukar�da typedef int d1; oldu�u i�in d1 i int niyetine kullanm�� olduk.
	
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&d2);
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&d3);
	
	toplam = d2 + d3;
	
	printf("Toplam: %d",toplam);
	
	return 0;
}
