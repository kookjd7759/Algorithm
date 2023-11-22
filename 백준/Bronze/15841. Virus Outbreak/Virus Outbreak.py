import sys

cows = [1,1] + [0 for _ in range(490)]
for i in range(2, 491):
  cows[i] = cows[i-1] + cows[i-2]

for i in sys.stdin:
  if (i:=int(i)) == -1:
    break
  print(f"Hour {i}: {cows[i-1]} cow(s) affected")