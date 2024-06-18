# Treść zadania

Loptr, używając swoich zdolności do podróżowania w czasie, postanawia przewidzieć własną lokalizację w różnych momentach historycznych i alternatywnych rzeczywistościach. Jego celem jest zrozumienie, w jakich okresach czasowych i wymiarach jest najbardziej prawdopodobne, że będzie mógł zostać odnaleziony lub zlokalizowany przez inne postacie, takie jak Siekiera, analityk Suibom czy agenci YBS.

Loptr przypisał numery wymiarom i epokom, w których może się znaleźć:
0 - starożytny Rzym,
1 - Boski dwór,
2 - nowoczesna Ziemia,
3 - alternatywna linia czasowa,
4 - królestwo ognistych karłów,
5 - YBS.

### WEJŚCIE

Program na wejście otrzymuje dwie godziny w formacie HH:mm, które mówią o przedziale czasowym do zweryfikowania, a następnie przyjmuje numer wymiaru lub epoki, w której Loptr może się znaleźć.

0 < HH <= 24
0 <= mm < 60

### WYJŚCIE

Należy wypisać jakie jest prawdopodobieństwo pojawienia się Loptra, w wybranym wymiarze w danym przedziale czasowy. Wynik powinien być podany z dokładnością do dwóch miejsc po przecinku.

## PRZYKŁAD:

### DANE WEJŚCIOWE

8:00
22:00
0

### PRZYKŁADOWA FUNKCJA:

int Loptr(int HH, int mm){
if(HH >= 8 && HH < 15) return 0;
else if(HH >= 15 && HH < 22) return 1;
return 2;
}

### PRZYKŁADOWE DANE WYJŚCIOWE

0.50

## UWAGA:

Zadanie powinno być rozwiązane metodą Monte Carlo, która idealnie nadaje się do symulacji prawdopodobieństw w złożonych, niepewnych scenariuszach, takich jak wielowymiarowe podróże w czasie i przestrzeni, gdzie tradycyjne metody mogą nie być wystarczające.
