def solution(s: str):
    output = ""
    for c in s:
        if c.isupper():
            output += " "
        output += c
    return output

if __name__ == "__main__":
    print(solution("testStr"))