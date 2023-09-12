class Solution{
public:
	int search(string pat, string txt) {
    int i = 0;
    int j = 0;
    int ans = 0;
    int k = pat.size();

    unordered_map<char, int> mp;

    // Building the map
    for (auto it : pat) {
        mp[it]++;
    }

    // Count the number of distinct characters in the pattern
    int count = mp.size();

    while (j < txt.length()) {
        // Calculation part
        if (mp.find(txt[j]) != mp.end()) {
            mp[txt[j]]--;
            if (mp[txt[j]] == 0) {
                count--;
            }
        }

        // Window length not achieved yet
        if (j - i + 1 < k) {
            j++;
        }

        // Window length achieved, find ans and slide the window
        else if (j - i + 1 == k) {
            // Finding the ans
            if (count == 0) {
                ans++;
            }
            if (mp.find(txt[i]) != mp.end()) {
                mp[txt[i]]++;
                if (mp[txt[i]] == 1) {
                    count++;
                }
            }

            // Slide the window
            i++;
            j++;
        }
    }
    return ans;
}


};
