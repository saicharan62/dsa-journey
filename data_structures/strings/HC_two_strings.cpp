//TC - O(n+m)
//SC - O(1)
//technique - matching frequencies

string twoStrings(string s1, string s2) {
    vector<int> freq(26, 0);

    for (char c : s1)
        freq[c - 'a']++;

    for (char c : s2) {
        if (freq[c - 'a'] > 0)
            return "YES";
    }

    return "NO";
}
