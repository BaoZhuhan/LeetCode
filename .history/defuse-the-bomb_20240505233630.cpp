#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n);
        if (k == 0) {
            return res;
        }
        code.resize(n * 2);
        copy(code.begin(), code.begin() + n, code.begin() + n);
        int l = k > 0 ? 1 : n + k;
        int r = k > 0 ? k : n - 1;
        int w = 0;
        for (int i = l; i <= r; i++) {
            w += code[i];
        }
        for (int i = 0; i < n; i++) {
            res[i] = w;
            w -= code[l];
            w += code[r + 1];
            l++;
            r++;
        }
        return res;
    }
};

作者：力扣官方题解
链接：https://leetcode.cn/problems/defuse-the-bomb/solutions/1843157/chai-zha-dan-by-leetcode-solution-01x3/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。