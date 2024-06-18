# Treść zadania

Jenne Adam to młoda dziewczyna, która rozpoczęła swoją naukę w Akademii “Nigdy Więcej”. Jak to w życiu młodych ludzi bywa, nasza bohaterka musi zmierzyć się z wieloma problemami, odnaleźć się w nowej szkole, znaleźć nowych znajomych, ale także wciela się w rolę detektywa, aby rozwiązać sprawę serii zabójstw, które miały miejsce w akademii. Jenne jest bardzo inteligentną i uzdolnioną uczennicą. Ponadto odkrywa, że posiada moce psychiczne, które przewijają się w formie wizji przeszłości i przyszłości. Prawdopodobnie odziedziczyła je po swojej matce, Mortycji Adam. Chociaż nie jest ona w stanie wywołać tych wizji na żądanie, doświadcza ich, dotykając przedmiotu lub osoby, które mają dla niej większe znaczenie.

Podczas środowych zajęć z poezji, po dotknięciu tomiku z dziełami Jana Brzechwy, zobaczyła kolejną wizję. W wizji jest ukryta wiadomość, która może ją przybliżyć do rozwiązania zagadki serii zabójstw w Akademii “Nigdy Więcej”. Aby rozszyfrować ukrytą wiadomość należy znaleźć ciąg słów o określonej długości.

### Wejście

Dane wejściowe składają się z dwóch linii. W pierwszej linii znajduje się szablon poszukiwanej frazy a w drugiej linii tekst, w którym poszukiwane ma być podsłowo pasujące do wczytanego szablonu. Na końcu danych wejściowych jest znak końca linii.

Szablon może zawierać następujące znaki:
a - oznacza wystąpienie małej litery,
A - oznacza wystąpienie dużej litery,
. - oznacza wystąpienie jednego z następujących znaków interpunkcyjnych: kropki, znaku zapytania, wykrzyknika, przecinka, średnika, dwukropka lub myślnika.
0 - oznacza wystąpienie cyfry.
Szablon może także zawierać spacje - odpowiadają one spacjom w szukanym tekście. Długość tekstu jest dłuższa niż długość szablonu i nie jest większa niż 1500001 znaków.

### Wyjście

Program powinien wypisać na standardowym wyjściu T, jeżeli podany w pierwszej linii wejścia szablon pasuje do jakiegoś podsłowa tekstu podanego w drugiej linii wejścia oraz N w przeciwnym wypadku.

## Przykład:

### Wejście

aaaaa a aaaaaaaa.
W Szczebrzeszynie chrzaszcz brzmi w trzcinie.

### Wyjście

T

## Warunki, które powinno spełniać rozwiązanie:

Program powinien działać w pesymistycznym czasie liniowym względem rozmiaru wejścia.
