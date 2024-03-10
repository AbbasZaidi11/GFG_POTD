#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string str) {
	    // code here
	    unordered_map<char,int>mpp;
	    int n=str.size();
	    string ans="";
	    for(int i{0};i<n;i++){
	        mpp[str[i]]++;
	        if(mpp[str[i]]==1){
	            ans.push_back(str[i]);
	        }
	    }
	    return ans;
	}
int main(){
  return 0;}
