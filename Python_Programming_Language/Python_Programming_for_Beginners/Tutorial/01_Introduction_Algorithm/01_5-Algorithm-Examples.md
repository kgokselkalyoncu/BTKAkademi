# :zero::one: Introduction Algorithm :bookmark:
## :five: Usage of Algorithms

> SORU-01: Kullanıcıdan alınan a sayının asal sayı olup olmadığını kontrol eden kod
>> Çözüm:
>> ```pseudocode
>> 01. BEGIN
>> 02.  DEFINE INTEGER a
>> 03.  DEFINE BOOLEAN isPrime
>> 04.  isPrime = True
>> 05.  OUTPUT "Please enter the number"
>> 06.  INPUT a
>> 07.  IF a < 2 THEN
>> 08.      isPrime = False
>> 09.  ELSE
>> 10.      FOR i FROM 2 TO SQRT(a) DO
>> 11.          IF a MOD i == 0 THEN
>> 12.              isPrime = False
>> 13.              BREAK
>> 14.          ENDIF
>> 15.      END FOR
>> 16.  ENDIF
>> 17.  IF isPrime THEN
>> 18.      OUTPUT "Number is prime"
>> 19.  ELSE
>> 20.      OUTPUT "Number is not prime"
>> 21.  ENDIF
>> 22. END
>> ```

> SORU-02: Kullanıcıdan alınan N sayısına kadar olan N tane çift sayının toplamını veren kod.
>> Çözüm:
>> ```pseudocode
>> 01. BEGIN
>> 02.  DEFINE INTEGER n, sum, count, number
>> 03.  sum = 0
>> 04.  count = 0
>> 05.  number = 2
>> 06.  OUTPUT "Please enter the number"
>> 07.  INPUT n
>> 08.  WHILE count < n DO
>> 09.      sum = sum + number
>> 10.      number = number + 2
>> 11.      count = count + 1
>> 12.  END WHILE
>> 13.  OUTPUT "Sum is" & sum
>> 14. END
>> ```
>> 
> SORU-03: Kullanıcının girdiği sayının faktöriyelini hesaplayan kod
>> Çözüm:
>> ```pseudocode
>> 01. BEGIN
>> 02.  DEFINE INTEGER number, factorial
>> 03.  factorial = 1
>> 04.  OUTPUT "Please enter the number"
>> 05.  INPUT number
>> 06.  IF number == 0 OR number == 1 THEN
>> 07.       OUTPUT number & "! = " & factorial
>> 08.  ELSE
>> 09.       FOR i FROM 1 TO number DO
>> 10.           factorial = factorial * i
>> 11.       END FOR
>> 12.       OUTPUT NUMBER & "! = " & factorial
>> 13.  ENDIF
>> 14. END
>> ```
>>
> SORU-04: Kullanıcının girdiği sayının tek mi çifti mi olduğunu söyleyen kod
>> Çözüm:
>> ```pseudocode
>> 01. BEGIN
>> 02.  DEFINE INTEGER number
>> 03.  OUTPUT "Please enter the number"
>> 04.  INPUT number
>> 05.  IF number MOD 2 == 0 THEN
>> 06.      OUTPUT "Number is even"
>> 07.  ELSE
>> 08.      OUTPUT "Number is odd"
>> 09.  ENDIF
>> 10. END
>> ```
>>
> SORU-05: Kullanıcının girdiği a,b,c sayılarınından en büyüğünü bulan kod
>> Çözüm:
>> ```pseudocode
>> 01. BEGIN
>> 02.  DEFINE INTEGER a, b, c, max
>> 03.  OUTPUT "Please enter a, b and c number"
>> 04.  INPUT a, b, c
>> 05.  IF a >= b AND a >= c THEN
>> 06.      max = a
>> 07.  ELSE IF b >= a AND b >= c THEN
>> 08.      max = b
>> 09.  ELSE
>> 10.      max = c
>> 11.  ENDIF
>> 12.  OUTPUT "Maximum is ", max
>> 13. END
>> ```
>>
> SORU-06: Kullanıcının girdiği a sayısının mükemmel sayı olup olmadığını kontrol eden kod
>> Çözüm:
>> ```pseudocode
>> 01. BEGIN
>> 02.  DEFINE INTEGER number, sum
>> 03.  OUTPUT "Please enter the number"
>> 04.  INPUT number
>> 05.  FOR i FROM 1 TO number - 1 DO
>> 06.      IF number MOD i == 0 THEN
>> 07.          sum = sum + i
>> 08.      ENDIF
>> 09.  END FOR
>> 10.  IF sum == number THEN
>> 11.      OUTPUT "Perfect number"
>> 12.  ELSE
>> 13.      OUTPUT "Not a perfect number
>> 14.  ENDIF
>> 15. END
>> ```
>>
> SORU-07: Kullanıcıdan alınan N tane sayının ortalamasını bulan kod
>> Çözüm:
>> ```pseudocode
>> 01. BEGIN
>> 02.  DEFINE INTEGER n, sum, number, average
>> 03.  OUTPUT "Please enter n number"
>> 04.  INPUT n
>> 05.  sum = 0
>> 06.  FOR i FROM 1 TO n DO
>> 07.      OUTPUT "Please enter the number"
>> 08.      INPUT number
>> 09.      sum = sum + number
>> 10.  END FOR
>> 11.  average = sum / n
>> 12.  OUTPUT "Average is", average
>> 13.  END
>> ```
>>
> SORU-08: Kullanıcının girdiği a sayısının kaç basamaklı olduğunu bulan kod
>> Çözüm:
>> ```pseudocode
>> 01. BEGIN
>> 02.  DEFINE INTEGER number, count
>> 03.  OUTPUT "Please enter the number"
>> 04.  INPUT number
>> 05.  count = 0
>> 06.  WHILE number != 0 DO
>> 07.      number = number / 10
>> 08.      count = count + 1
>> 09.  END WHILE
>> 10.  OUTPUT "Number of digits is", count
>> 11.  END
>> ```
>>
> SORU-09: Kullanıcının girdiği a sayısının tersini yazan kod
>> Çözüm:
>> ```pseudocode
>> 01. BEGIN
>> 02.  DEFINE INTEGER number, reversed, digit 
>> 03.  OUTPUT "Please enter the number"
>> 04.  INPUT number
>> 05.  reversed  = 0
>> 06.  WHILE number > 0 DO
>> 07.      digit = number MOD 10
>> 08.      reversed = reversed * 10 + digit
>> 09.      number = number / 10
>> 10.  END WHILE
>> 11.  OUTPUT "Reversed number is", reversed
>> 12.  END
>> ```
>>
> SORU-10: Kullanıcının girdiği a sayısına kadar olan fibonaci serisini ekrana yazan kod
>> Çözüm:
>> ```pseudocode
>> 01. BEGIN
>> 02.  DEFINE INTEGER n, a, b, next 
>> 03.  a = 0
>> 04.  b = 1
>> 05.  OUTPUT "Please enter the number"
>> 06.  INPUT number 
>> 07.  OUTPUT a, b
>> 08.  FOR i FROM 3 TO n DO
>> 09.      next = a + b
>> 10.      OUTPUT next
>> 11.      a = b
>> 12.      b = next
>> 13.  END FOR
>> 14.  END
>> ```