#include <iostream>
#include <cstring>

class Tranzactie
{
    private:
    Turist* beneficiar;
    Serviciu* serviciu; 
    char *data_tranzactie;

    public:

    //Constructor
Tranzactie(Turist* turist_date,  Serviciu* serviciu_date, const char *data_tranzactie)
    {
        this -> beneficiar = turist_date;

        this -> serviciu = serviciu_date;

        this -> data_tranzactie = new char[strlen(data_tranzactie)+1];
        strcpy(this -> data_tranzactie, data_tranzactie);
    }

    //Copiator
    Tranzactie(const Tranzactie& nou)
    {
        this -> beneficiar = nou.beneficiar;

        this -> serviciu = nou.serviciu;

        this -> data_tranzactie = new char[strlen(nou.data_tranzactie)+1];
        strcpy(this -> data_tranzactie, nou.data_tranzactie);

    }

    //Gettere

    char* getNume() const
    {
        return this -> beneficiar -> getNume();
    }

    char* getPrenume() const
    {
        return this -> beneficiar -> getPrenume();
    }

    char* getNumeServiciu() const
    {
        return this -> serviciu -> getNumeServiciu();
    }

    char* getDataTranzactie() const
    {
        char *data_tranzactie_get = new char[strlen(data_tranzactie)+1];
        strcpy(data_tranzactie_get, data_tranzactie);
        return data_tranzactie_get; 
    }

    double getSumaTranzactie()
    {
        return this -> serviciu -> getCost(*beneficiar);
    }

    //Settere
    void setNumeBeneficiar(const char* nume_nou)
    {
        this -> beneficiar ->setNume(nume_nou);
    } 

    void setPreumeBeneficiar(const char* prenume_nou)
    {
        this -> beneficiar ->setPrenume(prenume_nou);
    } 

    void setNumeServiciu(const char* nume_nou)
    {
        this -> serviciu ->setNumeServiciu(nume_nou);
    } 

    void setDataTranzactie(const char* data_tranzactie)
    {
        delete[] this -> data_tranzactie;
        this -> data_tranzactie = new char[strlen(data_tranzactie)+1];
        strcpy(this -> data_tranzactie, data_tranzactie);
    }

    void setSumaTranzactie(int cost)
    {
        this -> serviciu -> setCost(cost);
    }

    //Destructor
    ~Tranzactie()
    {
        delete[] data_tranzactie;
    }
};