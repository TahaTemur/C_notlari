#include <stdio.h>
#include <stdlib.h>

/* C dilinde renklendirme 
system("COLOR X") yaparak terminalde kodumuzun ��kt�s�n� renklendirebiliriz.
(X yerine hangi say� ya da harf gelmeli a�a��daki listede belirtilmi�tir.) */

int main(int argc, char *argv[]) {
	
	printf("C DILINI OGRENDIM.");
	system("COLOR 2");  // COLOR 2 yaz�ld��� i�in kodumuzun ��kt�s� terminalde ye�il olacakt�r.
	
	/* 
	0=black
	1=blue
	2=green
	3=aqua
	4=red
	5=purple
	6=yellow
	7=white
	8=gray
	9=light blue
	A=light green
	B=light aqua
	C=light red
	D=light purple
	E=light yellow
	F=bright white */

	return 0;
}
