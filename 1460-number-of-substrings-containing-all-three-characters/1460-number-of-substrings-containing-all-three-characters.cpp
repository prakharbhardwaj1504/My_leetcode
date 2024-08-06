class Solution {
public:
    int numberOfSubstrings(string s) {
        int l = 0;
        int count = 0;
        int a = -1, b = -1, c = -1;
        while (l < s.length()) {
            if (s[l] == 'a') {

                a = l;
            } else if (s[l] == 'b') {
                b = l;
            } else if (s[l] == 'c') {
                c = l;
            }
            if (a != -1 && (b != -1 && c != -1)) {
                count = count + min(a, min(b, c)) + 1;
            }
            l++;
        }
        return count;
    }
};