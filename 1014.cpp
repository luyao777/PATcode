#include <iostream>
#include <string.h>
using namespace std;
int miin(int a, int b){
  if (a<b) return a;
  else return b;
}
int main(int argc, char const *argv[]) {
//  char *a,*b,*c,*d;
  string a,b,c,d;
  int i,j;
  int day,hour,min;
 cin >> a;
 cin >> b;
 cin >> c;
 cin >> d;

//  day
  for(i = 0;i < miin(a.length(),b.length());i++){
    if(a[i] == b[i])
      if(int(a[i]) > 64 && int(a[i]) < 72){
        day = int(a[i]) - 64;
        j = i;
        break;
      }
    }

    // hour
    for(i = j+1;i < miin(a.length(),b.length());i++){
      if(a[i] == b[i])
        if(int(a[i]) > 64 && int(a[i]) < 79){
          hour = int(a[i]) - 55;
          break;
        }
        else if(int(a[i]) > 47 && int(a[i]) < 58){
          hour = int(a[i]) - 48;
          break;
        }
      }

// min
for(i = 0;i < miin(c.length(),d.length());i++)
  if(c[i] == d[i]) {
    if((64 < int(c[i]) && int(c[i]) < 91) ||(96 < int(c[i]) && int(c[i]) < 123) ){
    min = i;
    break;
    }
  }

//output
switch (day) {
  case 1: cout << "MON "; break;
  case 2: cout << "TUE "; break;
  case 3: cout << "WED "; break;
  case 4: cout << "THU "; break;
  case 5: cout << "FRI "; break;
  case 6: cout << "SAT "; break;
  case 7: cout << "SUN "; break;
}
if(hour < 10) cout << '0' << hour;
else cout << hour;

cout << ':';

if(min < 10) cout << '0' << min;
else cout << min;




  return 0;
}
