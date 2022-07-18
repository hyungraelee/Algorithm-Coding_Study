def main():
    N = int(input())
    budgets = list(map(int, input().split()))
    total = int(input())

    start = 1
    end = max(budgets)
    assigned = []
    while start <= end:
        mid = (start + end) // 2

        temp = []
        for budget in budgets:
            if budget < mid:
                temp.append(budget)
            else:
                temp.append(mid)

        if sum(temp) <= total:
            assigned = temp
            start = mid + 1
        else:
            end = mid - 1

    print(max(assigned))

if __name__ == "__main__":
    main()
