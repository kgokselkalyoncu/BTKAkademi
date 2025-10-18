i = 0         # i değişkeni tanım ve atama işlemi
print(i)      # output: 0
i = i + 10    # i değişkenine kendisinin değerine 10 eklenerek tekrar kendisine atanması
print(i)      # output: 10
i += 10       # bu işleme i = i + 10  yazımın kısa halidir.
print(i)      # output: 20

# Diğer tüm işlemler benzer şekilde yazılabilir
i -= 4        # i = i - 4
print(i)      # output: 16
i *= 3        # i = i * 3
print(i)      # output: 48
i /= 5        # i = i / 5
print(i)      # output: 9.6
i **= 2       # i = i ** 2
print(i)      # output: 92.16
i //= 9       # i = i // 9
print(i)      # output: 10
i %= 7        # i = i % 7
print(i)      # output: 3