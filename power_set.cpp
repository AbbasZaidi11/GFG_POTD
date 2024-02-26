class Solution{
	public:
	void recur(vector<string>&ans,int i,int n,string &temp,string s){
	    if(i>=n){
	        if(temp!=""){
	            ans.push_back(temp);
	        }
	        return ;
	    }
	    temp.push_back(s[i]);
	    recur(ans,i+1,n,temp,s);
	    temp.pop_back();
	    recur(ans,i+1,n,temp,s);
	}
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans;
		    string temp="";
		    int n=s.size();
		    recur(ans,0,n,temp,s);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
		
};
