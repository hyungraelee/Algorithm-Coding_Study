def main():
    N = int(input())
    targets = list(map(int, input().split()))
    buttons = [0] * N

    count = 0
    for idx, target in enumerate(targets):
        if buttons[idx] != target:
            count += 1
            buttons[idx:idx+3] = map(lambda x: not x, buttons[idx:idx+3])
    print(count)

if __name__ == "__main__":
    main()
