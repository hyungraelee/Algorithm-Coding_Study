import sys

def main():
    T = int(input())
    for _ in range(T):
        N = int(input())
        rankings = [tuple(map(int, sys.stdin.readline().rstrip().split())) for _ in range(N)]
        rankings.sort()
        high_rank = rankings[0][1]
        for rank in rankings[1:]:
            if rank[1] > high_rank:
                N -= 1
            high_rank = min(high_rank, rank[1])
        print(N)

if __name__ == "__main__":
    main()
