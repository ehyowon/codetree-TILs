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

i, j = 0, 0
while(i+3 <= n and j+3 <= n and i >= 0 and j >= 0):
    count.append(search(i,j))
    i += 1
    j += 1

print(max(count))

'''arr = []

for _ in range(n):
    a = list(map(int, input().split()))
    arr.append(a)

print(arr)'''