#ifndef INTINF_H
#define INTINF_H
#include <stdio.h>

class IntInf{
public:
	int num;
	bool negInf;
	bool posInf;
	bool undefined;

public:
	IntInf(int n=0, bool neg=false, bool pos=false, bool undefined=false);
	IntInf operator =(const IntInf& rhs) const;
	IntInf operator +(const IntInf& rhs) const;
	IntInf operator -(const IntInf& rhs) const;
	IntInf operator *(const IntInf& rhs) const;
	IntInf operator /(const IntInf& rhs) const;
	bool operator ==(const IntInf& rhs) const;
	bool operator >(const IntInf& rhs) const;
	bool operator <(const IntInf& rhs) const;
};

#endif 
