def main():
    N, M = map(int, input().split())
    times = list(map(int, input().split()))

    start = (M // N) * min(times)
    end = (M // N + 1) * max(times)
    ans = 0
    while start <= end:
        mid = (start + end) // 2

        count = 0
        for time in times:
            count += mid // time

        if count < M:
            start = mid + 1
        else:
            ans = mid
            end = mid - 1

    print(ans)

if __name__ == "__main__":
    main()
