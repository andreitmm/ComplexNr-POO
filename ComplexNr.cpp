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





