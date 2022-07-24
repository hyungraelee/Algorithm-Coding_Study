from sys import stdin

input = stdin.readline

def main():
    N = int(input())
    computers = []
    for _ in range(N):
        computers += list(map(int, input().split()))

    total = sum(computers)
    ans = 0
    start = 0
    end = max(computers)
    while start <= end:
        mid = (start + end) // 2
        sums = 0
        for computer in computers:
            sums += computer if computer < mid else mid

        if sums < total / 2:
            start = mid + 1
        else:
            ans = mid
            end = mid - 1
    print(ans)

if __name__ == "__main__":
    main()
