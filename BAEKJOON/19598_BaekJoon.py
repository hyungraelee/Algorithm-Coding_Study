def main():
    N = int(input())
    schedules = []
    for _ in range(N):
        start, end = map(int, input().split())
        schedules.append((start, 1))
        schedules.append((end, -1))
    schedules.sort()

    rooms = 0
    count = 0
    for schedule in schedules:
        count += schedule[1]
        rooms = max(rooms, count)

    print(rooms)

if __name__ == "__main__":
    main()
