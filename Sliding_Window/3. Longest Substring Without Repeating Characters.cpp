class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int mx=0;
      
        // for(int j=0;j<s.size();j++){
        //     unordered_map<char,int> map;
        //     for(int i=j;i<s.size();i++){
        //           int cnt=0;
        //         int flag=1;
        //         map[s[i]]++;
        //         for(auto it:map){
        //             if(it.second>1){
        //                 flag=0;
        //                 break;
        //             }else{
        //                 cnt++;
        //             }
        //         }
        //         mx=max(mx,cnt);
        //         if(flag==0) break;   
        //     }
        // }
        // return mx;


      // -----------------------------------------------sliding window---------------------------------------

        if(s.size()==0) return 0;
        int i =0;
        int j=0;
        int mx=0;
        unordered_map<char,int> map;

        while(j<s.size()){
            map[s[j]]++;

            if(map.size()==(j-i+1)){
                mx=max(mx,j-i+1);
                    j++;
            }else if(map.size() < (j-i+1)){
                while(map.size() < (j-i+1)){
                    map[s[i]]--;
                    if(map[s[i]]==0){
                        map.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
            // j++;
        }
        return mx;
    }
};
