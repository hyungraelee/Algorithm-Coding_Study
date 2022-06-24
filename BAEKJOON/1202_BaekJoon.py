import sys
import heapq

def main():
    N, K = map(int, input().split())

    jewels = []
    for _ in range(N):
        weight, value = tuple(map(int, sys.stdin.readline().rstrip().split()))
        heapq.heappush(jewels, (weight, value))

    bags = [int(sys.stdin.readline().rstrip()) for _ in range(K)]
    bags.sort()

    temp_bag = []
    total_value = 0
    for bag in bags:
        while jewels and jewels[0][0] <= bag:
            heapq.heappush(temp_bag, -heapq.heappop(jewels)[1])
        if temp_bag:
            total_value -= heapq.heappop(temp_bag)
        elif not jewels:
            break

    print(total_value)


if __name__ == "__main__":
    main()
