def count_bits(n):
    
    rest=" " 
    licznik= 0
    while n>0:
        rest=str(n%2) + rest
        n= n//2
    for element in range(0 , len(rest)):
        if rest[element] == '1':
            licznik=licznik+1
    return licznik 
