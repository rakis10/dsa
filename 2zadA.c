// uloha2-1.c -- Juraj Rak, 23.9.2018 20:41

#include <stdio.h>
#include <stdlib.h>
// urci sucet k najvacsich cisel z cisel cena[0],...,cena[n-1]


long sucet_k_najvacsich(int cena[], int n, int k)
{
	// ...
	int temp,a,b, sum =0;
	long fin = 0;
	for (a = 0; a < (n); a++){
		
		for(b = 0 ; b <	(n - 1 - a); b++){
			if(cena[b]>cena[b+1]){
			
			temp = cena[b+1];
			cena[b+1] = cena[b];
			cena[b] = temp;
			}
			}
		
	}
	for (a=0;a<n-1;a++){
			printf(".%d ", cena[a]);
	}
		
		
		
		for(b = 0 ; b<k; b++ ){
			temp += cena[0];
		}
		return temp ;
}
	


int main(void)
{
  // tu si mozete nieco testovat
  int i, *x, n, k;
  //scanf("%d %d", &n, &k);
  n= 4;
  k = 2;
	x = (int*)malloc(n * sizeof(int));
  for (i = 0; i < n; i++)
    //scanf("%d", &x[i]);
		x[i] = ( 6 - i) * 2; // 12 10 8 
  printf("%ld\n", sucet_k_najvacsich(x, n, k));
  return 0;
}
