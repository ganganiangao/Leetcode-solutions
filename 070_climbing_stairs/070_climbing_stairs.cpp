using namespace std;
#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> val;
    Solution() : val(46, 0) {
        val[0] = 0;
        val[1] = 1;
        val[2] = 2;
    }

    int climbStairs(int n) {  
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        if(val[n]) return val[n];
        return val[n] = climbStairs(n-1) + climbStairs(n-2);        
    }
};

int main(){
    Solution s;
    int n; cin >> n;
    cout << s.climbStairs(n) << endl;
}
