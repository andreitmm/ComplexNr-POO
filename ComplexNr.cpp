#include "stdafx.h"
#include "NrComplex.hpp"

// punctul 1 si 2

NrComplex::NrComplex(double p_real, double p_imaginary)
{
	: m_real(p_real)
	, m_imaginary(p_imaginary)
}

NrComplex::NrComplex(const NrComplex& complex)
{
	m_real = complex.m_real;
	m_imaginary = complex.m_imaginary;
}

// punctul 3

void NrComplex::set_real(double p_real)
{
	m_real = p_real;
}

// punctul 4

double NrComplex::get_real() const
{
	return m_real;
}

// punctul 5

void NrComplex::set_imaginary(double p_imaginary)
{
	m_imaginary = p_imaginary;
}

// punctul 6

double NrComplex::get_imaginary() const
{
	return m_imaginary;
}


// operatorii binari

// punctul 10 , tip 1 - 2 numere complexe

void operator =(NrComplex & a, NrComplex & b)
{
	 a.m_real = b.m_real;
	 a.m_imaginary = b.m_imaginary;
}

// punctul 10 , tip 2 - 1 numar complex si un double, daca e numar tip double are doar parte reala

void operator =(NrComplex & a, double b)
{
	 a.m_real = b;
	 a.m_imaginary = 0;
}


// punctul 11 , tip 1 - 2 numere complexe

NrComplex operator +=(NrComplex & a, NrComplex & b)
{
	return (a.m_real = a.m_real + b.m_real && a.m_imaginary =a.m_imaginary + b.m_imaginary);
}

// punctul 11 , tip 2 - 1 numar complex si un double, daca e numar tip double are doar parte reala

NrComplex operator +=(NrComplex & a, double b)
{
	return (a.m_real = a.m_real + Double(b) && a.m_imaginary =a.m_imaginary);
}

// punctul 12 , tip 1 - 2 numere complexe

NrComplex operator -=(NrComplex & a, NrComplex & b)
{
	return (a.m_real = a.m_real - b.m_real && a.m_imaginary =a.m_imaginary - b.m_imaginary);
}

// punctul 12 , tip 2 - 1 numar complex si un double, daca e numar tip double are doar parte reala

NrComplex operator -=(NrComplex & a, double b)
{
	return (a.m_real = a.m_real - Double(b) && a.m_imaginary =a.m_imaginary);
}

// punctul 13 , tip 1 - 2 numere complexe

NrComplex operator *=(NrComplex & a, NrComplex & b)
{
	return (a.m_real = a.m_real * b.m_real && a.m_imaginary =a.m_imaginary * b.m_imaginary);
}

// punctul 13 , tip 2 - 1 numar complex si un double, daca e numar tip double are doar parte reala

NrComplex operator *=(NrComplex & a, double b)
{
	return (a.m_real = a.m_real * Double(b));
}

// punctul 14 , tip 1 - 2 numere complexe

NrComplex operator /=(NrComplex & a, NrComplex & b)
{
	if ( b.m_real == 0 || b.m_imaginary == 0 )
		return Exception
		else
		return (a.m_real = a.m_real / b.m_real && a.m_imaginary =a.m_imaginary / b.m_imaginary);
}

// punctul 14 , tip 2 - 1 numar complex si un double, daca e numar tip double are doar parte reala

NrComplex operator -=(NrComplex & a, double b)
{
	if ( b.m_real == 0 || b == 0 )
		return Exception
		else
		return (a.m_real = a.m_real / Double(b));
}

// punctul 17 , tip 1 - 2 numere complexe

NrComplex operator +(NrComplex & a, NrComplex & b)
{
	return (a.m_real + b.m_real && a.m_imaginary + b.m_imaginary);
}

// punctul 17 , tip 2 - 1 numar complex si un double, daca e numar tip double are doar parte reala

NrComplex operator +(NrComplex & a, double b)
{
	return (a.m_real + Double(b) && a.m_imaginary);
}

