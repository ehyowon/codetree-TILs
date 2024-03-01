n = int(input())

arr = [list(map(int, input().split())) for _ in range(n)]
count = []
cnt = 0

def search(i, j):
    cnt = 0
    for a in range(3):
        for b in range(3):
            if(arr[a+i][b+j] == 1):
                cnt += 1
    return cnt

for i in range(n-2):
    for j in range(n-2):
        count.append(search(i,j))

print(max(count))

'''arr = []

for _ in range(n):
    a = list(map(int, input().split()))
    arr.append(a)

print(arr)'''