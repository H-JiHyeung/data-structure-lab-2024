# 프로젝트 문제 2번
input = ")))()"

def problem2(input):
    stack = []
    
    for char in input:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack and stack[-1] == '(':
                stack.pop()
            else:
                stack.append(char)
                
    result = len(stack)
    return result

result = problem2(input)
assert result == 3
print("정답입니다.")
