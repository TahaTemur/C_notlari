#include <stdio.h>
#include <stdlib.h>

struct kitapbilgi
{
	char kitapad[20];
	char yazar[20];
	int fiyat;
	float puan;
};

/* struct
Baz� programlarda bir ��eye ait bir ka� farkl� �zellik i�in farkl� tiplerde de�i�kenler kullanmam�z gerekir. 
�rne�in bir kitab�n bilgilerini tutmak istersek de�i�ik tiplerde de�i�kenler kullanmam�z gerekir. 
Bu tip durumlar i�in C de struct kullan�l�r. struct i�erisinde istenilen tipte de�i�ken tan�mlanabilir. 
Bunu i�indeki verileri bir arada tutan bir veri paketi olarak d���nebilirsiniz. */

int main(int argc, char *argv[]) {
	
	struct kitapbilgi kb={"Sekerportakali","Vasconseulos",10,7.25}; 
	
	// Kullan�c�dan veri alarak yapmad���m�z i�in bilgileri {} i�ine tek tek girdik. Yukar�daki struct kitapbilgi bir de�i�ken tipi gibi kullan�ld�.
	
	printf("Kitap Ad: %s\n",kb.kitapad); 
	printf("Yazar: %s\n",kb.yazar);
	printf("Fiyat: %d\n",kb.fiyat);
	printf("Kitabin Puani: %.2f",kb.puan); // Virg�lden sonra anade�i�ken.bilgide�i�keni �eklinde kullan�m yap�lm��.
	
	
	
	
// A�a��da hemen hemen ayn� olay� anlatt�m. Aradaki fark kitab�n bilgilerinin kullan�c�dan veri al�narak girilmesidir.
	
 /* struct kitapbilgi
{
	char kitapad[20];
	char yazar[20];
	int fiyat;
	float puan;
};

int main(int argc, char *argv[]) {
	
	struct kitapbilgi kb;
	
	printf("Kitap Adi: ");
	scanf("%s",&kb.kitapad);
	
	printf("Yazar adi: ");
	scanf("%s",&kb.yazar);
	
	printf("Fiyat: ");
	scanf("%d",&kb.fiyat);
	
	printf("Kitap Puani: ");
	scanf("%f",&kb.puan);
	
	printf("Kitap Ad: %s\n",kb.kitapad);
	printf("Yazar: %s\n",kb.yazar);
	printf("Fiyat: %d\n",kb.fiyat);
	printf("Kitabin Puani: %.2f",kb.puan); */
	
	
	return 0;
}
