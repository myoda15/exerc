def ft_atoi(s):
    i = 0
    sign = 1
    res = 0

    # ignorar espaços e caracteres ASCII 9–13
    while i < len(s) and (s[i] == ' ' or 9 <= ord(s[i]) <= 13):
        i += 1

    # verificar sinal
    if i < len(s) and (s[i] == '+' or s[i] == '-'):
        if s[i] == '-':
            sign = -1
        i += 1

    # converter números
    while i < len(s) and '0' <= s[i] <= '9':
        res = res * 10 + (ord(s[i]) - ord('0'))
        i += 1

    return sign * res

print(ft_atoi("-434345422876"))