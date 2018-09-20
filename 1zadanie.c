// uloha1-1.c -- Juraj Rak, 20.9.2018 10:11
#include <stdio.h>

int main(void)
{
  // sem napis svoje riesenie
  int pocetdni  = 0, i,last , actual,zisk_final;
  scanf("%d", &pocetdni);
  scanf("%d", &last);
  for(i = 0; i<pocetdni; i++){
    scanf("%d", &actual);
	int zisk = last - actual;
	if(zisk>0 && zisk>zisk_final){
		zisk_final= zisk;
	}
	last = actual;
  }
  printf("%d", zisk_final);

  
  return 0;
	}
