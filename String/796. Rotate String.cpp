class Solution {
public:
    bool rotateString(string s, string goal) {
        int flag=0;

        for(int i =0;i<s.length();i++){
        //   rotate(s.begin(),s.end()-1,s.end());

        char ch = s[0];
        for(int i =0;i<s.size();i++){
            s[i]=s[i+1];
        }
        s[s.size()-1]=ch;


        if(s==goal){
            flag=1;
            // break;
        }
        }
        return flag;
    }
};
