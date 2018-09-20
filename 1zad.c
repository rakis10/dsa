

// uloha1-1.c -- Juraj Rak, 20.9.2018 10:11
#include <stdio.h>

int main(void)
{
  // sem napis svoje riesenie
  int pocetdni  = 0, i,last ,ii, actual,zisk_final = 0, pp;
  scanf("%d", &pp);
  for (ii=0; ii<pp; ii++){
scanf("%d", &pocetdni);


        
        scanf("%d", &last );
        for(i = 0; i<pocetdni - 1; i++){
          
              
            scanf( "%d", &actual);
            
        	int zisk = actual - last;
        	if(zisk>0){
        		zisk_final+= zisk;
        	}
        	last = actual;
          
              
              
        
      }
        printf("%d\n", zisk_final);
        zisk_final = 0;
  }


