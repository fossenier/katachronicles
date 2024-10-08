def increment_string(strng: str):
    # Set up the basic case where no numbers are found, so 1 is appended
    base = strng
    numbers = "1"
    digits = 1
    
    # Check to see if there is a numeric ending (and count the leading 0s!)
    for i in range(len(strng)):
        if strng[i:].isnumeric():
            base = strng[:i]
            numbers = str(int(strng[i:]) + 1)
            digits = len(strng[i:])
            break
    
    # Add the new number protion, including leading zeros if needed
    len_diff = digits - len(numbers)
    return base + "0" * len_diff + numbers

if __name__ == "__main__":
    print(increment_string("99"))