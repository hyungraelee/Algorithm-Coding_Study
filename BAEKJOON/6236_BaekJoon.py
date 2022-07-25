from sys import stdin

input = stdin.readline

def main():
    N, M = map(int, input().split())
    daily = [int(input()) for _ in range(N)]

    start = max(daily)
    end = sum(daily)
    ans = 0
    while start <= end:
        mid = (start + end) // 2

        current = mid
        count = 1
        for day in daily:
            if current < day:
                current = mid
                count += 1
            current -= day

        if count <= M:
            ans = mid
            end = mid - 1
        else:
            start = mid + 1

    print(ans)

if __name__ == "__main__":
    main()
