#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int dizi[100],i,eleman;
	float top=0,ort;
	
	printf("Dizi kac elemanli olacak: ");
	scanf("%d",&eleman);
	
	for(i=0;i<eleman;i++)
	{
		printf("Dizinin %d. degerini girin: ",i+1);
		scanf("%d",&dizi[i]);
		top += dizi[i];
		ort=top/eleman;
	}
	
	for(i=0;i<eleman;i++)
	{
		printf("%d. Eleman: %d\n",i+1,dizi[i]);
	}
	
		printf("Toplam: %f - Girilen Degerlerin Ortalamasi : %f ",top,ort);
	
	// Elemanlar� girilen say� dizisinin; teker teker t�m elemanlar�n�, elemanlar� toplam�n� ve ortalamas�n� veren C kodunu yazd�m.
	
	return 0;
}
