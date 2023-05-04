#include<bits/stdc++.h>
using namespace std;

int helper(int n) {
    if(n < 1) return 1;

    int pick = helper(n-2);
    int notPick = helper(n-1);

    return pick + notPick;
}

int main() {
/*
2320 leetcode 
count number of ways to place houses. 
There is a street with n * 2 plots, where there are n plots on each side of the street. The plots on each side are numbered from 1 to n. On each plot, a house can be placed.
Return the number of ways houses can be placed such that no two houses are adjacent to each other on the same side of the street. 
*/    
    int n = 2;

    int ans = helper(n);
    cout << ans * ans << endl;

    return 0;
}

/*
- adjacent sirf one side ka nhi hona chahiye. up-down row mein adjacent house placing chalega. 
- agar ek side ke malum chal jaye ki kitne tareeke hai houses place karne ke then down bhi utne hi ways honge place 
  karne ke. so (ans * ans) return kardo. 
*/