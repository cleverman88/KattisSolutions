#https://open.kattis.com/problems/anagramcounting

import sys
import string

def factorial(n):
    x = 1;
    for i in range(2, n+1):
        x *= i

    return x


for S in sys.stdin:
    M = dict()
    S = S.strip(string.whitespace)

    for c in S:
        if c in M:
            M[c] += 1
        else:
            M[c] = 1

    output = 1
    for x in M:
        output *= factorial(M[x])

    print(factorial(len(S)) // output)
