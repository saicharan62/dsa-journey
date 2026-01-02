//TC - O(N)
//SC - O(1)
//technique - checking if char is uppercase!

int camelcase(string s) {
    int words = 1;

    for (char c : s) {
        if (isupper(c)) {
            words++;
        }
    }

    return words;
}
