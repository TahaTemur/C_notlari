#include <stdio.h>
#include <stdlib.h>

enum sehirler
{
	adana,adiyaman,afyon,agri,amasya,ankara,antalya,artvin,aydin,balikesir
};

/* enum
Programda bir�ok de�i�kene tek tek say�sal de�er vermek yerine enum kullanabiliriz.
�rne�in yukar�da ilk 10 �ehrin plakas�n� tek tek girmek yerine enum i�erisine atad�k.
Adanay� ilk ifade oldu�u i�in 0 olarak kabul ediyor. Geride kalan ifadeler 1,2,3... �eklinde otomatik numaraland�r�lacakt�r. */

int main(int argc, char *argv[]) {
	
	enum sehirler il; // enum sehirler; int,char,float gibi bir de�i�ken tipi olarak kullan�ld�.
	
	il=ankara; // Ankaran�n enum i�erisindeki yerine g�re say�sal de�erini verecektir.
	printf("%d",il+1); // il de�i�kenine 1 eklememizin sebebi plakalar� 0 yerine 1 den ba�latmas� gerekti�i i�indir.
	
	return 0;
}
