from sys import stdin

def solution(J, R, array):
    score = [0] * J
    for i,s in enumerate(array):
        score[i%J] += s
    score.reverse()
    print(J - score.index(max(score)))

J, R = map(int, stdin.readline().rstrip().split())
array = list(map(int, stdin.readline().rstrip().split()))

solution(J, R, array)