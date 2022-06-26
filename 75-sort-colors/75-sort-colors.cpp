class Solution {
public:
    void sortColors(vector<int>& a) {
        int zero=0,n=a.size();
  int one=0,two=n-1;
  while(one<=two){
    if(a[one]==0){
      int temp=a[zero];
      a[zero]=a[one];
      a[one]=temp;
      zero++;
      one++;
    }
    else if(a[one]==1)
      one++;
    else{
      int temp=a[one];
      a[one]=a[two];
      a[two]=temp;
      two--;
    }
  }
    }
};