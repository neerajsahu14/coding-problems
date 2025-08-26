int pal(string &s, int l, int r) {
    int count = 0;
    while (l >= 0 && r < s.size() && s[l] == s[r]) {
        count++;   // every valid (l,r) is a palindrome
        l--;
        r++;
    }
    return count;
}

int countPalinInRange(int n, string A, int q1, int q2) {
    // take substring from q1 to q2 inclusive
    int l = min(q1, q2);
    int r = max(q1, q2);
    string s = A.substr(l, r - l + 1);
    int m = s.size();
    int count = 0;

    for (int i = 0; i < m; i++) {
        count += pal(s, i, i);     // odd length palindromes
        count += pal(s, i, i + 1); // even length palindromes
    }
    return count;
}
