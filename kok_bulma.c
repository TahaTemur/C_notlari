#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Matematikle alakal� baz� i�lerde math.h k�t�phanesini kullan�r�z.
   stdio.h main fonksiyonunda temel i�lemlerin b�y�k k�sm�n� i�inde bar�nd�ran bir k�t�phanedir. C nin temel k�t�phanesi olarak bilinir.
   stdlib.h ise dinamik bellek y�netimi, rastgele say� �retimi, arama, s�ralama ve d�n��t�rme gibi �e�itli genel ama�lar i�in kullan�l�r.
   DevC++ ta stdio.h ve stdlib.h her yeni program a��ld���nda otomatik gelir. */
   
int main(int argc, char *argv[]) {

	int a,b,c;
	float x1,x2;
	float delta;
	
	printf("Denklemin a'si: ");
	scanf("%d",&a);
	
	printf("Denklemin b'si: ");
	scanf("%d",&b);
	
	printf("Denklemin c'si: ");
	scanf("%d",&c);
	
	delta= b*b - 4*a*c;
	x1= (-b + (sqrt(delta)) ) /2*a;
	x2= (-b - (sqrt(delta)) ) /2*a;
	
	printf("Denklemin kokleri: %f ve %f",x1,x2);
	
	/* C dilinde k�k alma i�lemi sqrt ile yap�l�r. sqrt math.h k�t�phanesi gerektirir. Ayriyeten �s alma i�lemi pow ile yap�l�r.
	Yukar�da 2. dereceden 1 bilinmeyenli herhangi bir denklemin k�kleri C dilinde nas�l bulunur onun �rne�ini verdim. */
	
	return 0;
}
