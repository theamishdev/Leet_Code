class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string t = s + s;

        string a = "", b = "";
        for(int i = 0; i < 2 * n; i++){
            a += (i % 2 ? '1' : '0');
            b += (i % 2 ? '0' : '1');
        }

        int ans = INT_MAX;
        int diff1 = 0, diff2 = 0;
        int l = 0;

        for(int r = 0; r < 2 * n; r++){
            if(t[r] != a[r]) diff1++;
            if(t[r] != b[r]) diff2++;

            if(r - l + 1 > n){
                if(t[l] != a[l]) diff1--;
                if(t[l] != b[l]) diff2--;
                l++;
            }

            if(r - l + 1 == n){
                ans = min(ans, min(diff1, diff2));
            }
        }

        return ans;
    }
};