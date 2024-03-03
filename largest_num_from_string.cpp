#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
   static bool comp(string a, string b) {
       return a + b > b + a;
   }

   string printLargest(int n, vector<int>& arr) {
       vector<string> strArr;
       for (int num : arr) {
           strArr.push_back(to_string(num));
       }

       sort(strArr.begin(), strArr.end(), comp);

       string largestNumber = "";
       for (string str : strArr) {
           largestNumber += str;
       }

       return largestNumber;
   }
};

int main() {
   int n;
   cin >> n;

   vector<int> arr(n);
   for (int i = 0; i < n; ++i) {
       cin >> arr[i];
   }

   Solution solution;
   string largestNumber = solution.printLargest(n, arr);

   cout << largestNumber << endl;

   return 0;
}
