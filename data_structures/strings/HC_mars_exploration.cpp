//TC - O(N)
//SC - O(1)
//technique - comparing frequencies of chars.

int marsExploration(string s) {
    int count = 0;

    for (int i = 0; i < s.size(); i++) {
        if (i % 3 == 0 && s[i] != 'S') count++;
        else if (i % 3 == 1 && s[i] != 'O') count++;
        else if (i % 3 == 2 && s[i] != 'S') count++;
    }

    return count;
}
