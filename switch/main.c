#include <stdio.h>

int main(void) 
{   int x;
    printf("Dieses Programm liest eine Note als Ziffer ein und gibt diese als Text aus\n\n");
    printf("Geben Sie bitte die Note als Ziffer (1-5) ein: ");
    scanf("%d",&x);
    switch(x){
      case 1:{
        printf("SEHR GUT\n");
        break;
      } 
      case 2:{
        printf("GUT\n");
        break;
      }
      case 3:{
        printf("BEFRIEDIGEND\n");
        break;
      }
      case 4:{
        printf("GENÜGEND\n");
        break;
      }
      case 5:{
        printf("NICHT GENÜGEND\n");
        break;
      }
      default:{
        printf("Die eingegebene Note liegt nicht im Bereich von 1 bis 5\n");
        break;
      }
      
    }
  return 0;
}