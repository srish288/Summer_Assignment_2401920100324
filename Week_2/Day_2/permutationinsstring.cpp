class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        unordered_map<char,int> f1;
        unordered_map<char,int>f2;
        for(int i=0;i<s1.length();i++){
            f1[s1[i]]++;
            f2[s2[i]]++;
        }
        if(f1==f2) return true;
        int left = 0; 
        for(int right=s1.length();right<s2.length();right++){ 
            f2[s2[right]]++; 
            f2[s2[left]]--; 
            if(f2[s2[left]]==0){ 
                f2.erase(s2[left]); 
                } 
                left++; 
                if(f1==f2){ 
                  return true; 
                    }
        }
        return false;
    }
};