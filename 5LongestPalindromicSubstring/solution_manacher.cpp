class Solution {
public:
	string longestPalindrome(string s) {
		if (s.empty()) return "";
		if (s.size() == 1) return s;
		string s_tmp(s.size() * 2 + 2, '#');
		s_tmp[0] = '$';
		for (int i = 1; i < s_tmp.size(); i++) {
			if (i % 2 == 1) s_tmp[i] = '#';
			else {
				s_tmp[i] = s[i / 2 - 1];
			}
		}
		s = s_tmp;

		int p[2002], mx = 0, id = 0,maxlen = 0,maxIndex = 0;
		memset(p, 0, sizeof(p));
		for (int i = 1; i < s.length(); i++) {
			p[i] = mx > i ? min(mx - i, p[id * 2 - i]) : 1;
			while (s[i - p[i]] == s[i + p[i]]) p[i]++;
			if (p[i] > maxlen) {
				maxlen = p[i];
				maxIndex = i - p[i] + 2;
			}
			if (i + p[i] > mx) {
				mx = i + p[i];
				id = i;
			}
		}

		string sub(maxlen - 1,' ');
		for (int i = 0; i < maxlen-1; i++) {
			int index = maxIndex + 2 * i;
			sub[i] = s[index];
		}
		return sub;
	}

};