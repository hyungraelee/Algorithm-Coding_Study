import sys

def main():
    N, M = map(int, input().split())
    trees = list(map(int, sys.stdin.readline().rstrip().split()))

    start = 0
    end = max(trees)
    while start <= end:
        mid = (start + end) // 2
        sums = 0
        for tree in trees:
            if tree > mid:
                sums += tree - mid
        if sums < M:
            end = mid - 1
        else:
            start = mid + 1
    print(end)

if __name__ == "__main__":
    main()
