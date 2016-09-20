#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  char a,b;
  cin >> n;
  int ya,yb,sa,sb,p;
  int aa[3]={0};
  int bb[3]={0};
  ya = yb = sa = sb = p = 0;
  for(int i = 0; i < n; i++){
    cin >> a >> b;

// fair condition
    if(a == 'B' && a == b)    p++;
    else if(a == 'C' && a == b)   p++;
    else if(a == 'J' && a == b)  p++;


    else if(a =='C' && b=='J') {
      ya++;sb++;
      aa[1]++;
    }
    else if (a == 'B' && b == 'C') {
      ya++;sb++;
      aa[0]++;
    }
    else if (a == 'J' && b == 'B') {
      ya++;sb++;
      aa[2]++;
    }


    else if(b=='C' && a=='J') {
          yb++;sa++;
          bb[1]++;
        }
    else if (b == 'B' && a == 'C') {
          yb++;sa++;
          bb[0]++;
        }
    else if (b == 'J' && a == 'B') {
          yb++;sa++;
          bb[2]++;
        }
      }
  cout << ya << ' ' << p << ' ' << sa << endl;
  cout << yb << ' ' << p << ' ' << sb << endl;


  if(aa[0] >= aa[1] && aa[0] >=aa[2]) cout <<"B ";
  else if (aa[1] >= aa[2]) cout << "C ";
  else cout << "J ";
  if(bb[0] >= bb[1] && bb[0] >=bb[2]) cout <<"B";
  else if (bb[1] >= bb[2]) cout << "C";
  else cout << "J";
  return 0;
}
