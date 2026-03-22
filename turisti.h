#include <iostream>
#include <cstring>

class Turist
{
    private:
    char *nume, *prenume, *nr_telefon;
    int varsta;

    public:
    Turist(const char *nume, const char *prenume, const char *nr_telefon, int varsta)
    {
        this -> nume = new char[strlen(nume)+1];
        strcpy(this -> nume, nume);

        this -> prenume = new char[strlen(prenume)+1];
        strcpy(this -> prenume, prenume);

        this -> nr_telefon = new char[strlen(nr_telefon)+1];
        strcpy(this -> nr_telefon, nr_telefon);

        this -> varsta = varsta;
    }

    Turist(const Turist& nou)
    {
        this -> nume = new char[strlen(nou.nume)+1];
        strcpy(this -> nume, nou.nume);

        this -> prenume = new char[strlen(nou.prenume)+1];
        strcpy(this -> prenume, nou.prenume);

        this -> nr_telefon = new char[strlen(nou.nr_telefon)+1];
        strcpy(this -> nr_telefon, nou.nr_telefon);

        this -> varsta = nou.varsta;
    }

    char* getNume() const
    {
        char *nume_get = new char[strlen(nume)+1];
        strcpy(nume_get, nume);
        return nume_get; 
    }

    char* getPrenume() const
    {
        char *prenume_get = new char[strlen(prenume)+1];
        strcpy(prenume_get, prenume);
        return prenume_get; 
    }

    char* getTelefon() const
    {
        char *nr_telefon_get = new char[strlen(nr_telefon)+1];
        strcpy(nr_telefon_get, nr_telefon);
        return nr_telefon_get; 
    }

    int& getVarsta()
    {
        return varsta;
    }

    void setNume(const char* nume)
    {
        delete[] this -> nume;
        this -> nume = new char[strlen(nume)+1];
        strcpy(this -> nume, nume);
    }

    void setPrenume(const char* prenume)
    {
        delete[] this -> prenume;
        this -> prenume = new char[strlen(prenume)+1];
        strcpy(this -> prenume, prenume);
    }

    void setTelefon(const char* nr_telefon)
    {
        delete[] this -> nr_telefon;
        this -> nr_telefon = new char[strlen(nr_telefon)+1];
        strcpy(this -> nr_telefon, nr_telefon);
    }

    void setVarsta(int varsta)
    {
        this -> varsta = varsta;
    }

    ~Turist()
    {
        delete[] nume;
        delete[] prenume;
        delete[] nr_telefon;
    }
};