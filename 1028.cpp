#include <iostream>
#include <stdio.h>
using namespace std;
class people{
public:
  char * name;
  int year;
  int mon;
  int day;
  bool flag;

};

int main(int argc, char const *argv[]) {
  int n;
  int i;
  char ch;
  int sum = 0;
  people peo,max,min;

  max.year = 0;
  max.mon = 0;
  max.day = 0;

  max.year = 9999;
  max.mon = 99;
  max.day = 99;
  cin >> n;
  for(i = 0; i< n;i++){
    cin >> peo.name;
    scanf("%d/%d/%d",&peo.year,&peo.mon,&peo.day);
    if(peo.year > 2014 ) continue;
    else if(peo.year == 2014 && peo.mon > 9) continue;
    else if(peo.year == 2014 && peo.mon == 9 && peo.day > 6) continue;
    else if(2014 - peo.year >= 200) continue;
    sum++;

    if(peo.year > max.year) max = peo;
    else if(peo.year == max.year && peo.mon > max.mon) max = peo;
    else if(peo.year == max.year && peo.mon == max.year && peo.day > max.day) max = peo;

    if(peo.year < min.year) min = peo;
    else if(peo.year == min.year && peo.mon < min.mon) min = peo;
    else if(peo.year == min.year && peo.mon == min.year && peo.day < min.day) min = peo;

    cout << "max : "<<max.name << ' ' <<max.year<<' '<< max.mon <<  ' ' << max.day << endl;
    cout << "min : "<<min.name << ' ' <<min.year<<' '<< min.mon <<  ' ' << min.day << endl;
  }

  cout << sum <<' '<<max.name << ' ' << min.name;
  return 0;
}
