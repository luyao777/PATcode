#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n,k;
  char c;
  scanf("%d %c",&n,&c);
  if(n % 2 == 1) k = n / 2 + 1;
  else k = n / 2;
  for (int i = 0 ; i < n ; i++) printf("%c",c);
  printf("\n");
  for (int i = 0 ; i < k-2 ; i++) {
  printf("%c",c);
  for (int i = 0 ; i < n-2 ; i++) printf(" ");
  printf("%c\n",c);
  }
  for (int i = 0 ; i < n ; i++) printf("%c",c);  
  return 0;
}
