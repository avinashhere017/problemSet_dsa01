string frequencySort(string s) {
    //   string ans = "";
    //     map<char,int>m;
    //     for(int i=0;i<s.size();i++){
    //         m[s[i]]++;
    //     }
    //     vector<pair<int,char>>v;
    //     for(auto i: m){
    //         pair<int,char>p;
    //         p = make_pair(i.second,i.first);
    //         v.push_back(p);
    //     }
    //     cout<<endl;
    //     sort(v.rbegin(), v.rend());      // sort and reverse
    //     // reverse(v.begin(), v.end());
    //     for(auto i: v){
    //         int d = i.first;
    //         for(int j=0;j<d;j++){
    //             ans+=i.second;
    //         }
    //     }
    //     return ans;


        unordered_map<char, int> mp;
        for(auto i:s){
            mp[i]++;
        }

        priority_queue<pair<int,char>> pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }

        int j=0;
        while(!pq.empty()){
            auto i = pq.top();
            pq.pop();
            int temp = i.first;
            while(temp--){
                s[j] = i.second;
                j++;
            }
        }

        return s;
    }
