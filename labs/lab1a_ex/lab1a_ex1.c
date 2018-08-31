/**
  ******************************************************************************
  * \file    main.c
  * \author  Александр Смирнов
  * \version 1.0.0
  * \date    1.08.2018
  * \brief   Пример программы для выполнения лабораторной работы № 1а.
  *          Программа выводит кубы всех нечетных чисел до N включительно.
  *          Граничные условия: 0 < N <= 20
  *          Пример ввода 1:
  *          5
  *          Пример вывода 1:
  *          1
  *          27
  *          125
  ******************************************************************************
  */

/* Подключение функций стандартного ввода/вывода
   (printf, scanf, puts, gets, putchar, getchar и т.д.)
   из стандартной библиотеки C */
#include <stdio.h>

/* Функция main. Точка входа в программу */
int main(void)
{
    /* Объявление переменной, в которую будет сохраняться введенное число */
    unsigned int n;

    /* Печать строки приветствия в стандартный поток.
       Функция printf - функция форматированного вывода. У функции множество
       возможностей, которые позволяют успешно выводить сообщения в
       стандартный поток не прибегая к написанию дополнительного кода.
       В конце строки установлен символ '\n' для перевода на новую строку.
       Символы \n (новая строка), \t (табуляция), \r (возврат каретки) и т.д.
       называются управляющими кодами и они интерпретируются как один ASCII код. */
    printf("Print cubes of odd numbers\n");

    /* Бесконечный цикл.
       Программа для ПК, в отличии от программы для МК, может не иметь
       бесконечного цикла. При отсутствии бесконечного цикла
       после окончание работы программы управление передается
       операционной системе. Для повторного ввода потребуется запустить
       программу заново.
       В данному случае для удобства организован бесконечный цикл.
       Выход из программы осуществляется комбинацией клавиш Ctrl - C */
    for(;;)
    {
        /* Функция scanf - аналог функции printf,
           осуществляющая форматированный ввод.
           В данном примере ожидается ввод беззнакового целого числа и проверка
           количества преобразованных значений.
           Результат помещается в переменную n.
           Переменная n (как и все аргументы функции) передается в scanf
           через указатель для того, чтобы scanf смогла записать в n результат ввода.
           Строка " %u" называется строкой форматирования и указывает,
           что scanf будет ожидать ввода беззнакового (unsigned) целого числа.
           Функция возвращает количество успешно прочитанных значений.
           В данном случае делается попытка прочитать одно значение. */
        if (scanf("%u", &n) == 1)
        {
            /* Проверяем на граничные условия.
               Если введенное число строго больше 20 или равно нулю,
               то печатаем сообщение и начинаем цикл заново
               при помощи оператора continue.
               Так как scanf ожидает беззнаковое число, то проверка
               на отрицательные числа не требуется */
            if (n > 20 || n == 0)
            {
                printf("Incorrect input\n"); /* Сообщаем о некорректном вводе */
                continue;
            }

            /* Организуем цикл для перебора всех чисел от 1 до n включительно */
            unsigned int i;
            for (i = 1; i <= n; i++)
            {
                /* Проверяем число на нечетность с помощью оператора
                   % - взятие остатка от деления */
                if (i % 2 == 1)
                {
                    /* Строка "%u\n" содержит содержит спецификатор типа %u,
                       означающий, что в данном месте следует напечатать целое
                       беззнаковое число. Перевод из числа в ASCII представление
                       printf производит самостоятельно.
                       Другими популярными спецификаторами типа являются
                       %d - печать целого числа со знаком,
                       %f - печать числа с плавающей запятой,
                       %s - печать строки,
                       %x - печать целого числа в шестнадцатеричном представлении.
                       Функция printf имеет множество спецификаторов, позволяющих
                       управлять позицией, количеством символов и т.д. */
                    printf("%u\n", i * i * i);
                }
            }
        }
        else
        {
            /* Если при вводе строки вместо ожидаемого беззнакового числа введена,
               например, строка, то scanf возвращает отличное от 1 значение,
               что означает ошибку.
               При этом неверно введенные значения остаются в буфере чтения и
               повторный вызов scanf вновь приводит к ошибке.
               Для исключения повторных ошибок очищаем буфер ввода. */
            while(getchar() != '\n'); /* Читаем посимвольно из буфера ввода, до тех
                                         пор пока не попадется символ '\n'.
                                         Функция getchar возвращает один символ
                                         из потока ввода. */
            printf("Incorrect input\n"); /* Сообщаем о некорректном вводе */
        }
    }
}