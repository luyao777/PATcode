#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  int sch[100001]={0};  //     有毒，，，，100000就挂了  posion...100000 is denied.
  int school,score;
  cin >> n;
  for(int i = 1 ; i < n+1; i++){
    cin >> school >> score;
    sch[school] = sch[school] + score;
  }
  school = score = 0;
  for(int i = 1 ; i < n+1; i++)
    if (sch[i] > score){
    school = i;
    score = sch[i];
    }
  cout << school << ' ' << score;
  return 0;
}
