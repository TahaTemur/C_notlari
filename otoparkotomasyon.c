#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	printf("*******OTOPARK FIYAT OTOMASYONU*******\n\n");
	
	printf(" DEGERLI KASIYERIMIZ LUTFEN SUNLARI UNUTMAYINIZ: a=kalinan sure, b=otopark saat fiyati , c=indirim miktari , d=toplam tutar \n\n");
	
	int a,b,c,d;
	printf("Araba kac saat kaldi: ");
	scanf("%d",&a);
	b=a*10;
	
	if(a>=1 && a<4)
	{
		c=b*10/100;
		d=b-c;
		printf("Odemeniz Gereken Tutar: %d TL",d);
	}
	if(a>=4)
	{
	    c=b*20/100;
		d=b-c;
		printf("Odemeniz Gereken Tutar: %d TL",d);
	}
	
	// Bir aracın otoparkta durduğu süreye göre farklı tarife uygulanıp, net fiyata işlenecek bir kod yazılması istenmiş.
	
	return 0;
}
