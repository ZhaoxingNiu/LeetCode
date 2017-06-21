class Solution {
public:
    string convert(string s, int numRows) {
		if (numRows <=1) return s;  //special case
		string news = s;
		vector<vector<char>> vs;
		for (int i = 0; i < numRows; i++) {
			vector<char> v;
			vs.push_back(v);
		}
		int rows = 0,step = 1;
		for (int i = 0; i < s.length(); i++) {
			if (rows == 0) { step = 1; }
			else if (rows == numRows - 1) { step = -1; }  //step move
			vs[rows].push_back(s[i]);
			rows += step;
		}
		int pos = 0;
		for (int i = 0; i < numRows; i++) {
			for (int j = 0; j < vs[i].size(); j++) {  // append(char)
				news[pos++] = vs[i][j];
			}
		}
		return news;
	}
	/*

    if (nRows <= 1)
        return s;

    const int len = (int)s.length();
    string *str = new string[nRows];

    int row = 0, step = 1;
    for (int i = 0; i < len; ++i)
    {
        str[row].push_back(s[i]);

        if (row == 0)
            step = 1;
        else if (row == nRows - 1)
            step = -1;

        row += step;
    }

    s.clear();
    for (int j = 0; j < nRows; ++j)
    {
        s.append(str[j]);
    }

    delete[] str;
    return s;
	*/
};