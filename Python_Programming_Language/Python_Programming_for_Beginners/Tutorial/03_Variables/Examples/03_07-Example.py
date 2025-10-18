print(4+7*2)        # işlem önceliği * > + olduğundan 4+14 => 18
print(5+4*2**3)     # işlem önceliği ** > * > + olduğundan 5+4*8 => 5+32 => 37
print(2+4*3/2)      # işlem önceliği * > / > + olduğundan 2+12/2 => 2+6 => 8.0 bölme işlemleri float döner
print(2+3*5)        # işlem önceliği * > + olduğundan 2+15 => 17
print((2+3)*5)      # işlem önceliği () > * olduğundan 5*5 => 25