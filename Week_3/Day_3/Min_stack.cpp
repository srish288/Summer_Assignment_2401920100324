class MinStack {
public:
    
    stack<long long> s;
    long long mini;

    MinStack() {}

    void push(int val) {

        if(s.empty()){
            mini = val;
            s.push(val);
        }
        else{
            if(val >= mini){
                s.push(val);
            }
            else{
                s.push(2LL*val - mini);
                mini = val;
            }
        }
    }

    void pop() {

        if(s.empty()) return;

        long long x = s.top();
        s.pop();

        if(x < mini){
            mini = 2*mini - x;
        }
    }

    int top() {

        long long x = s.top();

        if(x >= mini)
            return x;
        else
            return mini;
    }

    int getMin() {
        return mini;
    }
};