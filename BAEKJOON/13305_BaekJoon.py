import sys

def main():
    N = int(input())
    distance = list(map(int, sys.stdin.readline().rstrip().split()))
    oil_price = list(map(int, sys.stdin.readline().rstrip().split()))

    min_price = oil_price[0]
    for idx, price in enumerate(oil_price):
        min_price = min(min_price, price)
        oil_price[idx] = min_price

    total = sum(map(lambda x, y: x*y, distance, oil_price[:-1]))
    print(total)


if __name__ == "__main__":
    main()
