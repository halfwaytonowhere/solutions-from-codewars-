
def binary_array_to_number(arr):
    suma=0
    licznik=0
    l1=range(len(arr))
    for i in list(reversed(l1)):
        suma=suma + (pow(2,licznik))*arr[i]
        licznik=licznik+1
       
    return suma
