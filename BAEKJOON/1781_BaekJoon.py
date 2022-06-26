import sys
import heapq

def main():
    N = int(input())
    date_rewards = [tuple(map(int, sys.stdin.readline().rstrip().split())) for _ in range(N)]

    date_rewards.sort()

    queue = []
    for date, reward in date_rewards:
        heapq.heappush(queue, reward)
        if len(queue) > date:
            heapq.heappop(queue)
    print(sum(queue))


if __name__ == "__main__":
    main()
