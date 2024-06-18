# Treść zadania

Podczas podróży przez galaktykę, Mendoludanin odkrywa starożytny artefakt zawierający zagadkę opartą na sekwencjach orbit planetarnych. Zgodnie z legendą, rozwikłanie tej zagadki pozwoli zlokalizować układ planetarny, na którym znajduje się tajemnicza planeta związana z przeszłością Grogu i jego rasy. Każda sekwencja reprezentuje orbity planet w różnych układach planetarnych, a kluczowym zadaniem jest odnalezienie odpowiedniego układu i konkretnej planety.

Jeżeli określimy orbitę ciała niebieskiego jako wartość, która jest resztą z dzielenia okresu orbitalnego przez 101, to gdy zapiszemy tak orbity wszystkich planet w wybranym układzie planetarnym, uzyskamy pewną sekwencję wielu liczb z zakresu od 0 do 100. Taka sekwencja liczb tworzy jeden okres, a w nim co najmniej dwa razy pojawia się pewna subsekwencja liczb - x. Suma dwóch poprzednich miejsc wystąpienia subsekwencji mówi o tym, gdzie subsekwencja pojawi się po raz kolejny w danym okresie. Pierwsza pozycja subsekwencji x wykraczająca poza zakresu badanego okresu, pomniejszona o ilość elementów w tym okresie, będzie indeksem wystąpienia tej subsekwencji w kolejnym okresie liczb. Kolejny okres liczb to odpowiednio zmodyfikowane okresy orbitalne innego, najbliższego układu planetarnego. Dodatkowo indeks ten wskazuje na planetę, w najbliższym układzie planetarnym, której masa jest taka sama, jak planety u której wykryto tą subsekwencję po raz pierwszy (indeks pierwszego wystąpienia subsekwencji).

### WEJŚCIE

Program wczytuje liczbę naturalną v, będącą ilością planet w badanym układzie planetarnym. Następnie program powinien wczytać v liczb naturalnych, które są resztą z dzielenia okresu orbitalnego planet przez 101. W kolejnym kroku algorytm powinien wczytać liczbę naturalną p, a na koniec p liczb naturalnych reprezentujących subsekwencję x.

0 <= liczby w sekwencji x <= 100
0 <= V, P <= 2 000 000 000

### WYJŚCIE

Wyświetl pozycję pierwszego wystąpienia subsekwencji w kolejnym okresie. Zakładając, że sekwencje numerowane są od 0.

## PRZYKŁAD:

### DANE WEJŚCIOWE

16
1 1 1 2 3 88 99 24 1 2 3 1 2 3 99 39
2
2 3

### PRZYKŁADOWE DANE WYJŚCIOWE

5

## UWAGA:

Zadanie powinno być samodzielną implementacją algorytmu Rabina-Karpa.
