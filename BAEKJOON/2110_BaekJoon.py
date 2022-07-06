import sys

def main():
    N, C = map(int  , input().split())
    house = [int(sys.stdin.readline().rstrip()) for _ in range(N)]
    house.sort()

    start = 1
    end = house[-1] - house[0]

    while start <= end:
        mid = (start + end) // 2
        count = 1
        nearest = house[0]
        for idx in range(N):
            if house[idx] >= nearest + mid:
                nearest = house[idx]
                count += 1
        if count < C:
            end = mid - 1
        else:
            start = mid + 1
    print(end)


if __name__ == "__main__":
    main()
