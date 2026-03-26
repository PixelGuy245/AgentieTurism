#include <iostream>
#include <cstring>

class Serviciu
{
private:
    char *nume_serviciu, *locatie, *data_plecare, *data_intoarcere;
    int cost, locuri_disponibile;

public:

    //Constructor
    Serviciu(const char *nume_serviciu, const char *locatie, const char *data_plecare, const char *data_intoarcere, int cost, int locuri_disponibile)
    {
        this->nume_serviciu = new char[strlen(nume_serviciu) + 1];
        strcpy(this->nume_serviciu, nume_serviciu);

        this->locatie = new char[strlen(locatie) + 1];
        strcpy(this->locatie, locatie);

        this->data_plecare = new char[strlen(data_plecare) + 1];
        strcpy(this->data_plecare, data_plecare);

        this->data_intoarcere = new char[strlen(data_intoarcere) + 1];
        strcpy(this->data_intoarcere, data_intoarcere);

        this->cost = cost;

        this->locuri_disponibile = locuri_disponibile;
    }

    //Copiator
    Serviciu(const Serviciu& nou)
    {
        this->nume_serviciu = new char[strlen(nou.nume_serviciu) + 1];
        strcpy(this->nume_serviciu, nou.nume_serviciu);

        this->locatie = new char[strlen(nou.locatie) + 1];
        strcpy(this->locatie, nou.locatie);

        this->data_plecare = new char[strlen(nou.data_plecare) + 1];
        strcpy(this->data_plecare, nou.data_plecare);

        this->data_intoarcere = new char[strlen(nou.data_intoarcere) + 1];
        strcpy(this->data_intoarcere, nou.data_intoarcere);

        this->cost = nou.cost;

        this->locuri_disponibile = nou.locuri_disponibile;
    }

    //Gettere
    char* getNumeServiciu() const
    {
        char *nume_serviciu_get = new char[strlen(nume_serviciu) + 1];
        strcpy(nume_serviciu_get, nume_serviciu);
        return nume_serviciu_get; 
    }

    char* getLocatie() const
    {
        char *locatie_get = new char[strlen(locatie) + 1];
        strcpy(locatie_get, locatie);
        return locatie_get; 
    }

    char* getDataPlecare() const
    {
        char *data_plecare_get = new char[strlen(data_plecare) + 1];
        strcpy(data_plecare_get, data_plecare);
        return data_plecare_get; 
    }

    char* getDataIntoarcere() const
    {
        char *data_intoarcere_get = new char[strlen(data_intoarcere) + 1];
        strcpy(data_intoarcere_get, data_intoarcere);
        return data_intoarcere_get; 
    }

    int getCost() const
    {
        return cost;
    }

    //Functie getter pentru calculare cost pentru persoane specifice
    double getCost(const Turist& t) const 
    {
        double cost_final = (double)this -> cost;
        int varsta = const_cast<Turist&>(t).getVarsta();
        if (varsta < 18)
            cost_final = cost_final* 0.8;

        return cost_final;
    }

    int getDisponibilitate() const
    {
        return locuri_disponibile;
    }

    //Settere
    void setNumeServiciu(const char* nume)
    {
        delete[] this->nume_serviciu;
        this->nume_serviciu = new char[strlen(nume) + 1];
        strcpy(this->nume_serviciu, nume);
    }

    void setLocatie(const char* locatie)
    {
        delete[] this->locatie;
        this->locatie = new char[strlen(locatie) + 1];
        strcpy(this->locatie, locatie);
    }

    void setDataPlecare(const char* data)
    {
        delete[] this->data_plecare;
        this->data_plecare = new char[strlen(data) + 1];
        strcpy(this->data_plecare, data);
    }

    void setDataIntoarcere(const char* data)
    {
        delete[] this->data_intoarcere;
        this->data_intoarcere = new char[strlen(data) + 1];
        strcpy(this->data_intoarcere, data);
    }

    void setCost(int cost)
    {
        this->cost = cost;
    }

    void setDisponibilitate(int locuri_disponibile)
    {
        this->locuri_disponibile = locuri_disponibile;
    }


    //Functie de calculat numarul de zile de durata ale serviciului
    int DurataServiciului() const 
    {
        int ziua1 = (data_plecare[0] - '0') * 10 + (data_plecare[1] - '0');
        int luna1 = (data_plecare[3] - '0') * 10 + (data_plecare[4] - '0');
        int anul1 = (data_plecare[6] - '0') * 10 + (data_plecare[7] - '0');

        int total_zile1 = anul1*365 + luna1 * 30 + ziua1;

        int ziua2 = (data_intoarcere[0] - '0') * 10 + (data_intoarcere[1] - '0');
        int luna2 = (data_intoarcere[3] - '0') * 10 + (data_intoarcere[4] - '0');
        int anul2 = (data_intoarcere[6] - '0') * 10 + (data_intoarcere[7] - '0');

        int total_zile2 = anul2*365 + luna2 * 30 + ziua2;
        int total_zile = (total_zile2 - total_zile1);
        return total_zile;
    }

    //Destructor
    ~Serviciu()
    {
        delete[] nume_serviciu;
        delete[] locatie;
        delete[] data_plecare;
        delete[] data_intoarcere;
    }
};