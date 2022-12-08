# Pirmas-Projektas
## V 1.5
C++ programa skirta išvesti galutinius balus norimam studentų skaičiui.

Šioje versijoje nauja: 
- Sukurta Žmogus bazinė klasė iš kurios išvedama Studentas klasė

### Naudojimas:
Paleidus programą bus prašoma:
- Pasirinkti ar norite generuoti failą
Jei pasirenkate generuoti failą prašoma:
- Įvesti kiek pažymių generuoti studentams
Jei pasirenkate negeneruoti failo prašoma:
- Įvesti studentų skaičių 
- Įvesti studento vardą bei pavardę
- Pasirinkti ar pažymiai bus įvedami naudotojo ar sugeneruota programos
    - Suvesti norimus pažymius baigus įvedant '0'bei įvesti egzamino rezutatą
    - Įvesti norimo sugeneruoti pažymių skaičių
- Pasirinkti ar galutinį balą skaičiuoti pagal vidurkį ar medianą

### Reikalavimai įvedimui:
- Įvedant studentų skaičių, pažymių skaičių, egzamino balą nepriimamos raidės ar simbolių reikšmės
- Nepriimami kiti atsakymai nei pateikia dviejų pasirinkimų klausimas 
    - Leidžiama tik 'g' ar 'n' renkantis duomenis imti iš failo/be failo
    - Leidžiama tik 'v' ar 'm' renkantis vidurkį/medianą
    - Leidžiama tik 'a' ar 'p' renkantis naudotojo/atsitiktinį pažymių suvedimą

### Sparta analizė
- AMD Ryzen 7 4800U with Radeon Graphics 1.80 GHz procesorius
- 16,0 GB RAM
- 1 TB SSD

|        |             | 1000        | 10000       | 100000      | 1000000    | 10000000  |
|--------|-------------|-------------|-------------|-------------|------------|-----------|
| Vector | Nuskaitymas | 0.0009076 s | 0.0480109 s | 0.417809 s  | 2.51257 s  | 22.9082 s |
|        | Grupavimas  | 0.0003572 s | 0.0190066 s | 0.338207 s  | 2.97468 s  | 32.4886 s |
| List   | Nuskaitymas | 0.0009997 s | 0.0380274 s | 0.437175 s  | 2.74462 s  | 23.7884 s |
|        | Grupavimas  | 0.0002076 s | 0.0100214 s | 0.162039 s  | 1.24929 s  | 12.3308 s |

Sparta naudojant vieną fiksuotą konteinerį vektorių, greičiausią dalijimo strategiją bei 100000 ir 1000000 dydžio failus

|             | N      | 100000    | 1000000   |
|-------------|--------|-----------|-----------|
| nuskaitymas | class  | 0.47012 s | 2.52774 s |
| grupavimas  |        | 0.39141 s | 3.62351 s |
| nuskaitymas | struct | 0.41902 s | 2.69022 s |
| grupavimas  |        | 0.23015 s | 2.50912 s |

## Versijos:
### v2.0
- Sukurkite dokumentaciją panaudojant Doxygen
### v1.5
- Sukurta Žmogus bazinė klasė iš kurios išvedama Studentas klasė
### v1.2
- Realizuota "Rule of three" turimai Studentas klasei
### v1.1
- Struktūros Irasas pagrindu sukurta Studentas klasė
- Išmatuota sparta naudojant vieną fiksuotą konteinerį vektorių, greičiausią dalijimo strategiją bei 100000 ir 1000000 dydžio failus
### v1.0
- paruošta cmake CMakeLists.txt įdiegimo instrukcija
- optimizuoti algoritmai vektoriaus studentų dalijimo procedūrai
- išmatuota programos veikimo sparta priklausomai nuo studentų dalijimo į dvi kategorijas strategijos
### v0.4
- Galimybė dirbti ne tik su vietoje generuojamu failu, bet ir su jau esančio failo nuskaitymu
- Naudojamas ne tik vector bet ir list tipo konteineris studentų duomenims saugoti
- Atliekama programos veikimo greičio (spartos) analizė vector ir list konteineriams:
    - duomenų nuskaitymui iš failų
    - studentų grupavimui į dvi grupes/kategorijas (Geresnio balo (>=5) ir žemesnio balo (<5) )
### v0.3
- Galimybė generuoti norimo dydžio studentų įrašų failus
- Studentų įrašai surūšiuojami pagal balą į dvi kategorijas ir išvedami į du skirtingus failus
- Atliekama programos veikimo greičio (spartos) analizė:
    - failų kūrimui
    - duomenų nuskaitymui iš failų
    - studentų rūšiavimui į dvi grupes/kategorijas
    - studentų išvedimui į du naujus failus
### v0.2
v.01 papildytas galimybe duomenis imti iš nuskaitomo failo, pridėtas klaidos jei failas neatsidarė sugavimas, failas išskaidytas į .h bei .cpp failus, lengvesniam skaitomumui.
### v0.1
Šioje versijoje yra 2 .cpp failai - masyvo bei vektoriaus realizacijos studento namų darbų pažymiams saugoti.



