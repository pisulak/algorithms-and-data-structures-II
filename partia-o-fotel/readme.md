# Treść zadania

W Gęstwinie, rozległym i niebezpiecznym lesie w Eastanatos, zaczęły dziać się rzeczy niepokojące. Ludzie, którzy wyruszają w głąb lasu, nierzadko nie wracają. Jan Śnieg, Władca Północy, postanowił zabezpieczyć teren, wysyłając patrole, aby chronić podróżnych i monitorować działania wroga. W szczególności, że walczy on o tytułowy Fotel, więc eliminacja wszystkich wrogów i dbałość o poddanych jest całkowicie na miejscu. Z powodu ograniczonych zasobów ludzkich, nie wszystkie ścieżki w Gęstwinie mogą być patrolowane. Celem jest zapewnienie maksymalnego bezpieczeństwa przy użyciu minimalnej liczby patroli.

Dodatkowo z obserwacji wynika, że na różnych odcinkach są różne szanse na nagłą śmierć (a zdarzenia te są niezależne), więc patrolowane mają być takie drogi, które dadzą jak największą szansę na szczęśliwy powrót wszystkich patroli każdego dnia. Na szczęście wybór, które drogi mają być patrolowane, nie jest bardzo trudny, bo liczba dróżek w lesie jest tylko nieznacznie większa od liczby rozwidleń.

### WEJŚCIE

W pierwszej linii wejścia podana jest liczba n - punktów strategicznych w Gęstwinie (np. rozwidlenia ścieżek, starożytne ruiny), gdzie n jest liczbą całkowitą. Punkty strategiczne numerujemy od zera. Liczba m określa ilość ścieżek w lesie, gdzie m jest liczbą całkowitą. W kolejnych m liniach podane są szanse na bezpieczny powrót z patrolu na poszczególnych ścieżkach. Każda linia zawiera identyfikatory końców ścieżki (numery punktów strategicznych w Gęstiwnie) oraz prawdopodobieństwo przeżycia x (liczba rzeczywista).

n < 100000
m < 1000000
0 < x < 1

### WYJŚCIE

Program powinien wypisać prawdopodobieństwo powrotu wszystkich patroli bez żadnych ofiar śmiertelnych z dokładnością do 5 miejsc po przecinku.

## PRZYKŁAD:

### DANE WEJŚCIOWE

5 7
4 3 0.4
3 1 0.3
1 4 0.1
3 2 0.8
1 0 0.5
0 4 0.4
1 2 0.2

### PRZYKŁADOWE DANE WYJŚCIOWE

0.06400
