class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0, j=0, n=chars.size(), l=0;
        while(j<n){
            if(chars[j]==chars[i]){
                l++;
                j++;
            }else{
                i++;
                if(l>1){
                    string s=to_string(l);
                    for(int k=0; k<s.length(); k++){
                        chars[i]=s[k];
                        i++;
                    }
                }
                chars[i]=chars[j];
                l=0;
            }
        }

        i++;
        if(l>1){
                    string s=to_string(l);
                    for(int k=0; k<s.length(); k++){
                        chars[i]=s[k];
                        i++;
                    }
        }
        return i;

    }
};