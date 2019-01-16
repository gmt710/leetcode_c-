static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class MinStack {
public:
    // python:896ms
    // c++:16ms
    /** initialize your data structure here. */
    MinStack() {
        vector<int> Stack;
    }
    
    void push(int x) {
        s1.push(x);
        if(s2.empty() || x <= getMin()){
            s2.push(x);
        }
    }
    
    void pop() {
        if(s1.top() == getMin()){
            s2.pop();
        }
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
private:
    // s1存数据，s2存最小值
    stack<int> s1;
    stack<int> s2;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
