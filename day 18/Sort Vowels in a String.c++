class Solution {
public:
    static bool comparator(char a,char b){
        int x=a;
        int y=b;
        return x<y;
    }
    string sortVowels(string s) {
        vector<char>v;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                v.push_back(s[i]);
            }
        }
    
        sort(v.begin(),v.end(),comparator);
        int j=0;
        for(int i=0;i<s.size();i++){
             if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                s[i]=v[j];
                 j++;
            }
        }
        
        return s;
        
    }
};