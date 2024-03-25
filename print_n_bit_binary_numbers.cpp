#include <bits/stdc++.h>
using namespace std;
void recur(vector<string>&ans,string &temp,int index,int one,int zero,int n){
    if(zero>one){
        return ;
    }
    if(index==0){
        if(one>=zero){
            ans.push_back(temp);
        }
        return ;
    }
    temp.push_back('1');
    recur(ans,temp,index-1,one+1,zero,n);
    temp.pop_back();
    temp.push_back('0');
    recur(ans,temp,index-1,one,zero+1,n);
    temp.pop_back();
}
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string>ans;
	    string temp="";
	    int index=n;
	    int one=0;
	    int zero=0;
	    
	    recur(ans,temp,index,one,zero,n);
	    sort(ans.rbegin(),ans.rend());
	    return ans;
	}

int main(){
  return 0;
}