// punctul 17 , tip 3 - un double si un numar complex, daca e numar tip double are doar parte reala

NrComplex operator +(double a, NrComplex & b)
{
	return (Double(a) + b.m_real && b.m_imaginary);
}

// punctul 18 , tip 1 - 2 numere complexe

NrComplex operator -(NrComplex & a, NrComplex & b)
{
	return (a.m_real - b.m_real && a.m_imaginary - b.m_imaginary);
}

// punctul 18 , tip 2 - 1 numar complex si un double, daca e numar tip double are doar parte reala

NrComplex operator -(NrComplex & a, double b)
{
	return (a.m_real - Double(b) && a.m_imaginary);
}

// punctul 18 , tip 3 - un double si un numar complex, daca e numar tip double are doar parte reala

NrComplex operator -(double a, NrComplex & b)
{
	return (Double(a) - b.m_real && b.m_imaginary);
}

// punctul 19 , tip 1 - 2 numere complexe

NrComplex operator *(NrComplex & a, NrComplex & b)
{
	return (a.m_real * b.m_real && a.m_imaginary * b.m_imaginary);
}

// punctul 19 , tip 2 - 1 numar complex si un double, daca e numar tip double are doar parte reala

NrComplex operator *(NrComplex & a, double b)
{
	return (a.m_real * Double(b) && a.m_imaginary);
}

// punctul 19 , tip 3 - un double si un numar complex, daca e numar tip double are doar parte reala

NrComplex operator *(double a, NrComplex & b)
{
	return (Double(a) * b.m_real && b.m_imaginary);
}

// punctul 21

NrComplex operator ^(NrComplex & a, int b)
{
	return (a.m_real ^ b && a.m_imaginary ^ b);
}

// punctul 22 , tip 1

bool operator ==(NrComplex & a, NrComplex & b)
{
	if ( a.m_real == b.m_real && a.m_imaginary == b.m_imaginary )
		return True;
		else
		return False;
}

// punctul 22 , tip 2

bool operator ==(NrComplex & a, b)
{
	if ( a.m_real == b && a.m_imaginary == 0 )
		return True;
		else
		return False;
}

// punctul 23 , tip 1

bool operator !=(NrComplex & a, NrComplex & b)
{
	return !(a == b)
}

// punctul 23 , tip 2

bool operator !=(NrComplex & a, b)
{
	return !(a == b)
}

//punctul 24 

 std::string NrComplex::ToString()
 {
	 std::string str = "";
	 if (this->m_real != 0)
	 {
		 str += std::to_string(this->m_real);
	 }
	 if (this->m_imaginary != 0)
	 {
		 if (this->m_imaginary > 0)
		 {
			 if (this->m_real != 0)
			 {
				 str += "+i*";
			 }
			 else 
			 {
				 str += "i*";
			 }
			 str += std::to_string(this->m_imaginary);
		 }
		 else
		 {
			 str += "-i*";
			 str += std::to_string(abs(this->m_imaginary));
		 }
	 }
	 return str;
 }

// punctul 25

NrComplex Conjugatul (NrComplex & a)
{
	return a.m_real && -a.m_imaginary;
}

// punctul 28

NrComplex NrComplex::square_root(const NrComplex & a, int k)
{
	 NrComplex ca(a);
	 double phi = atan(a.m_imaginary / a.m_real), r = ca.modulus();
	 NrComplex s;
	 s.m_real = sqrt(r) * cos((phi + 2 * k * PI) / 2);
	 s.m_imaginary = sqrt(r) * sin((phi + 2 * k * PI) / 2);
	 return s;
}


// pumctul 29

std::istream & operator>>(std::istream & stream, NrComplex & a)
{
	stream >> a.m_real >> a.m_imaginary;
	return stream;
}

// pumctul 30

std::istream & operator<<(std::ostream & stream, NrComplex & a)
{
	stream << a.m_real << "+" << a.m_imaginary << "*i";
	return stream;
}

