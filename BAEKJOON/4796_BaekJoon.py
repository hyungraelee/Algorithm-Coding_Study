import sys

def main():
    case = 1
    while True:
        L, P, V = map(int, sys.stdin.readline().rstrip().split())
        if not L:
            break

        total = 0
        quotient, remainder = divmod(V, P)
        total = quotient * L + min(remainder, L)
        print(f"Case {case}: {total}")
        case += 1

if __name__ == "__main__":
    main()
