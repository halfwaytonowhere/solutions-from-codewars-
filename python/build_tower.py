def build_tower(n_floors):
    flo=[]
    spaces=1
    stars=1
    for i in range(0,n_floors):
        flo.append(" "*(n_floors-spaces)+"*"*stars+" "*(n_floors-spaces))
        spaces=spaces+1
        stars=stars+2
    return flo

