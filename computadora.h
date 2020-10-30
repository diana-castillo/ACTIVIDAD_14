#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>

using namespace std;

class Computadora
{
    private:
        string sistemaOperativo;
        string memoriaRam;
        string marca;
        string color;

    public:
        Computadora();
        Computadora(const string &sistemaOperativo, const string &memoriaRam, const string &marca, const string &color);
        
        void setSistemaOperativo(const string &v);
        string getSistemaOperativo();
        
        void setMemoriaRam(const string &v);
        string getMemoriaRam();
        
        void setMarca(const string &v);
        string getMarca();

        void setColor(const string &v);
        string getColor();

        friend ostream& operator<<(ostream &out, const Computadora &c)
        {
            out<<left;
            out<< setw(10) <<c.sistemaOperativo;
            out<<setw(10) <<c.memoriaRam;
            out<<setw(8) <<c.marca;
            out<<setw(6) <<c.color;
            out<<endl;

            return out;
        }

        friend istream& operator>>(istream &in, Computadora &c)
        {
            cout<<"Sistema Operativo: ";
            getline(cin, c.sistemaOperativo);
            cout<<"Memoria RAM: ";
            getline(cin, c.memoriaRam);
            cout<<"Marca: ";
            getline(cin, c.marca);
            cout<<"Color: ";
            getline(cin, c.color);

            return in;
        }

        bool operator==(const Computadora& c) {
            return marca == c.marca;
        }

        bool operator==(const Computadora& c) const {
            return marca == c.marca;
        }
};

#endif