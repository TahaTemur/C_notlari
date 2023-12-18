#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	
	/* POINTERS (��ARET��LER)
	��aret�iler, baz� i�leri �ok daha y�ksek performansla yapmam�za yard�mc� olur; hatta dinamik bellek ayr�m� gibi i�lemleri i�aret�iler olmadan yapamay�z. 
	Bellek y�netimimizi daha iyi yapabilmek, dolay�s�yla kodumuzun performans�n� artt�rabilmemiz i�in i�aret�ileri ��renmemiz �artt�r.
	Her de�i�ken bellekte bir yer kaplar. Bu de�i�kenlerin belle�in neresinde oldu�unu adresler ile tutar�z. Bir de�i�kenin tutuldu�u adrese de�i�kenimizin ba��na & koyarak ula�abiliriz. */
	
	int a=5;
	int b=8;
	int c=9;
	char arti='a';
	double d=18.25;
	
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%c\n",arti);
	printf("%f\n",d);
	
	printf("\n\n Bellek Adresleri \n\n");
	
	printf("%x\n",&a);
	printf("%x\n",&b);
	printf("%x\n",&c);
	printf("%x\n",&arti);
	printf("%x",&d);
	
	int e=5; 
	
	/* Di�er b�t�n de�i�kenler gibi i�aret�ileri de kullanmadan �nce i�aret�imizi tan�mlamal�y�z. Aradaki * bu de�i�kenin bir i�aret�i olaca��n� belirtiyor olacak.
	Ba�a yazd���m�z veri tipi ne olursa olsun, i�aret�inin tuttu�u bilgi ayn�d�r: bir bellek adresini temsil eden uzun bir onalt�l�k (hexadecimal) say�. 
	Farkl� veri tiplerinin i�aret�ileri aras�ndaki tek fark, i�aret�inin i�aret etti�i de�i�ken veya sabitin veri t�r�d�r. */
	
	int *s=&d;
	
	// Her de�i�ken bellekte bir yer kaplar, bu de�i�kenlerin belle�in neresinde tutuldu�unu adresler ile tutar�z. De�i�kenin tutuldu�u adrese de�i�kenimizin ba��na & koyarak ula�abiliriz.
	
	printf("Deger: %d\n",e);
	printf("Adres: %x\n",s);
	
	char harf='b';
	char *bc=&harf;
	
	printf("Deger: %c\n",harf);
	printf("Adres: %x",bc-=2);
	
	return 0;
}
