#include<bist/stdc++.h>
using namespace std;
int firstElementKTime(int n, int k, int a[])
    {
        vector<int>vec;
        vec.resize(200);
        fill(vec.begin(),vec.end(),0);
        for(int i{0};i<n;i++){
            vec[a[i]]++;
            if(vec[a[i]]==k){
                return a[i];
            }
        }
        return -1;
    }
int main(){
  return 0;
}
