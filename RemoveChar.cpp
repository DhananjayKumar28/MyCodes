// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        int len1=string1.size();
        int len2=string2.size();
        for(int i=0;i<len2;i++){
            for(int j=0;j<len1;j++){
                if(string2[i]==string1[j]){
                    remove(&string1[j],&string1[len1],string2[j]);
                }
            }
        }
        return string1;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}
  // } Driver Code Ends