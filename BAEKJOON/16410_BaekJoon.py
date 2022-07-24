import math

def distance(x1, y1, x2, y2):
    dis = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
    return dis

def main():
    x, y, x1, y1, x2, y2 = map(int, input().split())

    if x >= x1 and x <= x2:
        if y > y2:
            ans = y - y2
        else:
            ans = y1 - y
        ans = float(ans)
    elif y >= y1 and y <= y2:
        if x > x2:
            ans = x - x2
        else:
            ans = x1 - x
        ans = float(ans)
    else:
        ans = min(distance(x,y,x1,y1), distance(x,y,x2,y1), distance(x,y,x1,y2), distance(x,y,x2,y2))

    print(f"{ans:.3f}")


if __name__ == "__main__":
    main()
