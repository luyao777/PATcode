#include <iostream>
using namespace std;
struct stu{
  int num;
  int de;
  int cai;
  int sum;
  bool lflag; // 是否及格
  bool hflag; // 是否优秀
  bool dhflag;  //是否德胜才 德优
  bool dlflag;//是否 德胜才  德及格
}a[100000],k1[100000],k2[100000],k3[100000],k4[100000];
int N,L,H;
int i,sum = 0;
int i1,i2,i3,i4;

//读取元素并且给各个标志位赋值



//各项德才指标相同下的比较
bool maxsum(stu a,stu b){
  if(a.sum > b.sum) return true;
  else if (a.sum < b.sum) return false;
  else {
    if(a.de > b.de) return true;
    else if (a.de < b.de) return false;
    else{
      if(a.num < b.num) return true;  //升序输出
      else return false;
    }
  }
}

//比较函数，选出指标最优的数据
bool operator > (stu a,stu b){
  if(a.hflag > b.hflag) return true;
  else if(a.hflag < b.hflag) return false;
  else if (a.hflag == 1) return maxsum(a,b);
  else{
    if(a.dhflag > b.dhflag) return true;
    else if(a.dhflag < b.dhflag) return false;
    else if (a.dhflag == 1) return maxsum(a,b);
    else{
      if(a.dlflag > b.dlflag) return true;
      else if(a.dlflag < b.dlflag) return false;
      else return maxsum(a,b);
    }
  }
}

//符号需要修改,快速排序
int partition(stu arr[], int low, int high){
    stu key;
    key = arr[low];
    while(low<high){
        while(low <high && key >arr[high] )
            high--;
        if(low<high)
            arr[low++] = arr[high];
        while( low<high &&  arr[low] > key )
            low++;
        if(low<high)
            arr[high--] = arr[low];
    }
    arr[low] = key;
    return low;
}

void quick_sort(stu arr[], int start, int end){
    int pos;
    if (start<end){
        pos = partition(arr, start, end);
        quick_sort(arr,start,pos-1);
        quick_sort(arr,pos+1,end);
    }
    return;
}


void readdata(void){
  int i;
  for(i = 0; i < N; i++) {
    cin >> a[i].num >> a[i].de >> a[i].cai;
    if(a[i].de < L || a[i].cai < L) {
      a[i].lflag = 0;
      continue;
    }
    else {
      sum++;
      a[i].sum = a[i].de + a[i].cai;
      a[i].lflag = 1;

      if(a[i].de >= H && a[i].cai >= H) { a[i].hflag = 1; k1[i1] =a[i]; i1++;quick_sort(k1,0,i1-1); continue;}
      else a[i].hflag = 0;

      if(a[i].de >= H) { a[i].dhflag = 1; k2[i2] = a[i]; i2++;quick_sort(k2,0,i2-1);continue; }
      else a[i].dhflag = 0;

      if(a[i].de > a[i].cai) { a[i].dlflag = 1; k3[i3] = a[i]; i3++; quick_sort(k3,0,i3-1); continue;}
      else { a[i].dlflag = 0; k4[i4] = a[i] ; i4++;quick_sort(k4,0,i4-1);}
    }
  }
}

int main(int argc, char const *argv[]) {
  i1 = i2 = i3 = i4 = 0;
  cin >> N >> L >> H;
  readdata();
// 输出总数
  cout << sum << endl;
//排序




  for(i = 0;i < i1 ;i++)   cout << k1[i].num <<' '<< k1[i].de << ' ' << k1[i].cai << endl;

    for(i = 0;i < i2 ;i++)   cout << k2[i].num <<' '<< k2[i].de << ' ' << k2[i].cai << endl;

      for(i = 0;i < i3 ;i++)   cout << k3[i].num <<' '<< k3[i].de << ' ' << k3[i].cai << endl;

        for(i = 0;i < i4 ;i++)   cout << k4[i].num <<' '<< k4[i].de << ' ' << k4[i].cai << endl;



  return 0;
}
