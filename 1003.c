#include <stdio.h>
#include <string.h>
int findch(char * s, char r){
  int len;
  len = strlen(s);
  for (int i = 0; i < len; i++)   if (s[i] == r) return i;
  return -1;
}
int allA(char * s,int a, int b){
  for (int i = a+1; i < b; i++ )  if (s[i] != 'A') return 0;
  return 1;
}
char * easy(char *s){
  int i,j;
  int posP,posT;
  int len = strlen(s);
  posP = findch(s,'P');
  posT = findch(s,'T');
  char a[posT] ,b[len - posT - posP + 1];
  for (i = 0; i < posT - 1; i++) a[i] = s[i]; a[i] = '\0';printf("%s\n",a );
  for (j = 0; j < len - posT - posP; j++) b[j] = s[j+posT]; b[j] = '\0';printf("%s\n",b);
  strcat(a,b);
  printf("%s\n",a );
  return a;
 }

int main(int argc, char const *argv[]) {
  int n,flag = 1;
  int posP,posT;
  int len;
  char *ch;

  scanf("%d\n",&n);

  for(int i = 0; i < n; i ++) {
    scanf("%s",ch);   //test
    len = strlen(ch);
    for (int j = 0; j < len ; j++)
      if (ch[j] != 'A' && ch[j] != 'P' && ch[j] != 'T') {
        printf("NO\n");
        flag = 0;
        break;
      }
    while (flag == 1) {
      posP = findch(ch,'P');
      posT = findch(ch,'T');
      if(posP == -1 || posT == -1) {
        printf("NO\n");
        break;
      }
      else  if (allA(ch,posP,posT) && allA(ch,0,posP) && allA(ch,posT,len) ){
        if(posT - posP == 2){
          printf("OK\n");
          break;
        }
        else if (len - posT < posP + 1) {
          printf("NO\n");
          break;
        }
        else ch = easy(ch);
        printf("%s\n",ch);
        continue;
      }
      else{
        printf("NO\n");
        break;
      }
    }
    flag = 1;
    }
  return 0;
  }
