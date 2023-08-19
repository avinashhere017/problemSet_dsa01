string reverseWords(string S) 
{ 
    stack<string> st;
    for(int i = 0; i < S.length(); i++){
        string word = "";
        while(i < S.length() && S[i] != '.'){
            word += S[i];
            i++;
        }
        st.push(word);
    }
    
    string reversed = "";
    while(!st.empty()){
        reversed += st.top();
        st.pop();
        if (!st.empty()) {
            reversed += ".";
        }
    }
    
    return reversed;
}
