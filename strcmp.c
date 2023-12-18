#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcmp fonksiyonu kullan�laca�� i�in string.h k�t�phanesi gerekti.

int main(int argc, char *argv[]) {
	
	char a[20],b[20];
	
	printf("Birinci kelimeyi giriniz: ");
	scanf("%s",a);
	
	printf("Ikinci kelimeyi giriniz: ");
	scanf("%s",b);
	
	if(strcmp(a,b)==0)
	{
		printf("AYNI");
	}
	else
	{
		printf("FARKLI");
	}
	
/* strcmp iki ifadeyi kar��la�t�rmak i�in kullan�l�r. strcmp(ifade1,ifade2) �eklinde kullan�lmas� gerekir.
   strcmp(ifade1,ifade2) == 0 demek iki ifade aras�nda fark yok demektir. != 0 olursa fark oldu�u anlam�na gelir.
   strcmp fonksiyonu kullan�ld�ktan sonra ortaya ��kan sonucun say�sal hali; ifadeler aras� fark varsa 0 dan farkl�, fark yoksa 0 a e�ittir.
   NOT = B�y�k k���k karakter farkeder ��nk� ASCII tablosunda b�y�k ve k���k karakterlerin int kar��l��� farkl�d�r. 
   �rne�in a = 97 A = 65 */
   
	return 0;
}
