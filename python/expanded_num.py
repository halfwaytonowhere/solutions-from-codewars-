def expanded_num(num):
    multiplier=10
    res=""
    while num>0:
        res+=" "+repr(num%multiplier)
        num=num-(num%multiplier)
        multiplier=multiplier*10
    spliter=res.split(" ")
    n=""
    for element in spliter[::-1]:
        if element=="0":
            pass
        elif element=="":
            pass
        else:
            n+=element+" + "

    result=n[0:len(n)-2]
    return result.strip()





