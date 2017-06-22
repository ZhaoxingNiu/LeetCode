class Solution {
public:
    int reverse(int x) {
        /*
		int pos = 1;
		if (x < 0) {
			pos = -1;
			x *= -1;
		}
		vector<int> v;
		while (x > 0) {
			v.push_back(x % 10);
			x = x / 10;
		}
		long long result = 0;
		bool eff = false;
		for (int i = 0; i < v.size();i++) {
			int bit = v[i];
			if (!eff) {
				if (bit) eff = true;;
			}
			if (eff) {
				result = result * 10 + bit;
			}
		}
		result *= pos;
		return (result > INT_MAX || result < INT_MIN) ? 0 : result;
		*/
		long long result = 0;
		while(x){
		    result = result*10 + x%10;
		    x /=10;
		}
		return (result>INT_MAX || result <INT_MIN)? 0:result;
	}
};