class Solution:
    def numberOfPaths (self, M, n):
        path = 1
        MOD = 10**9 + 7
        for i in range(M - 1):
            path = (path * (i + n)) % MOD
            temp = pow(i + 1, MOD - 2, MOD)
            path = (path * temp ) % MOD
        return path
