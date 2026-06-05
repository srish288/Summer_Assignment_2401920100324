class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sol="";
        for(int i=0;i<strs[0].size();i++){
            char s=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i>=strs[j].size()||s!=strs[j][i]){
                    return sol;
                }
            }
          sol+=s;
        }
        return sol;
    }
};