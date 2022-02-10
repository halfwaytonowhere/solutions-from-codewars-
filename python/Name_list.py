def spin_words(sentence):
    tablica_slow = sentence.split(" ")
    nowe=''
    spacja=' '
    for i in range(0,len(tablica_slow)):
        element=len(tablica_slow[i])
        if element<=5:
            nowe=nowe+tablica_slow[i]+spacja
        else:
            nowe=nowe+tablica_slow[i][::-1]+spacja

    print(nowe.rstrip()+ ".")
    





