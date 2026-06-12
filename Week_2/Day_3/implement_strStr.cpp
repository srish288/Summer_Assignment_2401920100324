class Solution {
public:
    int strStr(string haystack, string needle) {
        int cont = -1;
        if(needle.size()==0)
            return -1;
        if(needle.size() > haystack.size())
            return -1;
        for(int i=0;i<=haystack.size()-needle.size();i++){
            int j = 0;
            if(haystack[i] == needle[j]){  
                while(j < needle.size())
                    if(haystack[i+j] != needle[j]){
                        break;
                    }
                    else{
                        j++;
                    }
            }
            if(j == needle.size())
                    return i;
        }
        return -1;
        
    }
};