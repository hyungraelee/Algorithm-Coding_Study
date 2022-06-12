from functools import cmp_to_key

def compare(x, y):
    if x[1] < y[1]:
        return -1
    elif x[1] > y[1]:
        return 1
    else:
        if x[0] < y[0]:
            return -1
        elif x[0] == y[0]:
            return 0
        else:
            return 1

def input_values():
    N = int(input())
    if N < 1 or N > 100000:
        raise ValueError()

    meeting_times = []
    for _ in range(N):
        times = tuple(map(int, input().split()))
        meeting_times.append(times)

    return meeting_times

def main():
    meeting_times = input_values()
    meeting_times.sort(key=cmp_to_key(compare))

    count = 0
    for times in meeting_times:
        if count == 0 or times[0] >= last[1]:
            last = times
            count += 1

    print(count)

if __name__ == "__main__":
    main()
