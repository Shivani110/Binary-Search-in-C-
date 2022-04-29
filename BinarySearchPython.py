def Binary_search(a, beg, end, b):
    if end >= beg:
        mid = beg + (end - beg)//2
        if a[mid] == b:
            return mid
        elif a[mid] > b:
            return Binary_search(a, beg, mid-1, b)
        else:
            return Binary_search(a, mid + 1, end, b)
    else:
        return -1


a = [20, 35, 49, 65, 70]
b = 20
r = Binary_search(a,0, len(a)-1,b)
if r != -1:
    print("The element is present at index " + str(r))
else:
    print("The element is not found")