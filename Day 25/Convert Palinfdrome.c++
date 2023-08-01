#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'ConvertPalindrome' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING str1 as parameter.
 */
bool isPalin(string &s)
{
    int low=0,high=s.size()-1;
    while(low<high)
    {
        if(s[low++]!=s[high--])return false;
    }
    return true;
    
}
string ConvertPalindrome(string str1) {
    int n=str1.size(),val=str1.size();
    for(int i=0;i<n;i++)
    {
        string t=str1.substr(i,n-i);
        if(isPalin(t)){
            val=i;
            break;
        }     
    }
    string ans="NULL";
    if(val!=0){
            ans=str1.substr(0,val);
            reverse(ans.begin(),ans.end());

        }       
            return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string str1;
    getline(cin, str1);

    string result = ConvertPalindrome(str1);

    fout << result << "\n";

    fout.close();

    return 0;
}