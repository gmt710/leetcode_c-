static int x = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int countPrimes(int n) {
        // python:420ms
        // c++:32ms
        if(n < 3) return 0; // 因为小于2的质数有0个
        vector<int> primes(n,1);
        int count = 0;
        for(int i=2; i<n; i++){
            if(primes[i]){
                ++count;
                for(int j=2; i*j<n; j++)
                    primes[j*i] = 0;
            }
        }
        return count;
    }
};
