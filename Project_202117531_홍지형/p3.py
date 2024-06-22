# 프로젝트 문제 3번
from collections import deque

input = [[4, 3, 2, 1],
         [0, 0, 0, 0],
         [0, 0, 9, 0],
         [1, 2, 3, 4]]
N = 4

forest = []

def problem3(input):    
    bear_size = 2
    honeycomb_count = 0
    time = 0
    bear_x, bear_y = 0, 0

    # forest 리스트를 input 리스트로 초기화
    forest = [row[:] for row in input]
    
    # 곰의 초기 위치 찾기
    for i in range(N):
        for j in range(N):
            if forest[i][j] == 9:
                bear_x, bear_y = i, j
                forest[i][j] = 0
    print("곰의 초기 위치 x : {0}, y : {1}".format(bear_x, bear_y))

    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

    def bfs(x, y, size):    
        visited = [[False] * N for _ in range(N)]
        queue = deque([[x, y, 0]])  # [x, y, distance]
        visited[x][y] = True
        honeycombs = []

        while queue:
            cur_x, cur_y, dist = queue.popleft()
            for dx, dy in directions:
                nx, ny = cur_x + dx, cur_y + dy
                if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                    if forest[nx][ny] <= size:
                        visited[nx][ny] = True
                        queue.append([nx, ny, dist + 1])
                        if 0 < forest[nx][ny] < size:
                            honeycombs.append([dist + 1, nx, ny])
        
        if honeycombs:
            honeycombs.sort()
            return honeycombs[0]
        else:
            return None
    
    while True:
        result = bfs(bear_x, bear_y, bear_size)
        if result is None:
            break
        dist, nx, ny = result
        bear_x, bear_y = nx, ny
        time += dist
        honeycomb_count += 1
        forest[nx][ny] = 0
        if honeycomb_count == bear_size:
            bear_size += 1
            honeycomb_count = 0
    
    return time

result = problem3(input)

assert result == 14
print("정답입니다.")
