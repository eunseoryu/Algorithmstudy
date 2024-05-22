dwarfs = [int(input()) for _ in range(9)]
dwarfs.sort()
total = sum(dwarfs)

found = False
for i in range(9):
    if found:
        break
    for j in range(i + 1, 9):
        if total - dwarfs[i] - dwarfs[j] == 100:
            del dwarfs[j]  # 먼저 더 큰 인덱스 삭제
            del dwarfs[i]  # 다음 작은 인덱스 삭제
            found = True
            break

for dwarf in dwarfs:
    print(dwarf)


#dfs 재귀 이용 version
dwarfs = [int(input()) for _ in range(9)]
dwarfs.sort()
total_100 = []

def dfs(depth, start, current_sum):
    if current_sum > 100:
        return  # 100을 초과하면 더 이상 탐색할 필요가 없으므로 반환

    if depth == 7:
        if current_sum == 100:
            for x in total_100:
                print(x)
            exit()  # 결과 출력 후 종료
        return

    for i in range(start, len(dwarfs)):
        total_100.append(dwarfs[i])
        dfs(depth + 1, i + 1, current_sum + dwarfs[i])
        total_100.pop()

dfs(0, 0, 0)


#블로그 참고
#https://ji-gwang.tistory.com/244