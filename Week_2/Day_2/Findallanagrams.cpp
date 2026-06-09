class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        unordered_map<char,int> f1;
        unordered_map<char,int>f2;
        for(int i=0;i<p.length();i++){
            f1[s[i]]++;
            f2[p[i]]++;
        }
         if(f1==f2) res.push_back(0);
         int left = 0; 
        for(int right=p.length();right<s.length();right++){ 
            f1[s[right]]++; 
            f1[s[left]]--; 
            if(f1[s[left]]==0){ 
                f1.erase(s[left]); 
                } 
                left++; 
                if(f1==f2){ 
                  res.push_back(left); 
                    }
        }
       return res;
    }
};
       
       
        