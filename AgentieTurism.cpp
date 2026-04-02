#include <iostream>
#include <cstring>
#include "turisti.h"
#include "servicii.h"
#include "tranzactii.h"

void afiseazaServiciu(const Serviciu& s)
    {   
        std::cout << "Detalii Serviciu\n";
        std::cout << "Nume: " << s.nume_serviciu << "\n";
        std::cout << "Locatie: " << s.locatie << "\n";
        std::cout << "Data plecare: " << s.data_plecare << "\n";
        std::cout << "Data intoarcere: " << s.data_intoarcere << "\n";
        std::cout << "Cost: " << s.cost << " RON\n";
        std::cout << "Locuri disponibile: " << s.locuri_disponibile << "\n";
    }
    
int main()
{

    //Clasa Turist
    char nume[] = "Andrei", prenume[] = "Victor", nr_telefon[] ="0773293229";
    int varsta = 7;
    Turist turist1 = Turist(nume, prenume, nr_telefon, varsta);
    std::cout << turist1.getNume() << " " << turist1.getPrenume() << " " << turist1.getTelefon() << " " << turist1.getVarsta() << "\n";
    Turist turist2(turist1);
    std::cout << turist2.getNume() << " " << turist2.getPrenume() << " " << turist2.getTelefon() << " " << turist2.getVarsta() << "\n";
    turist2.setNume("Voicu");
    turist2.setPrenume("Razvan");
    turist2.setTelefon("0727823992");
    turist2.setVarsta(30);
    std::cout << turist2.getNume() << " " << turist2.getPrenume() << " " << turist2.getTelefon() << " " << turist2.getVarsta() << "\n";

    char nume_serviciu[] = "Vacanta la Venetia!", locatie[] = "Venetia", data_plecare[] = "10_04_26", data_intoarcere[] = "20_05_26";

    //Clasa Serviciu
    int cost = 1200, locuri_disponibile = 100;
    Serviciu serviciu1 = Serviciu(nume_serviciu, locatie, data_plecare, data_intoarcere, cost, locuri_disponibile);
    std::cout << serviciu1.getNumeServiciu() << " " << serviciu1.getLocatie() << " " << serviciu1.getDataPlecare() << " " << serviciu1.getDataIntoarcere() << " " << serviciu1.getCost() << " " << serviciu1.getDisponibilitate() << "\n";
    Serviciu serviciu2(serviciu1);
    std::cout << serviciu2.getNumeServiciu() << " " << serviciu2.getLocatie() << " " << serviciu2.getDataPlecare() << " " << serviciu2.getDataIntoarcere() << " " << serviciu2.getCost() << " " << serviciu2.getDisponibilitate() << "\n";
    serviciu2.setNumeServiciu("Vacanta la Roma!");
    serviciu2.setLocatie("Roma");
    serviciu2.setDataPlecare("12_06_26");
    serviciu2.setDataIntoarcere("18_07_26");
    serviciu2.setDisponibilitate(120);
    serviciu2.setCost(1600);
    std::cout << serviciu2.getNumeServiciu() << " " << serviciu2.getLocatie() << " " << serviciu2.getDataPlecare() << " " << serviciu2.getDataIntoarcere() << " " << serviciu2.getCost() << " " << serviciu2.getDisponibilitate() << "\n";

    //Functie de calcul zile intre data plecarii si data intoarcerii
    std::cout << serviciu1.DurataServiciului() << "\n";
    std::cout << serviciu2.DurataServiciului() << "\n";
    std::cout << serviciu1.getCost() << "\n";
    std::cout << serviciu2.getCost() << "\n";

    //Functie de calcul reducere pentru persoane sub o anumita varsta
    std::cout << serviciu1.getCost(turist1)<< "\n";
    std::cout << serviciu1.getCost(turist2)<< "\n";

    //Funcie prietena de afisare
    afiseazaServiciu(serviciu1);


    //Clasa Tranzactie
    char  data_tranzactie[] = "12_03_26";
    int suma = 1200;
    Tranzactie tranzactie1 = Tranzactie(&turist1,  &serviciu1, data_tranzactie);
    std::cout << tranzactie1.getNume() << " " << tranzactie1.getPrenume() << " " << tranzactie1.getNumeServiciu() << " " << tranzactie1.getDataTranzactie() << " " << tranzactie1.getSumaTranzactie() << "\n";
    Tranzactie tranzactie2(tranzactie1);
    std::cout << tranzactie2.getNume() << " " << tranzactie2.getPrenume() << " " << tranzactie2.getNumeServiciu() << " " << tranzactie2.getDataTranzactie() << " " << tranzactie2.getSumaTranzactie()  << "\n";
    Tranzactie tranzactie3 = Tranzactie(&turist2,  &serviciu1, data_tranzactie);
    std::cout << tranzactie3.getNume() << " " << tranzactie3.getPrenume() << " " << tranzactie3.getNumeServiciu() << " " << tranzactie3.getDataTranzactie() << " " << tranzactie3.getSumaTranzactie()  << "\n";
    Tranzactie tranzactie4 = Tranzactie(&turist2,  &serviciu2, data_tranzactie);
    std::cout << tranzactie4.getNume() << " " << tranzactie4.getPrenume() << " " << tranzactie4.getNumeServiciu() << " " << tranzactie4.getDataTranzactie() << " " << tranzactie4.getSumaTranzactie()  << "\n";

    return 0;
}