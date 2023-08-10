'''
pip install numpy
import numpy as np

def count_people(N, M):
    people = np.zeros((16, 16), dtype=int)  
    for x in range(16):
        for y in range(16):
            if x == 0 or y == 0:
                people[x][y] = y
            elif x != 0 and y == 1:
                people[x][y] = 1
            else:
                people[x][y] = people[x][y - 1] + people[x - 1][y]

    return people[N][M]

if __name__ == "__main__":
    num = int(input())
    for a in range (0,num):
        N = int(input())
        M = int(input())
        print(count_people(N, M))
        '''

t = int(input())

for _ in range(t):  
    floor = int(input())  # 층
    num = int(input())  # 호
    f0 = [x for x in range(1, num+1)]  # 0층 리스트
    for k in range(floor):  # 층 수 만큼 반복
        for i in range(1, num):  # 1 ~ n-1까지 (인덱스로 사용)
            f0[i] += f0[i-1]  # 층별 각 호실의 사람 수를 변경
    print(f0[-1])  # 가장 마지막 수 출력
    
