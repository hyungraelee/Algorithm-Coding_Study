def main():
    N = int(input())
    times = list(map(int, input().split()))

    times.sort()
    min_time = 0
    total = 0
    for time in times:
        min_time += time
        total += min_time
    print(total)

if __name__ == "__main__":
    main()
