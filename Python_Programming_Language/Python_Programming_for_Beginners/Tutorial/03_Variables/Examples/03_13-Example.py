# a,b,c değişkenleri tanımlayım içerisine 'Python' ataması yapalım
a = b = c = 'Python'
print(a,b,c)
# Python da değişkenin tipini hangi komut ile öğreniriz?
a = 'Merhaba'
b = 12
c = 4.5
d = True
print(type(a))    # <class 'str'>
print(type(b))    # <class 'int'>
print(type(c))    # <class 'float'>
print(type(d))    # <class 'bool'>

# x=3, y=5 ve x = x + y komutunu kısa şekilde yazalım
x = 3
y = 5
x += y      # x = x + y
print(x)    # output: 8

# i ve j değişkenlerinin değerlerini tek satırda yer değiştirin
i = 'A'
j = 'B'
print(i,j)    # output: A B
i,j = j,i
print(i,j)    # output: B A

# k = 17+23-8, m = k / 4 + 7  işleminde m nin değeri kaç olur
k = 17+23-8
m = k / 4 + 7
print(m)    # output: k = 40 - 8 = 32, m = 32 / 4 + 7 = 8.0 + 7 = 15.0

# Python da kullanılan keywords listesi hangi komut ile alınır.
import keyword
print(keyword.kwlist) # ['False', 'None', 'True', 'and', 'as', 'assert', 'async', 'await', 'break', 'class', 'continue', 'def', 'del', 'elif', 'else', 'except', 'finally', 'for', 'from', 'global', 'if', 'import', 'in', 'is', 'lambda', 'nonlocal', 'not', 'or', 'pass', 'raise', 'return', 'try', 'while', 'with', 'yield']

# A=23, B=str(A)+'4' işleminin sonucu nedir?
A=23
B=str(A)+'4'
print(B)        # output: 234
print(type(B))  # output: <class 'str'>