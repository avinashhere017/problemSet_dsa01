int minimumSum(int n, int k) {
        set<int> st;
        
        for(int i=1;st.size()!=n;i++){
            if(st.find(k-i)==st.end()){
                st.insert(i);
            }
        }
        
        int s=0;
        for(auto i=st.begin();i!=st.end();i++){
            s+=*i;
        }
        return s;
    }
};
