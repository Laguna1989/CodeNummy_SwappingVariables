def swap_muldiv(a, b):
    a = a * b
    b = a / b
    a = a / b

    return a, b
