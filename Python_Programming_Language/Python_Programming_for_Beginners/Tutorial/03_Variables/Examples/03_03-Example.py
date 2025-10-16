A = 2
B = 3
print(A) # 2
print(B) # 3
# A da bulunan değeri B ye ve B de bulunan değeri A ya
# aktarmak istiyoruz. Bunun için üçüncü bir değişkene
# ihtiyacımız var.
C = A
A = B
B = C
print(A) # 3
print(B) # 2
# python da bu yer değiştirme işleminin bir kolay yolu var
A,B = B,A
print(A) # 2
print(B) # 3
# Bu değişkenlerin değiştirilme işlemi metinsel tüm veri
# tiplerinde geçerlidir.
name = "Göksel"
surname = "Kalyoncu"
print(name, surname) # Tek satırda yan yana yazmak için
# output: Göksel Kalyoncu
name, surname = surname, name
print(name, surname) # Tek satırda yan yana yazmak için
# output: Kalyoncu Göksel