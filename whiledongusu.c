#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a=20;
	
	while(a<=100)
	{
		if(a%3==0 && a%2!=0)
		{
			printf("%d\n",a);
		}
			a++;
	}
	
	/* WHILE D�NG�S�
	while i�erisindeki �art sa�land�k�a d�ng� devam eder. D�ng�n�n ne zaman ba�layaca�� while dan �nce belirtilir.
	Artt�rma i�lemi de d�ng�n�n i�erisindeki sat�rlara yaz�l�r. Bu kodda 20 den 100 e kadarki t�m 3 e tam b�l�nen ve 2 ye tam b�l�nmeyen say�lar terminale yazd�r�l�r. */
	
	return 0;
}
