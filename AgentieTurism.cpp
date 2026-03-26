#include <iostream>
#include <cstring>
#include "turisti.h"
#include "tranzactii.h"
#include "servicii.h"

int main()
{

    //Clasa Turist
    char nume[] = "Andrei", prenume[] = "Victor", nr_telefon[] ="0773293229";
    int varsta = 17;
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


    //Clasa Tranzactie
    char nume_beneficiar[] = "Tudose",  prenume_beneficiar[] = "Antonia", nume_tranzactie[] = "Vacanta la Roma!", data_tranzactie[] = "12_03_26";
    int suma = 1200;
    Tranzactie tranzactie1 = Tranzactie(nume_beneficiar, prenume_beneficiar, nume_tranzactie, data_tranzactie, suma);
    std::cout << tranzactie1.getNumeBeneficiar() << " " << tranzactie1.getPrenumeBeneficiar() << " " << tranzactie1.getNumeServiciu() << " " << tranzactie1.getDataTranzactie() << " " << tranzactie1.getSumaTranzactie() << "\n";
    Tranzactie tranzactie2(tranzactie1);
    std::cout << tranzactie2.getNumeBeneficiar() << " " << tranzactie2.getPrenumeBeneficiar() << " " << tranzactie2.getNumeServiciu() << " " << tranzactie2.getDataTranzactie() << " " << tranzactie2.getSumaTranzactie() << "\n";
    tranzactie2.setNumeBeneficiar("Ana");
    tranzactie2.setPrenumeBeneficiar("Maria");
    tranzactie2.setNumeServiciu("Vacanta la Oz!");
    tranzactie2.setDataTranzactie("26_03_24");
    std::cout << tranzactie2.getNumeBeneficiar() << " " << tranzactie2.getPrenumeBeneficiar() << " " << tranzactie2.getNumeServiciu() << " " << tranzactie2.getDataTranzactie() << " " << tranzactie2.getSumaTranzactie() << "\n";
    return 0;
}