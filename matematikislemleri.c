#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Math.h k�t�phanemizi ekleyelim. Yoksa kod �al��sa bile altta uyar� verecektir.

int main(int argc, char *argv[]) {
	
	
	int a;
	double kok;
	
	printf("Sayiyi giriniz: ");
	scanf("%d",&a);
	
	kok = sqrt(a);
	printf("Sonuc: %.6lf\n",kok);
	
	
	// Karek�k alma i�lemini C dilinde bu �ekilde yapar�z.
	
	
	float b,c,us;
	
	printf("Taban: ");
	scanf("%f",&b);
	
	printf("Us: ");
	scanf("%f",&c);
	
	us = pow(b,c);
	printf("Sonuc: %.6f\n",us);
	
	
	// �s alma i�lemini C dilinde bu �ekilde yapar�z.
	
	
	double d,ust,alt;
	
	printf("Degeri girin: ");
	scanf("%lf",&d);
	
	alt = floor(d);
	printf("Alt Sonuc: %lf\n",alt);
	
	ust = ceil(d);
	printf("Ust Sonuc: %lf\n",ust);
	
	
	// Girilen tam olmayan bir say�n�n alt ve �st�ndeki tam say�y� ��renebilmek i�in bu kod gereklidir.
	
	
	double e,mutlak;
	
	printf("Sayiyi girin: ");
	scanf("%lf",&e);
	
	mutlak = fabs(e);
	printf("Sonuc: %.lf\n",mutlak);
	
	
	// Mutlak de�er bulma i�lemini C dilinde bu �ekilde yapar�z.
	
	
	double f,logaritma,logaritma2;
	
	printf("Sayiyi girin: ");
	scanf("%lf",&f);
	
	logaritma = log10(f);
	printf("Sonuc: %.8lf\n",logaritma);
	
	logaritma2 = log(f);
	printf("Sonuc: %.8lf\n",logaritma2);
	
	
	// Onluk tabanda ya da d�z logaritma i�lemini C dilinde bu �ekilde yapar�z.
	
	
	double g,sonucsin,sonuccos;
	
	printf("Dereceyi girin: ");
	scanf("%lf",&g);
	
	sonucsin= sin(g);
	printf("sin%.lf: %lf\n",d,sonucsin);
	
	sonuccos= cos(g);
	printf("cos%.lf: %lf",d,sonuccos);
	
	// A��n�n sinus ve cosinus de�erini ��renmek i�in C dilinde b�yle bir kullan�m yapar�z.
	
	return 0;
}
