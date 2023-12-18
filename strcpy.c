#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcpy ve strncpy fonksiyonlar�n�n devreye girmesi i�in string.h k�t�phanesini kulland�k.

int main(int argc, char *argv[]) {
	
	char kaynak[30]="Merhaba Balikesir";
	char kopya[30]="";
	
	strcpy(kopya,kaynak); // strcpy(hedef de�i�ken,ana de�i�ken) �eklindedir.
	printf("%s\n",kopya);
	
	/* Bir de�i�kende tan�ml� ifadeyi hedef de�i�kenin �st�ne yazmak i�in strcpy fonksiyonunu kullan�r�z.
	Hedef de�i�kenin i�erisinde ne yazarsa yazs�n ana de�i�kenin i�indeki ifadenin tamam� hedef de�i�kenin i�ine yaz�l�r.
	Bu �rnekte ana de�i�ken kaynak, hedef de�i�ken kopyad�r. */
	
	char nereden[30]="Merhaba Balikesir";
	char nereye[30]="";
	
	strncpy(nereye,nereden,10); // strcpy(hedef de�i�ken,ana de�i�ken,aktar�lacak karakter say�s�) �eklindedir.
	printf("%s",nereye);
	
	/* strcpy fonksiyonundan fark� ana de�i�ken i�indeki ifadenin sadece belli k�sm�ndaki karakterleri hedef de�i�kenin i�ine yazmas�d�r.
	Bu say� da kullan�c�dan al�n�r. �rnekte n say�daki karakter 10 olarak belirtilmi�tir.
	nereden de�i�kenindeki ifadenin ilk 10 karakteri nereye de�i�kenine atan�r. */
	
	return 0;
}
