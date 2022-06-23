import sys
import heapq

def main():
    N = int(input())
    fees = [tuple(map(int, sys.stdin.readline().rstrip().split())) for _ in range(N)]

    fees.sort(key=lambda x: x[1])

    sums = []
    for fee, date in fees:
        heapq.heappush(sums, fee)
        if len(sums) > date:
            heapq.heappop(sums)
    print(sum(sums))

if __name__ == "__main__":
    main()
