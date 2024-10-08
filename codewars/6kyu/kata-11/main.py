def count_bits(n):
    return binary(n).count("1")
    

def binary(num: int, out: str = "") -> str:
    # End the conversion
    if num == 0:
        # The full result is "0" as 0 was passed initially
        if out == "":
            return "0"
        else:
            return out
    
    next_digit = ""
    
    # There is a 1 when you have leftover (otherwise it would fit in a div by 2)
    if num % 2 == 1:
        next_digit = "1"
    else:
        next_digit = "0"
        
    # Build it backwards since 8 is 1000 but % 2 trips last
    return binary(num // 2, next_digit + out)

if __name__ == "__main__":
    count_bits(7)