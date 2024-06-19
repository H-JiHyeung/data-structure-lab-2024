input = [10, 40, 30, 60, 30]

def problem1(input):
    
    mean = 0
    median = 0
    result = [0, 0]
    
    # 평균값 계산
    mean = sum(input) / len(input)
    
    # 중앙값 계산
    sorted_input = sorted(input)
    mid = len(sorted_input) // 2
    if len(sorted_input) % 2 == 0:
        median = (sorted_input[mid - 1] + sorted_input[mid]) / 2
    else:
        median = sorted_input[mid]
    

    result[0] = mean
    result[1] = median
    
    return result

result = problem1(input)

assert result == [34, 30]
print("정답입니다.")
