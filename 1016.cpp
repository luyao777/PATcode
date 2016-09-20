#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[]) {
  char a[10],b[10];
  char da,db;
  char *A,*B;
  int pa = 0;
  int pb = 0;
  cin >> a >> da >> b >> db;
  for(int i = 0; i < strlen(a); i++)
  if(a[i] == da)  pa = int(da) - 48 + 10*pa;
  for(int i = 0; i < strlen(b); i++)
  if(b[i] == db)  pb = int(db) - 48 + 10*pb;


  cout << pa+pb;
  return 0;
}
