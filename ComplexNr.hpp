#include <vector>
#include <iostream>

class NrComplex
{
public:
	NrComplex(double p_reala = 0, double p_imaginara = 0);
	NrComplex(const NrComplex & a);
	NrComplex Conjugatul ( const NrComplex & a );
	

	void set_real(double p_reala);
	double get_real() const;

	void set_imaginary(double p_imaginara);
	double get_imaginary() const;

	friend bool operator==(const NrComplex& first, const NrComplex& second);
	friend bool operator==(const NrComplex& first, double second);
	friend bool operator!=(const NrComplex& first, const NrComplex& second);
	friend bool operator!=(const NrComplex& first, double second);

	friend bool operator+(const NrComplex& first,const NrComplex& second);
	friend bool operator+(const NrComplex& first, double second);
	friend bool operator+(const double second,const NrComplex& first);

	friend bool operator-(const NrComplex& first,const NrComplex& second);
	friend bool operator-(const NrComplex& first, double second);
	friend bool operator-(double second,const NrComplex& first);

	friend bool operator*(const NrComplex& first,const NrComplex& second);
	friend bool operator*(const NrComplex& first, double second);
	friend bool operator*(double second,const NrComplex& first);

	friend bool operator/(const NrComplex& first,const NrComplex& second);
	friend bool operator/(const NrComplex& first, double second);
	friend bool operator/(double second,const NrComplex& first);

	friend std::istream& operator>>(std::istream& stream, const NrComplex& a);
	friend std::ostream& operator<<(std::ostream& stream, const NrComplex& a);

	double modulus();
	static NrComplex square_root(const NrComplex &, int);
	
	std::string ToString();


private:
	double m_reala;
	double m_imaginara;
};