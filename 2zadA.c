// uloha2-1.c -- Juraj Rak, 23.9.2018 20:41

#include <stdio.h>

// urci sucet k najvacsich cisel z cisel cena[0],...,cena[n-1]
long sucet_k_najvacsich(int cena[], int n, int k)
{
	// ...
}

int main(void)
{
  // tu si mozete nieco testovat
  int i, *x, n, k;

  scanf("%d %d", &n, &k);
  x = (int*)malloc(n * sizeof(int));
  for (i = 0; i < n; i++)
    scanf("%d", &x[i]);

  printf("%ld\n", sucet_k_najvacsich(x, n, k));
  return 0;
}
