#include<stdio.h>
int main(int argc, char const *argv[]) {
  char * shu[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  int k[100] = {0};
  char a;
  int n = 0;
  int i = 99,j;
  while(    (a = getchar()) != '\n'){
  switch (a) {
    case '0': n = n + 0; break;
    case '1': n = n + 1; break;
    case '2': n = n + 2; break;
    case '3': n = n + 3; break;
    case '4': n = n + 4; break;
    case '5': n = n + 5; break;
    case '6': n = n + 6; break;
    case '7': n = n + 7; break;
    case '8': n = n + 8; break;
    case '9': n = n + 9; break;
    default : ;
  }
}
  do{
    switch (n % 10) {
      case 0: k[i] = 0; break;
      case 1: k[i] = 1; break;
      case 2: k[i] = 2; break;
      case 3: k[i] = 3; break;
      case 4: k[i] = 4; break;
      case 5: k[i] = 5; break;
      case 6: k[i] = 6; break;
      case 7: k[i] = 7; break;
      case 8: k[i] = 8; break;
      case 9: k[i] = 9; break;
      default : k[i] = 0; break;
    }
    n = n / 10;
    i--;
  } while (n != 0);

  for (j = 0; j < 100 ; j++ ) if (k[j] != 0) break;
  for (j ; j < 100 ; j++)
  {
    switch (k[j]) {
      case 0 : printf("%s",shu[0] ); break;
      case 1 : printf("%s",shu[1] ); break;
      case 2 : printf("%s",shu[2] ); break;
      case 3 : printf("%s",shu[3] ); break;
      case 5 : printf("%s",shu[5] ); break;
      case 4 : printf("%s",shu[4] ); break;
      case 6 : printf("%s",shu[6] ); break;
      case 7 : printf("%s",shu[7] ); break;
      case 8 : printf("%s",shu[8] ); break;
      case 9 : printf("%s",shu[9] ); break;
      default : ;
    }
    if (j != 99 ) printf(" ");
  }



  return 0;
}
