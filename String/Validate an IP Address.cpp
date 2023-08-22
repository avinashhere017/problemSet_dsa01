Validate an IP Addressclass Solution {
    public:
        int isValid(string s) {
            // code here
           
    string st = "";
    int check;
    int count = 0;
    
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch != '.') {
            st += ch;
        } else {
            count++;
            if (st.size() > 3 || st.size() == 0 || (st.size() > 1 && st[0] == '0')) {
                return 0;
            }
            char c=st[0];
            if(!isdigit(c)) return 0;
            
            check = stoi(st);
            if ((check >= 0 && check <= 255)) {
                st = "";
            } else {
                return 0;
            }
        }
    }
    
    if (count != 3) {
        return 0;
    }
    
    if (st.size() > 0 && (st.size() > 1 && st[0] == '0')) {
        return 0;
    }
    
    check = stoi(st);
    if ((check >= 0 && check <= 255)) {
        return 1;
    }
    
    return 0;

        }
};
