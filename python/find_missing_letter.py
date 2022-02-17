def find_missing_letter(chars):
    l=len(chars)
    missing =0
    for nr in range(0,l-1):

        if ord(chars[nr+1])-ord(chars[nr])>1:
            missing=ord(chars[nr])+1
       
    return chr(missing)
