#include <cstddef>
#include "stos_2.h"
#include <ostream>
Stos::Stos(Stos const &rhs)
    : _size(rhs._size) 
{
    if (rhs.empty()) 
    {
        _pSzczyt = nullptr; 
        _size = 0;          
    }
    else
    {
        _pSzczyt = new Ogniwo(rhs._pSzczyt->_dane, nullptr);
        Ogniwo *temp = rhs._pSzczyt;
        Ogniwo *poczatek = _pSzczyt;

        while (temp->_p_nastepny != 0)
        {
            temp = temp->_p_nastepny;
            _pSzczyt->_p_nastepny = new Ogniwo(temp->_dane, nullptr);
            _pSzczyt = _pSzczyt->_p_nastepny;
        }
        _pSzczyt->_p_nastepny = nullptr;
        _pSzczyt = poczatek;
    }
}

Stos &Stos::operator=(Stos const &rhs)
{
    if (this == &rhs)
    {
        return *this;
    }
    if (rhs.empty())
    {
        _pSzczyt = nullptr;
        _size = 0;
    }
    else
    {
        delete _pSzczyt;
        Ogniwo *temp = rhs._pSzczyt;
        Ogniwo *poczatek = _pSzczyt;

        while (temp->_p_nastepny != 0)
        {
            temp = temp->_p_nastepny;
            _pSzczyt->_p_nastepny = new Ogniwo(temp->_dane, _pSzczyt->_p_nastepny);
            _pSzczyt = _pSzczyt->_p_nastepny;
        }
        _pSzczyt->_p_nastepny = 0;
        _pSzczyt = poczatek;
    }
    return *this;
}

std::ostream& operator <<(std::ostream& os, const Stos& s)
{
	Ogniwo* temp = s._pSzczyt;
	while (temp != 0)
	{
		os << temp->_dane << ", ";
		temp = temp->_p_nastepny;
	}
	return os;
}