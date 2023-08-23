string reverseWords(string s) {
        stack<string> st;
        for(int i=0;i<s.length();i++){
            string str="";
            while(i<s.length() && s[i]!=' '){
                str+=s[i];
                i++;
            }
            if(str==""){
                continue;
            }
            st.push(str);
        }

        string reverse ="";
        while(!st.empty() ){
            reverse+=st.top();
            st.pop();
            if(!st.empty())
               reverse+=" ";
        }
        return reverse;
    }
