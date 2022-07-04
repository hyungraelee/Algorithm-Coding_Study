import sys

def main():
    K, N = map(int, input().split())
    length = [int(sys.stdin.readline().rstrip()) for _ in range(K)]

    start = 1
    end = max(length)

    while  start <= end:
        mid = (start + end) // 2
        count = 0
        for idx in range(K):
            count += length[idx] // mid
        if count < N:
            end = mid - 1
        else:
            start = mid + 1
    print(end)

if __name__ == "__main__":
    main()
