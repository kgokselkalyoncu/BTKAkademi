# :zero::one: Introduction Algorithm :bookmark:
## :five: Usage of Algorithms

> SORU-01: Kullanıcıdan alınan a sayının asal sayı olup olmadığını kontrol eden kod
>> Çözüm:
>> ```pseudocode
>> 01. BEGIN
>> 02. DEFINE INTEGER A
>> 03. DEFINE BOOLEAN ISPRIME
>> 04. ISPRIME = True
>> 05. OUTPUT "Please enter the number"
>> 06. INPUT A
>> 07. IF A < 2 THEN
>> 08.     ISPRIME = False
>> 09. ELSE
>> 10.     FOR I FROM 2 TO SQRT(A) DO
>> 11.         IF A MOD I == 0 THEN
>> 12.             ISPRIME = False
>> 13.             BREAK
>> 14.         ENDIF
>> 15.     END FOR
>> 16. ENDIF
>> 17. IF ISPRIME THEN
>> 18.     OUTPUT "Number is prime"
>> 19. ELSE
>> 20.     OUTPUT "Number is not prime"
>> 21. ENDIF
>> 22. END
>> ```

> SORU-02: Kullanıcıdan alınan N sayısına kadar olan N tane çift sayının toplamını veren kod.
>> Çözüm:
>> ```pseudocode
>> 01. BEGIN
>> 02. DEFINE INTEGER N, SUM, COUNT, NUMBER
>> 03. SUM = 0
>> 04. COUNT = 0
>> 05. NUMBER = 2
>> 06. OUTPUT "Please enter the number"
>> 07. INPUT N
>> 08. WHILE COUNT < N DO
>> 09.     SUM = SUM + NUMBER
>> 10.     NUMBER = NUMBER + 2
>> 11.     COUNT = COUNT + 1
>> 12. END WHILE
>> 13. OUTPUT "Sum is" & SUM
>> 14. END
>> ```


> SORU-03: Kullanıcının girdiği sayının faktöriyelini hesaplayan kod
>> Çözüm:
>>
>>
> SORU-04: Kullanıcının girdiği sayının tek mi çifti mi olduğunu söyleyen kod
>> Çözüm:
>>
>>
> SORU-05: Kullanıcının girdiği a,b,c sayılarınından en büyüğünü bulan kod
>> Çözüm:
>>
>>
> SORU-06: Kullanıcının girdiği a sayısının mükemmel sayı olup olmadığını kontrol eden kod
>> Çözüm:
>>
>>
> SORU-07: Kullanıcıdan alınan N tane sayının ortalamasını bulan kod
>> Çözüm:
>>
>>
> SORU-08: Kullanıcının girdiği a sayısının kaç basamaklı olduğunu bulan kod
>> Çözüm:
>>
>>
> SORU-09: Kullanıcının girdiği a sayısının tersini yazan kod
>> Çözüm:
>>
>>
> SORU-10: Kullanıcının girdiği a sayısına kadar olan fibonaci serisini ekrana yazan kod