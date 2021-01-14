# Thread-connection-speed-test
Связь потоков: в поисках оптимального ввода и вывода endl на \n

 Протестируем с end и \n, а также отвязывание поток cin и cout c помощью cin.tie(nullptr)
 
 Возьмем файл с 10000 строками и запустим:
        endl
        1) sqnums 1 <numbers.txt >numbers1.txt 
        \n
        2) sqnums 2 <numbers.txt >numbers2.txt 
        отвязывание потоков + \n
        3) sqnums 3 <numbers.txt >numbers3.txt 
 
 Также существует команда ios_base::sync_with_stdio(false), которая позволяет сильно ускорить поток cin и cout
