class Solution {
public:
    bool isValid(string s) {
        //TC=O(N) SC=O(N)
        stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
    //opening bracket => push into stack
    //closing bracket => check it with top of stack if there is matching opening bracket
                        //then pop closing bracket 
    //opening bracket
    if(ch == '{' || ch == '(' || ch == '['){
        st.push(ch);
    }  else {
    //closing bracket
        if (!st.empty()) {
          char top = st.top();
          if ((ch == ')' && top == '(') ||
           (ch == '}' && top == '{') || 
           (ch == ']' && top == '[')) {
            st.pop();
          } else {
            return false;
          }
        } else {
          return false;
        }
        }
    }
    
    if(st.empty()){
        return true;
    } else {
        return false;
    }

    }
};
