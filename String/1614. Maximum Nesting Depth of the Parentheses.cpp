int maxDepth(string s) {
        stack<int> st;
        int maxi=0;
        for(int i =0;i<s.length();i++){
           char ch=s[i];
            if(ch=='(' || ch == ')'){
                if(ch=='('){
                    st.push(ch);
                    maxi=max(int(st.size()),maxi);


                    
                    // if(st.size()>maxi){
                    //     maxi=st.size();
                    // }


                }
                else{
                    st.pop();
                }
            }
        }
        return maxi;
    }
