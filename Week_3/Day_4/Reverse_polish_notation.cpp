class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int ans;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
               int b=st.top();
               st.pop();
               int a=st.top();
               st.pop();
                ans=a+b;
               st.push(ans);
            }
            else if(tokens[i]=="-"){
               int b=st.top();
               st.pop();
               int a=st.top();
               st.pop();
                ans=a-b;
               st.push(ans);
            }
            else if(tokens[i]=="*"){
               int b=st.top();
               st.pop();
               int a=st.top();
               st.pop();
                ans=a*b;
               st.push(ans);
            }
            else if(tokens[i]=="/"){
               int b=st.top();
               st.pop();
               int a=st.top();
               st.pop();
                ans=a/b;
               st.push(ans);
            }
            else{
                int s=stoi(tokens[i]);
                st.push(s);
            }
        }
        return st.top();

    }
};