# Пример лабораторной работы 1а

Примеры работ следует компилировать и запускать на персональном компьютере.

Для этого понадобится компилятор любой ANSI C компилятор, например, `gcc`.

## Установка компилятора Windows

В операционной системе Windows потребуется установка порта компилятора `gcc`
под названием [MinGW](https://sourceforge.net/projects/mingw/files/).
После установки программы потребуется перезагрузка.
Во время установки обязательно убедитесь в наличии галочки о добавлении пути
в переменную `PATH`. Наличие пути к программе в переменной `PATH` позволяет
запускать программу по имени не указывая явно полного (абсолютного)
к программе.

## Установка компилятора Linux

В операционных системах Linux на основе Debian (например, Ubuntu)
 достаточно выполнить команду

```bash
sudo apt install build-essential
```

## Запуск компилятора Windows

Работа с компилятором производится из командной строки.
Необходимо запустить командую строку и перейти в директорию с исходными файлами.
Рекомендуется использовать Windows PowerShell. В Windows 10 в меню Файл
Проводника можно запустить PowerShell в текущей директории.
Для навигации следует использовать команду `cd` для смены директории, например,

```powershell
cd .\Downloads\embedded_system_course\labs\lab1a_ex
```

а также команду `ls` для просмотра содержания директории.

__Если пусть до директории содержит пробелы в именах директории,__
__то следует заключать путь в кавычки, например,__

```powershell
cd '.\Отладочные средства микропроцессорных систем\embedded_system_course\labs\lab1a_ex'
```

Для запуска компиляции, находясь в директории с исходными файлами,
следует выполнить команду

```powershell
gcc lab1a_ex1.c -o lab1a_ex1.exe
```

`lab1a_ex1.c` - указывает на имя исходного файла для компиляции,
`-o lab1a_ex1.exe` - имя исполняемого файла - результата компиляции.
Имя исполняемого файл может быть произвольным.

Запуск программы осуществляется простым вызовом программы по имени

```powershell
.\lab1a_ex1.exe
```

## Запуск компилятора Linux

Для запуска компиляции, находясь в директории с исходными файлами, следует выполнить команду

```bash
gcc lab1a_ex1.c -o lab1a_ex1
```

`lab1a_ex1.c` - указывает на имя исходного файла для компиляции,
`-o lab1a_ex1` - имя исполняемого файла - результата компиляции.

Запуск программы осуществляется простым вызовом программы по имени

```bash
./lab1a_ex1
```

Для удобства компиляции в директории находится `Makefile`
для сборки программ с помощью программы `make`.

Например, компиляция примера номер 1 осуществлять командой

```bash
make ex1
```

Компиляция всех примеров

```bash
make
```

Удаление результатов компиляции

```bash
make clean
```
