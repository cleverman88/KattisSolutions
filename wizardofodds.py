#https://open.kattis.com/problems/wizardofodds
import math

a = input().split()

if math.ceil(math.log2(int(a[0]))) <= int(a[1]):
    print("Your wish is granted!")
else:
    print("You will become a flying monkey!")
