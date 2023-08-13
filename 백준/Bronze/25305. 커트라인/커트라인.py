people, size = map(int, input().split())
score = list(map(int, input().split()))
print(sorted(score, reverse=True)[size - 1])