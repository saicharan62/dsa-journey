//TC - O(n+m)
//technique - counting deletions by substracting s2's frequencies

int makingAnagrams(string s1, string s2) {
    vector<int> freq(26, 0);
    int deletions = 0;

    for (char c : s1) {
        freq[c - 'a']++;
    }

    for (char c : s2) {
        freq[c - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        deletions += abs(freq[i]);
    }

    return deletions;
}
