import sys

def main():
    N = int(input())
    weights = [int(sys.stdin.readline().rstrip()) for _ in range(N)]
    weights.sort()

    max_weight = 0
    for weight in weights:
        max_weight = max(max_weight, weight*N)
        N -= 1
    print(max_weight)

if __name__ == "__main__":
    main()
