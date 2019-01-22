static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool isValid(string s) {
        // python:28ms
        // c++:0ms
        // https://blog.csdn.net/yuanliang861/article/details/82453313
        stack<char> parent;
        for(char& c:s){
            switch(c){
                // 如果是左括号，就入栈；如果为右括号，且有匹配的左括号在栈顶就出栈
                case '(':
                case '{':
                case '[':parent.push(c);break;
                case ')':if(parent.empty() || parent.top() != '(') return false; else parent.pop(); break;
                case '}':if(parent.empty() || parent.top() != '{') return false; else parent.pop(); break;
                case ']':if(parent.empty() || parent.top() != '[') return false; else parent.pop(); break;
                default: ; 
            }
        }
        return parent.empty();
    }
};
