def to_camel_case(text):
    capitalize = False
    result = ""
    
    for c in text:
        if c in ["-", "_"]:
            capitalize = True
            continue
        result += c.capitalize() if capitalize else c
        capitalize = False
    
    return result

if __name__ == "__main__":
    print(to_camel_case("hello_my-nameIsjeff"))