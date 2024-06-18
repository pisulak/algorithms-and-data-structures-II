# Treść zadania

Bohaterem ostatniego opowiadania jest nauczyciel chemii o imieniu pochodzącym jeszcze ze średniowiecznej Polski, Walcerz. Walcerz Czarny mieszka w województwie małopolskim i zajmuje się edukacją młodzieży. Niestety u naszego bohatera zostaje zdiagnozowany rak w trzecim stadium, a lekarze rokują, że pozostały mu jedynie dwa lata życia. Naszego bohatera życie nie oszczędza, a złe rzeczy doświadczają go na każdym kroku. Mimo wszystko, po usłyszeniu prognoz od lekarzy, mężczyzna wyzbywa się wszelkich lęków i pragnąc zabezpieczyć swoją rodzinę finansowo decyduje się wkroczyć do niebezpiecznego świata napojów chłodzących (bezalkoholowych rzecz jasna 🙂). Nasz bohater zaczyna produkować napoje, w których skład wchodzi między innymi C10H15N. Z całą inicjatywą pomaga mu jego najlepszy student Jensen Różowy.

Aby napoje sprzedawały się, jak najlepiej należy zapewnić im najlepszy smak. Waclerz wraz z Jensem sprzedają w końcu napoje chłodzące, a jak mówi psychologia smaku temperatura jest jednym z czynników, który wpływa na doznania smakowe. W związku z powyższym student wpadł na pomysł, że należy dopasować proporcje substancji tak, aby napój smakował najlepiej schłodzony.

Utrzymywanie tworzonych napoi w odpowiednio niskiej temperaturze jest ogromnym wyzwaniem. W szczególności, że są to początki biznesu i nasi bohaterowie nie mają środków na zaangażowanie osób trzecich lub na zakup profesjonalnych lodówek. W wyniku tego, Czarny decyduje się wykorzystać do tego swoje stare akwarium. Chcąc utrzymywać napoje w optymalnej temperaturze wypełnił je częściowo lodowatą wodą i wkłada do niego butelki. Waclerz często sięga po napoje, pobiera z nich próbki i odkłada je z powrotem. Skutkiem czego nie wszystkie butelki są pełne. Pojemność akwarium nie jest jednak nieskończona. W pewnym momencie woda się przeleje. Nasz bohater boi się, że wtedy jego żona Bogumiła zrobi straszną awanturę i nakryje jego proceder. Mężczyzna jest w stanie łatwo stwierdzić ile centymetrów od dna znajduje się napój w butelce jednak w żaden sposób nie wie jak przeliczyć to na objętość. Utrudniają mu to również nieregularne kształty butelki. Z pomocą przyszedł mu producent butelek, który na etykiecie opisał matematyczną funkcją kształt pojemnika. Jest to połowa jego przekroju. Pomóż naszemu bohaterowi oszacować po której butelce woda w akwarium się przeleje.

### Wejście:

W pierwszej linii wejścia program otrzymuje trzy liczby naturalne x, y oraz z będące rozmiarami akwarium w cm. Następnie wczytywana jest wartość p będąca stopniem wypełnienia akwarium wodą. W kolejnym kroku program wczytuje liczbę n a potem n liczb zmiennoprzecinkowych j opisujących wypełnienie butelki. Zakładamy, że butelka ma pomijalnie cienkie ścianki i jest pomijalnie lekka. Do sprawdzenia promienia butelki w dowolnej odległości od podstawy wykorzystaj funkcję wbudowaną double butelka(double cm). Podstawa butelki zawsze znajduje się w punkcie 0.

### Wyjście:

Na wyjściu program powinien wypisać po której butelce akwarium się przepełni. Butelki są numerowane od 1. Jeżeli nie dojdzie do przelania wody wyświetlany jest komunikat "NIE".

0 < x, y, z < 100

0 < p < 1

0 < n <= 150

## Przykład:

### wejście

30 30 20
0.9
5
2.1
3.0
4.1
5.7
1.1

### Przykładowe wyjście

3
Funkcja w przykładzie jest zdefiniowana następująco
double butelka(double cm) {
return 10 - (cm-2) \* (cm-2);
}

## Uwaga:

Program powinien wykorzystywać samodzielnie zaimplementowane całkowanie numeryczne.
