# Proiect Circuitul Calului
Am realizat Circuitul calului, ce are urmatoarea cerință:
- Se dă o tablă de șah de N x N elemente pe care se află un cal la
coordonatele (i,j). Se cere să se scrie un program care determină mutările calului
(respectând săritura calului din jocul de șah) astfel încât toate pozițiile tablei să
fie acoperite.

## Motivarea si scopul proiectului
### Motivarea
Am ales să implementez algoritmul pentru rezolvarea problemei circuitului calului pentru a înțelege mai bine tehnicile de backtracking și pentru a crea o aplicație interactivă care să ilustreze soluțiile posibile într-un joc de șah.
### Scopul
Scopul acestui proiect este de a implementa algoritmul de rezolvare a problemei calului pe o tablă de șah, oferind soluții interactive pentru utilizator.

## Detalii de implementare
### Limbaj și tehnică
Soluția a fost implementată în **C++**, folosind tehnica de **backtracking** pentru a explora toate mutările posibile ale calului pe tabla de șah. Algoritmul începe de la poziția inițială a calului și caută recursiv soluții care să viziteze toate celulele tablei.
### Algoritm
1. Programul primește dimensiunea tablei și coordonatele inițiale ale calului.
2. Folosind direcțiile posibile de mișcare ale calului, se încearcă să se acopere întreaga tablă.
3. Dacă toate celulele sunt vizitate, se afișează tabla finală cu soluția găsită.
4. Dacă nu există o soluție, se va anunța acest lucru.

## Mediul de dezvoltare
- **Limbaj de programare**: C++
- **IDE**: Visual Studio Code
- **Sistem de operare**: Ubuntu
- **Mediu de dezvoltare**: Docker pentru rularea aplicației într-un mediu izolat, asigurând portabilitatea și consistența între diferite sisteme.

## Exemple de rulare
Programul poate fi rulat într-un mediu Docker, utilizând imaginea publicată pe Docker Hub. Urmează pașii de mai jos pentru a rula aplicația:

1. **Descărcarea imaginii Docker**:
   - Folosește comanda următoare pentru a descărca imaginea `circuitul-calului` din repository-ul `jurcaade`:
     ```bash
     docker pull jurcaade/circuitul-calului
     ```

2. **Rularea aplicației**:
   - După ce imaginea a fost descărcată, poți rula aplicația utilizând comanda:
     ```bash
     docker run jurcaade/circuitul-calului
     ```

3. **Interacțiunea cu programul**:
   - Programul îți va cere să introduci dimensiunea tablei de șah și pozițiile de start pentru cal. De exemplu:
     ```
     Introduceti dimensiunea tablei de sah: 5
     Introduceti pozitia de start pentru i: 0
     Introduceti pozitia de start pentru j: 0
     ```
   - După ce introduci datele, programul va calcula și va afișa tabla de șah finală, arătând cum calul a acoperit toate pozițiile.

4. **Exemplu de rezultat**:
   - Un exemplu de rezultat pentru o tablă de dimensiune 5x5 ar putea fi:
     ```
     Toate mutarile au fost efectuate. Tabla finala arata astfel:

     1 20 17 12 3
     16 11 2 7 18
     21 24 19 4 13
     10 15 6 23 8
     25 22 9 14 5
     ```

## Bibliografie
- [Metoda Backtracking - PBInfo](https://www.pbinfo.ro/articole/16597/metoda-backtracking)
- [Knight's Tour - Wikipedia](https://en.wikipedia.org/wiki/Knight%27s_tour)