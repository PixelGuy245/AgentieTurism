#include <iostream>
#include <cstring>
#include "turisti.h"
#include "tranzactii.h"
#include "servicii.h"

int main()
{
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
    int cost = 1200, locuri_disponibile = 100;
    Serviciu serviciu1 = Serviciu(nume_serviciu, locatie, data_plecare, data_intoarcere, cost, locuri_disponibile);
    std::cout << serviciu1.getNumeServiciu() << " " << serviciu1.getLocatie() << " " << serviciu1.getDataPlecare() << " " << serviciu1.getDataIntoarcere() << " " << serviciu1.getCost() << " " << serviciu1.getDisponibilitate() << "\n";
    std::cout << serviciu1.DurataServiciului() << "\n";
    std::cout << serviciu1.getCost(turist1)<< "\n";
    std::cout << serviciu1.getCost(turist2)<< "\n";

    
}