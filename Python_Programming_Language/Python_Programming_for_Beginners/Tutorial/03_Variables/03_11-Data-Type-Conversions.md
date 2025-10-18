# :zero::three: Variables :bookmark:
## :one::one: Data Type Conversions
> ### Description
> 
> Python da tipler arası dönüşüm için aşağıda ki metotlar kullanılır
> 
> - Herhangi bir veri tipinden tamsayı veri tipine dönüş için int()
> - Herhangi bir veri tipinden ondalıklı sayı veri tipine dönüş için float()
> - Herhangi bir veri tipinden mantıksal veri tipine dönüş için bool()
> - Herhangi bir veri tipinden metinsen veri tipine dönüş için str()
> 
> ``` python
> # Veri tiplerine göre değişkeler
> intData = 5             # int veri tipi
> floatData = 6.7         # float veri tipi
> boolData = False        # bool veri tipi
> strData = "5" # str veri tipi
> 
> # Tüm veri tiplerinin int e dönüşümü
> print(intData, "\t=> ",  type(intData))                # output: 5(int)
> print(int(floatData), "\t=> ", type(int(floatData)))   # output: 6(int) sadece tam kısmını aldı.
> print(int(boolData), "\t=> ", type(int(boolData)))     # output: 0(int) True => 1 / False => 0
> print(int(strData), "\t=> ", type(int(strData)))       # output: 5(int)
> 
> print("------------------------------")
> 
> # Tüm veri tiplerinin float a dönüşümü
> print(floatData, "\t=> ",  type(floatData))            # output: 6.7(float)
> print(float(intData), "\t=> ", type(float(intData)))   # output: 5.0(float) sadece tam kısmını aldı.
> print(float(boolData), "\t=> ", type(float(boolData))) # output: 0.0(float) True => 1 / False => 0
> print(float(strData), "\t=> ", type(float(strData)))   # output: 5.0(float)
> 
> print("------------------------------")
> 
> # Tüm veri tiplerinin bool a dönüşümü
> print(boolData, "\t=> ",  type(boolData))              # output: False(bool)
> print(bool(intData), "\t=> ", type(bool(intData)))     # output: True(bool) 0 => False / otherwise => True
> print(bool(floatData), "\t=> ", type(bool(floatData))) # output: True(bool) 0 => False / otherwise => True
> print(bool(strData), "\t=> ", type(bool(strData)))     # output: True(bool) 0 => False / otherwise => True
> 
> print("------------------------------")
> 
> # Tüm veri tiplerinin string e dönüşümü
> print(strData, "\t\t=> ",  type(strData))              # output: 5(str)
> print(str(intData), "\t\t=> ", type(str(intData)))     # output: 5(str)
> print(str(floatData), "\t=> ", type(str(floatData)))   # output: 6.7(str)
> print(str(boolData), "\t=> ", type(str(boolData)))     # output: False(str)
> ```