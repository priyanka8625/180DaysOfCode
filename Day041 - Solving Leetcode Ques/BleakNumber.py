from math import log2

class Solution:
    def is_bleak(self, n):
        # Calculate the maximum number of bits required to represent n.
        num_bits = int(log2(n)) + 1

        # Check numbers in the range from (n - num_bits) to n (inclusive).
        for candidate in range(n - num_bits, n + 1):
            # Calculate the sum of candidate and the count of set bits (1s) in its binary representation.
            sum_of_bits = candidate + bin(candidate).count('1')
           
            # If the sum of candidate and its set bits count is equal to n is bleak number.
            if sum_of_bits == n:
                return 0

        # If no number was found in the range that satisfies the condition, n is not bleak.
        return 1
