#include<bits/stdc++.h> 
using namespace std;

int helper(int n, vector<int>& dp) {
    if(n <= 2) return n;

    if(dp[n] != -1) return dp[n];
    int mod = (1e9 + 7);

    return dp[n] = (helper(n-1, dp) % mod) + (helper(n-2, dp) % mod);
}

int main() {
/*
Count ways to reach the nth stair : 
*/
  int n = 4; // ans = 5
  
  vector<int> dp(n+1, -1);
  int result = helper(n, dp);
  
  cout << "result " << result << endl;

    return 0;
}

/*
- manually solve : for (n = 2) hume pata hai ki do hi tareeka hai ya toh 2 step leke ya fir 1 step leke.
- recurrence relation applies for every ith iteration. 
  by taking 1/2 steps to reach base step : 
  (n-1) step -> base step = x.
  (n-2) step -> base step = y.
  so for nth step : 
  ya toh pehle 1step lun, ya fir 2step lu.
  so (x + y) = total ways to reach.
*/