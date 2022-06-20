def main():
    S = input()

    cnt = [0, 0]
    cnt[int(S[0])] += 1
    for idx in range(1,len(S)):
        if S[idx] != S[idx-1]:
            cnt[int(S[idx])] += 1
    print(min(cnt))

if __name__ == "__main__":
    main()
