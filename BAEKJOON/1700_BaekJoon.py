def main():
    holes, _ = map(int, input().split())
    orders = list(map(int, input().split()))

    multitap = []
    pull_out = 0
    for idx, device in enumerate(orders):
        if device in multitap:
            continue
        elif len(multitap) < holes:
            multitap.append(device)
            continue

        multitap_idxs = []
        for plug in multitap:
            if plug in orders[idx:]:
                multitap_idxs.append(orders[idx:].index(plug))
            else:
                multitap_idxs.append(101)
        change_idx = max(range(len(multitap_idxs)), key=lambda i: multitap_idxs[i])
        multitap[change_idx] = device
        pull_out += 1

    print(pull_out)

if __name__ == "__main__":
    main()
