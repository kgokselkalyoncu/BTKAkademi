# :zero::three: Variables :bookmark:
## :two: Naming Variables
> ### Description
> Değişkenlere verilen isimlerin bellirli bir kuralı vardır. Yazımsal kurallar ve mantıksal kurallar
> 
> **Yazımsal kurallar**, programin çalıştırılması için önemlidir. Bunlar şöyledir.
> * Bir değişken adı bir harf veya alt çizgi karakteriyle başlamalıdır. 
> * Bir değişken adı bir sayıyla başlayamaz. 
> * Bir değişken adı yalnızca alfa-sayısal karakterler ve alt çizgiler (A-z, 0-9 ve _) içerebilir. 
> * Değişken adları büyük/küçük harfe duyarlıdır (age, Age ve AGE üç farklı değişkendir). 
> * Bir değişken adı, [Python anahtar](https://www.w3schools.com/python/python_ref_keywords.asp) sözcüklerinden herhangi biri olamaz.
> 
> **Mantıksal kurallar**, saklanacak verinin niteliğine uygun isimlendirme yapılmalıdır.
> * "Age" adında bir değişken de metinsel bir ifade olması beklenmez
> * "Name" adında bir değişken de sayısal bir ifade olması beklenmez
> * "IsAdmin" adında bir değişken de mantıksal(True/False - 1/0) olmayan bir ifade olması beklenmez
> 
> :heavy_check_mark: Uygun değişken isimleri için örnekler
> * myvar = "My Variable"
> * my_var = "My Variable"
> * _my_var = "My Variable"
> * myVar = "My Variable"
> * MYVAR = "My Variable"
> * myvar2 = "My Variable"
> 
> :x: Uygun olmayan değişken isimleri için örnekler
> * 2myvar = "My Variable"
> * my-var = "My Variable"
> * my var = "My Variable"
> 
> Mantısak ve Mantıksal olmayan değişken isimleri için örnekler

| Variable Name | Uygun Değer                 | Uygun Olmayan Değer |
|---------------|-----------------------------|---------------------|
| age           | :heavy_check_mark: 35       | :x: "otuzbeş"       |
| name          | :heavy_check_mark: "Göksel" | :x:123456           |
| isAdmin       | :heavy_check_mark: True     | :x:"Admin Değil"    |
