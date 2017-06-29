class Solution {
public:
    int strStr(string haystack, string needle) {
		int m = haystack.size();
		int n = needle.size();
		if (!n) return 0;
		vector<int> lps;
		kmp(needle, lps);

		int q = -1;
		for (int i = 0; i<m; i++) {
			while (q >= 0 && needle[q + 1] != haystack[i]) q = lps[q];
			if (needle[q + 1] == haystack[i]) q = q + 1;
			if (q == n - 1) return i - n + 1;
			//q = lps[q];
		}

		return -1;
	}
private:
	void kmp(string str, vector<int> &lps) {
		int m = str.size();
		lps.resize(m);
		lps[0] = -1;
		int k = -1;
		for (int i = 1; i<m; i++) {
			while (k >= 0 && str[k + 1] != str[i]) {
				k = lps[k];
			}
			if (str[k + 1] == str[i]) k = k + 1;
			lps[i] = k;
		}
	}
};