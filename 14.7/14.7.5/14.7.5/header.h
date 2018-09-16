#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>
class abstr_emp
{
private:
	std::string fname;
	std::string lname;
	std::string job;
public:
	abstr_emp():fname("none"),lname("none"),job("none"){}
	abstr_emp(const std::string& fn, const std::string& ln, const std::string& j) :fname(fn),lname(ln),job(j){}
	virtual void ShowAll() const;
	virtual void SetAll();
	friend std::ostream& operator<<(std::ostream& os, const abstr_emp& a);
	virtual ~abstr_emp() = 0;
};
class employee :public abstr_emp
{
public:
	employee();
	employee(const std::string& fn,const std::string& ln,const std::string& j):abstr_emp(fn,ln,j){}
	virtual void ShowAll() const;
	virtual void SetAll();
};
class manager :public virtual abstr_emp
{
private:
	int inchargeof;
protected:
	int InChargeOf() const { return inchargeof; }
	int& InChargeOf() { return inchargeof; }
public:
	manager();
	manager(const std::string& fn,const std::string& ln,const std::string& j,int ico=0):abstr_emp(fn,ln,j),inchargeof(ico){}
	manager(const abstr_emp& e,int ico):abstr_emp(e),inchargeof(ico){}
	manager(const manager& m);
	virtual void ShowAll() const;
	virtual void SetAll();
};
class fink :public virtual abstr_emp
{
private:
	std::string reportsto;
protected:
	const std::string ReportsTo()const { return reportsto; }
	std::string& ReportsTo() { return reportsto; }
public:
	fink();
	fink(const std::string& fn,const std::string& ln,const std::string& j,const std::string& rpo):abstr_emp(fn,ln,j),reportsto(rpo){}
	fink(const abstr_emp& e, const std::string& rpo);
	fink(const fink& e);
	virtual void ShowAll() const;
	virtual void SetAll();
};

class highfink :public fink,public manager
{
public:
	highfink();
	highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo) :abstr_emp(fn, ln, j), manager(fn, ln, j), fink(fn, ln, j, rpo) {}
	highfink(const abstr_emp& e,const std::string& rpo,int ico):abstr_emp(e),fink(e,rpo),manager(e,ico){}
	highfink(const fink& f,int ico):abstr_emp(f),fink(f),manager((const abstr_emp&)f,ico){}
	highfink(const highfink& h);
	virtual void ShowAll() const;
	virtual void SetAll();
};
#endif // !HEADER_H
