import sys

def main():
    T = int(input())
    for _ in range(T):
        N = int(sys.stdin.readline().rstrip())
        stocks = list(map(int, sys.stdin.readline().rstrip().split()))
        value = 0

        max_value = 0
        for stock in stocks[::-1]:
            max_value = max(max_value, stock)
            value += max_value - stock
        print(value)

        # stock_cnt = 0
        # idx = 0
        # while idx < len(stocks):
        #     max_idx = stocks[idx:].index(max(stocks[idx:]))
        #     for _ in range(max_idx):
        #         value -= stocks[idx]
        #         stock_cnt += 1
        #         idx += 1
        #     if stock_cnt:
        #         value += stocks[idx] * stock_cnt
        #         stock_cnt = 0
        #     idx += 1
        # print(value)


if __name__ == "__main__":
    main()
