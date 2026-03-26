#include <iostream>
#include <cstring>

class Tranzactie
{
    private:
    char *nume_beneficiar, *prenume_beneficiar, *nume_serviciu, *data_tranzactie;
    int suma_tranzactie;

    public:

    //Constructor
Tranzactie(const char *nume_beneficiar, const char *prenume_beneficiar, const char *nume_serviciu, const char *data_tranzactie, int suma_tranzactie)
    {
        this -> nume_serviciu = new char[strlen(nume_serviciu)+1];
        strcpy(this -> nume_serviciu, nume_serviciu);

        this -> prenume_beneficiar = new char[strlen(prenume_beneficiar)+1];
        strcpy(this -> prenume_beneficiar, prenume_beneficiar);

        this -> nume_beneficiar = new char[strlen(nume_beneficiar)+1];
        strcpy(this -> nume_beneficiar, nume_beneficiar);

        this -> data_tranzactie = new char[strlen(data_tranzactie)+1];
        strcpy(this -> data_tranzactie, data_tranzactie);

        this -> suma_tranzactie = suma_tranzactie;
    }

    //Copiator
    Tranzactie(const Tranzactie& nou)
    {
        this -> nume_serviciu = new char[strlen(nou.nume_serviciu)+1];
        strcpy(this -> nume_serviciu, nou.nume_serviciu);

        this -> prenume_beneficiar = new char[strlen(nou.prenume_beneficiar)+1];
        strcpy(this -> prenume_beneficiar, nou.prenume_beneficiar);

        this -> nume_beneficiar = new char[strlen(nou.nume_beneficiar)+1];
        strcpy(this -> nume_beneficiar, nou.nume_beneficiar);

        this -> data_tranzactie = new char[strlen(nou.data_tranzactie)+1];
        strcpy(this -> data_tranzactie, nou.data_tranzactie);

        this -> suma_tranzactie = nou.suma_tranzactie;
    }

    //Gettere
    char* getNumeServiciu() const
    {
        char *nume_serviciu_get = new char[strlen(nume_serviciu)+1];
        strcpy(nume_serviciu_get, nume_serviciu);
        return nume_serviciu_get; 
    }

    char* getPrenumeBeneficiar() const
    {
        char *prenume_beneficiar_get = new char[strlen(prenume_beneficiar)+1];
        strcpy(prenume_beneficiar_get, prenume_beneficiar);
        return prenume_beneficiar_get; 
    }

    char* getNumeBeneficiar() const
    {
        char *nume_beneficiar_get = new char[strlen(nume_beneficiar)+1];
        strcpy(nume_beneficiar_get, nume_beneficiar);
        return nume_beneficiar_get; 
    }

    char* getDataTranzactie() const
    {
        char *data_tranzactie_get = new char[strlen(data_tranzactie)+1];
        strcpy(data_tranzactie_get, data_tranzactie);
        return data_tranzactie_get; 
    }

    int& getSumaTranzactie()
    {
        return suma_tranzactie;
    }

    //Settere
    void setNumeServiciu(const char* nume_serviciu)
    {
        delete[] this -> nume_serviciu;
        this -> nume_serviciu = new char[strlen(nume_serviciu)+1];
        strcpy(this -> nume_serviciu, nume_serviciu);
    }

    void setPrenumeBeneficiar(const char* prenume_beneficiar)
    {
        delete[] this -> prenume_beneficiar;
        this -> prenume_beneficiar = new char[strlen(prenume_beneficiar)+1];
        strcpy(this -> prenume_beneficiar, prenume_beneficiar);
    }

    void setNumeBeneficiar(const char* nume_beneficiar)
    {
        delete[] this -> nume_beneficiar;
        this -> nume_beneficiar = new char[strlen(nume_beneficiar)+1];
        strcpy(this -> nume_beneficiar, nume_beneficiar);
    }

    void setDataTranzactie(const char* data_tranzactie)
    {
        delete[] this -> data_tranzactie;
        this -> data_tranzactie = new char[strlen(data_tranzactie)+1];
        strcpy(this -> data_tranzactie, data_tranzactie);
    }

    void setSumaTranzactie(int varsta)
    {
        this -> suma_tranzactie = suma_tranzactie;
    }

    //Destructor
    ~Tranzactie()
    {
        delete[] nume_serviciu;
        delete[] prenume_beneficiar;
        delete[] nume_beneficiar;
        delete[] data_tranzactie;
    }
};