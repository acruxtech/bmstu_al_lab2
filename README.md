# bmstu_al_lab2

# Лабораторная работа 2 - Циклы и условия (05.10.2024)

## Задание 1
С клавиатуры вводятся числа X, Y, Z. Необходимо записать условие, которое является истинным, когда:
* каждое из чисел X и Y нечетное;
* только одно из чисел X и Y меньше 20;
* хотя бы одно из чисел X и Y равно нулю;
* каждое из чисел X, Y, Z отрицательное;
* только одно из чисел X, Y и Z кратно пяти;
* хотя бы одно из чисел X, Y, Z больше 100.

В случае, если условие выполняется вывести на экран - `condition is true`, иначе `condition is false`.


## Задание 2
Клетка на шахматной доски определяется парой натуральных чисел, каждое из которых не превосходит 8: первое число — номер вертикали (при счете слева направо), второе — номер горизонтали (при счете снизу вверх).
Для пары удобно использовать тип `std::pair`, чтобы обратиться к первому элементу пары, нужно указать к переменной приписать `.first`, чтобы обратиться ко второму элементу - `.second`.

**Пример**

Продемонстрируем как считать с клавиатуры данные и записать их в пару:
```cpp
using byte = unsigned char;
std::pair<byte, byte> position;
std::cin >> position.first >> position.second;
```

Продемонстрируем, как задать значения пары при инициализации и выведем их на экран.
```cpp
using byte = unsigned char;
std::pair<byte, byte> position(0, 4);
std::cout << position.first << " " << position.second;
```

Даны две координаты шахматных фигур positionA(a, b) и positionB(c, d). Числа a, b, c, d не превосходят 8.
**Требуется:**
* На поле positionA(a, b) расположена ладья. Записать условие, при котором она угрожает полю positionB(c, d).
* На поле positionA(a, b) расположен слон. Записать условие, при котором он угрожает полю positionB(c, d).
* На поле positionA(a, b) расположен король. Записать условие, при котором он может одним ходом попасть на поле positionB(c, d).
* На поле positionA(a, b) расположен ферзь. Записать условие, при котором он угрожает полю positionB(c, d).
* На поле positionA(a, b) расположена белая пешка. Записать условие, при котором она может одним ходом попасть на поле positionB(c, d):
  * при обычном ходе;
  * когда она "бьет" фигуру или пешку соперника.


## Задание 3
Напечатать таблицу умножения на 7:
```
1 х 7 = 7
2 х 7 = 14
...
9 х 7 = 63
```

Напечатать таблицу умножения на `N`, которое вводится с клавиатуры:
```
1 х N = 1*N
2 х N = 2*N
...
9 х N = 9*N
```


## Задание 4
Найти и вывести на экран:
* произведение всех целых чисел от 8 до 15;
* произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры; `1 < a < 20`);
* произведение всех целых чисел от 1 до b (значение b вводится с клавиатуры; `1 < b < 20`);
* произведение всех целых чисел от a до b (значения a и b вводятся с клавиатуры; `b >= a`).

## Полезные ссылки и литература
* https://github.com/bmstu-iu8-cpp/cpp-beginner-2017/blob/master/lab2/lab2_1.cpp
