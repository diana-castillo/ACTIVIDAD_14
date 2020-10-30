#include "computadora.h"

Computadora::Computadora() { }

Computadora::Computadora(const string &sistemaOperativo, const string &memoriaRam, const string &marca, const string &color)
{
    this->sistemaOperativo = sistemaOperativo;
    this->memoriaRam = memoriaRam;
    this->marca = marca;
    this->color = color;
}

void Computadora::setSistemaOperativo(const string &v) {
    sistemaOperativo = v;
}

string Computadora::getSistemaOperativo() {
    return sistemaOperativo;
}

void Computadora::setMemoriaRam(const string &v) {
    memoriaRam = v;
}

string Computadora::getMemoriaRam() {
    return memoriaRam;
}

void Computadora::setMarca(const string &v) {
    marca = v;
}

string Computadora::getMarca() {
    return marca;
}

void Computadora::setColor(const string &v) {
    color = v;
}

string Computadora::getColor() {
    return color;
}