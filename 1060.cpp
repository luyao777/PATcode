#include <iostream>
using namespace std;
int miin(int a,int b){
  if(a<b) return a;
  else return b;
}
int partition(int shu[],int left,int right){
  int low,high,pivot,t;
  pivot = shu[left];
  low = left-1;
  high = right+1;
  while(low+1!=high){
    if (shu[low+1] >= pivot) low++;
    else if(shu[high - 1] < pivot) high--;
    else{
      t=shu[low+1];
      shu[++low] = shu[high-1];
      shu[--high] = t;
    }
  }
  shu[left] = shu[low];
  shu[low] = pivot;
  return low;
}


void quicksort(int shu[],int left,int right){
  int dp;
  if(left < right){
  dp = partition(shu,left,right);
  quicksort(shu,left,dp-1);
  quicksort(shu,dp+1,right);
  }
}


int main(int argc, char const *argv[]) {
  int n,i,max;
  int a[100000];
  max = 0;
  cin >> n;
  for(i=0;i<n;i++) cin >> a[i];
  quicksort(a,0,n-1);
  for(i=0;i<n;i++) if(a[i] > max && a[i] > i+1) max=i+1;
  cout << max;

  return 0;
}
