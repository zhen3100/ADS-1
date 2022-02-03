# ADS-1 Простые числа


![GitHub pull requests](https://img.shields.io/github/issues-pr/NNTU-CS/ADS-1)
![GitHub closed pull requests](https://img.shields.io/github/issues-pr-closed/NNTU-CS/ADS-1)

Срок выполнения задания:

**до 27.02.22** ![Relative date](https://img.shields.io/date/1645995600)


## Задание

> Написать прототип библиотеки для работы с простыми (prime) числами.

**Состав проекта**

```C++
   - bool checkPrime(unsigned int value) - проверка числа на простоту.
   - unsigned long long nPrime(unsigned n) - нахождение n-ого простого числа (в ряду).
   - unsigned long long nextPrime(unsigned long long value) - нахождение ближайшего следующего простого числа к value.
   - unsigned long long sumPrime(unsigned int hbound) - сумма всех чисел до hbound (не включая его)
 ```



## Пояснение

Требуется написать несколько функций на языках С/С++, выполняющих поставленные задачи.

Функции должны иметь заданную сигнатуру и располагаться в файле **alg.cpp**:


```C++
bool checkPrime(unsigned int value) {

}
```

- **value** - проверяемое значение

Функция возвращает **true**, если число простое и **false** в противном случае.


```C++
unsigned long long nPrime(unsigned n) {

}
```

- **n** - n-ое число в ряду. Например, 2 - первое простое число, 3 - второе, 5 - третье... 

Функция возвращает найденное простое число.

```C++
unsigned long long nextPrime(unsigned long long value) {

}
```

- **value** - исходное число, начиная с которого мы ищем ближайшее простое. Само **value** при поиске не учитывается. Например, для чила 4 следующим простым будет 5, а для 11 следующим простым будет 13.

Функция возвращает найденное простое число.

```C++
unsigned long long sumPrime(unsigned int hbound) {
   
}
```

Функция находит сумму простых чисел до **hbound** (сама граница в сумму не включается)

Функция возвращает сумму простых чисел.

Функции должны располагаться в файле **src/alg.cpp**.