bool isValid(string s) {
        stack<char> st;
        for(int i =0;i<s.length();i++){
            //if opening bracket than we had to push in stack 
            // and if we encounter any closing bracket we had to match with the top of the stack if 

            char ch=s[i];

            if(ch=='(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else if(!st.empty() && (ch==')' || ch == '}' || ch == ']')){
                if((ch==')' && st.top()=='(') || (ch=='}' && st.top()=='{') || (ch==']' && st.top()=='[')){
                      st.pop();
                      }
                else {
                return false;
        }
                  
            }
            else{
            return false;
        }
        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }
