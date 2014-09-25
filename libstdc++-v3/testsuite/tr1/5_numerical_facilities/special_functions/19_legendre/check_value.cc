// 2007-02-04  Edward Smith-Rowland <3dw4rd@verizon.net>
//
// Copyright (C) 2007-2014 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

//  legendre


//  Compare against values generated by the GNU Scientific Library.
//  The GSL can be found on the web: http://www.gnu.org/software/gsl/

#include <tr1/cmath>
#if defined(__TEST_DEBUG)
#include <iostream>
#define VERIFY(A) \
if (!(A)) \
  { \
    std::cout << "line " << __LINE__ \
      << "  max_abs_frac = " << max_abs_frac \
      << std::endl; \
  }
#else
#include <testsuite_hooks.h>
#endif
#include "../testcase.h"


// Test data for l=0.
testcase_legendre<double> data001[] = {
  { 1.0000000000000000, 0, -1.0000000000000000 },
  { 1.0000000000000000, 0, -0.90000000000000002 },
  { 1.0000000000000000, 0, -0.80000000000000004 },
  { 1.0000000000000000, 0, -0.69999999999999996 },
  { 1.0000000000000000, 0, -0.59999999999999998 },
  { 1.0000000000000000, 0, -0.50000000000000000 },
  { 1.0000000000000000, 0, -0.40000000000000002 },
  { 1.0000000000000000, 0, -0.30000000000000004 },
  { 1.0000000000000000, 0, -0.19999999999999996 },
  { 1.0000000000000000, 0, -0.099999999999999978 },
  { 1.0000000000000000, 0, 0.0000000000000000 },
  { 1.0000000000000000, 0, 0.10000000000000009 },
  { 1.0000000000000000, 0, 0.19999999999999996 },
  { 1.0000000000000000, 0, 0.30000000000000004 },
  { 1.0000000000000000, 0, 0.39999999999999991 },
  { 1.0000000000000000, 0, 0.50000000000000000 },
  { 1.0000000000000000, 0, 0.60000000000000009 },
  { 1.0000000000000000, 0, 0.69999999999999996 },
  { 1.0000000000000000, 0, 0.80000000000000004 },
  { 1.0000000000000000, 0, 0.89999999999999991 },
  { 1.0000000000000000, 0, 1.0000000000000000 },
};

// Test function for l=0.
template <typename Tp>
void test001()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data001)
                         / sizeof(testcase_legendre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::legendre(Tp(data001[i].l), Tp(data001[i].x));
      const Tp f0 = data001[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

// Test data for l=1.
testcase_legendre<double> data002[] = {
  { -1.0000000000000000, 1, -1.0000000000000000 },
  { -0.90000000000000002, 1, -0.90000000000000002 },
  { -0.80000000000000004, 1, -0.80000000000000004 },
  { -0.69999999999999996, 1, -0.69999999999999996 },
  { -0.59999999999999998, 1, -0.59999999999999998 },
  { -0.50000000000000000, 1, -0.50000000000000000 },
  { -0.40000000000000002, 1, -0.40000000000000002 },
  { -0.30000000000000004, 1, -0.30000000000000004 },
  { -0.19999999999999996, 1, -0.19999999999999996 },
  { -0.099999999999999978, 1, -0.099999999999999978 },
  { 0.0000000000000000, 1, 0.0000000000000000 },
  { 0.10000000000000009, 1, 0.10000000000000009 },
  { 0.19999999999999996, 1, 0.19999999999999996 },
  { 0.30000000000000004, 1, 0.30000000000000004 },
  { 0.39999999999999991, 1, 0.39999999999999991 },
  { 0.50000000000000000, 1, 0.50000000000000000 },
  { 0.60000000000000009, 1, 0.60000000000000009 },
  { 0.69999999999999996, 1, 0.69999999999999996 },
  { 0.80000000000000004, 1, 0.80000000000000004 },
  { 0.89999999999999991, 1, 0.89999999999999991 },
  { 1.0000000000000000, 1, 1.0000000000000000 },
};

// Test function for l=1.
template <typename Tp>
void test002()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data002)
                         / sizeof(testcase_legendre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::legendre(Tp(data002[i].l), Tp(data002[i].x));
      const Tp f0 = data002[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

// Test data for l=2.
testcase_legendre<double> data003[] = {
  { 1.0000000000000000, 2, -1.0000000000000000 },
  { 0.71500000000000008, 2, -0.90000000000000002 },
  { 0.46000000000000019, 2, -0.80000000000000004 },
  { 0.23499999999999988, 2, -0.69999999999999996 },
  { 0.039999999999999925, 2, -0.59999999999999998 },
  { -0.12500000000000000, 2, -0.50000000000000000 },
  { -0.25999999999999995, 2, -0.40000000000000002 },
  { -0.36499999999999999, 2, -0.30000000000000004 },
  { -0.44000000000000006, 2, -0.19999999999999996 },
  { -0.48499999999999999, 2, -0.099999999999999978 },
  { -0.50000000000000000, 2, 0.0000000000000000 },
  { -0.48499999999999999, 2, 0.10000000000000009 },
  { -0.44000000000000006, 2, 0.19999999999999996 },
  { -0.36499999999999999, 2, 0.30000000000000004 },
  { -0.26000000000000012, 2, 0.39999999999999991 },
  { -0.12500000000000000, 2, 0.50000000000000000 },
  { 0.040000000000000147, 2, 0.60000000000000009 },
  { 0.23499999999999988, 2, 0.69999999999999996 },
  { 0.46000000000000019, 2, 0.80000000000000004 },
  { 0.71499999999999986, 2, 0.89999999999999991 },
  { 1.0000000000000000, 2, 1.0000000000000000 },
};

// Test function for l=2.
template <typename Tp>
void test003()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data003)
                         / sizeof(testcase_legendre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::legendre(Tp(data003[i].l), Tp(data003[i].x));
      const Tp f0 = data003[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

// Test data for l=5.
testcase_legendre<double> data004[] = {
  { -1.0000000000000000, 5, -1.0000000000000000 },
  { 0.041141249999999997, 5, -0.90000000000000002 },
  { 0.39951999999999993, 5, -0.80000000000000004 },
  { 0.36519874999999991, 5, -0.69999999999999996 },
  { 0.15263999999999994, 5, -0.59999999999999998 },
  { -0.089843750000000000, 5, -0.50000000000000000 },
  { -0.27063999999999988, 5, -0.40000000000000002 },
  { -0.34538624999999995, 5, -0.30000000000000004 },
  { -0.30751999999999996, 5, -0.19999999999999996 },
  { -0.17882874999999995, 5, -0.099999999999999978 },
  { 0.0000000000000000, 5, 0.0000000000000000 },
  { 0.17882875000000015, 5, 0.10000000000000009 },
  { 0.30751999999999996, 5, 0.19999999999999996 },
  { 0.34538624999999995, 5, 0.30000000000000004 },
  { 0.27064000000000010, 5, 0.39999999999999991 },
  { 0.089843750000000000, 5, 0.50000000000000000 },
  { -0.15264000000000022, 5, 0.60000000000000009 },
  { -0.36519874999999991, 5, 0.69999999999999996 },
  { -0.39951999999999993, 5, 0.80000000000000004 },
  { -0.041141250000000407, 5, 0.89999999999999991 },
  { 1.0000000000000000, 5, 1.0000000000000000 },
};

// Test function for l=5.
template <typename Tp>
void test004()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data004)
                         / sizeof(testcase_legendre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::legendre(Tp(data004[i].l), Tp(data004[i].x));
      const Tp f0 = data004[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

// Test data for l=10.
testcase_legendre<double> data005[] = {
  { 1.0000000000000000, 10, -1.0000000000000000 },
  { -0.26314561785585977, 10, -0.90000000000000002 },
  { 0.30052979559999998, 10, -0.80000000000000004 },
  { 0.085805795531640333, 10, -0.69999999999999996 },
  { -0.24366274560000006, 10, -0.59999999999999998 },
  { -0.18822860717773438, 10, -0.50000000000000000 },
  { 0.096839064399999869, 10, -0.40000000000000002 },
  { 0.25147634951601561, 10, -0.30000000000000004 },
  { 0.12907202559999989, 10, -0.19999999999999996 },
  { -0.12212499738710947, 10, -0.099999999999999978 },
  { -0.24609375000000000, 10, 0.0000000000000000 },
  { -0.12212499738710922, 10, 0.10000000000000009 },
  { 0.12907202559999989, 10, 0.19999999999999996 },
  { 0.25147634951601561, 10, 0.30000000000000004 },
  { 0.096839064400000258, 10, 0.39999999999999991 },
  { -0.18822860717773438, 10, 0.50000000000000000 },
  { -0.24366274559999987, 10, 0.60000000000000009 },
  { 0.085805795531640333, 10, 0.69999999999999996 },
  { 0.30052979559999998, 10, 0.80000000000000004 },
  { -0.26314561785585888, 10, 0.89999999999999991 },
  { 1.0000000000000000, 10, 1.0000000000000000 },
};

// Test function for l=10.
template <typename Tp>
void test005()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data005)
                         / sizeof(testcase_legendre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::legendre(Tp(data005[i].l), Tp(data005[i].x));
      const Tp f0 = data005[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

// Test data for l=20.
testcase_legendre<double> data006[] = {
  { 1.0000000000000000, 20, -1.0000000000000000 },
  { -0.14930823530984821, 20, -0.90000000000000002 },
  { 0.22420460541741344, 20, -0.80000000000000004 },
  { -0.20457394463834172, 20, -0.69999999999999996 },
  { 0.15916752910098114, 20, -0.59999999999999998 },
  { -0.048358381067373557, 20, -0.50000000000000000 },
  { -0.10159261558628156, 20, -0.40000000000000002 },
  { 0.18028715947998047, 20, -0.30000000000000004 },
  { -0.098042194344594741, 20, -0.19999999999999996 },
  { -0.082077130944527649, 20, -0.099999999999999978 },
  { 0.17619705200195312, 20, 0.0000000000000000 },
  { -0.082077130944528037, 20, 0.10000000000000009 },
  { -0.098042194344594741, 20, 0.19999999999999996 },
  { 0.18028715947998047, 20, 0.30000000000000004 },
  { -0.10159261558628112, 20, 0.39999999999999991 },
  { -0.048358381067373557, 20, 0.50000000000000000 },
  { 0.15916752910098084, 20, 0.60000000000000009 },
  { -0.20457394463834172, 20, 0.69999999999999996 },
  { 0.22420460541741344, 20, 0.80000000000000004 },
  { -0.14930823530984949, 20, 0.89999999999999991 },
  { 1.0000000000000000, 20, 1.0000000000000000 },
};

// Test function for l=20.
template <typename Tp>
void test006()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data006)
                         / sizeof(testcase_legendre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::legendre(Tp(data006[i].l), Tp(data006[i].x));
      const Tp f0 = data006[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

// Test data for l=50.
testcase_legendre<double> data007[] = {
  { 1.0000000000000000, 50, -1.0000000000000000 },
  { -0.17003765994383685, 50, -0.90000000000000002 },
  { 0.13879737345093118, 50, -0.80000000000000004 },
  { -0.014572731645892805, 50, -0.69999999999999996 },
  { -0.058860798844002173, 50, -0.59999999999999998 },
  { -0.031059099239609828, 50, -0.50000000000000000 },
  { 0.041569033381825368, 50, -0.40000000000000002 },
  { 0.10911051574714808, 50, -0.30000000000000004 },
  { 0.083432272204197466, 50, -0.19999999999999996 },
  { -0.038205812661313579, 50, -0.099999999999999978 },
  { -0.11227517265921705, 50, 0.0000000000000000 },
  { -0.038205812661314169, 50, 0.10000000000000009 },
  { 0.083432272204197466, 50, 0.19999999999999996 },
  { 0.10911051574714808, 50, 0.30000000000000004 },
  { 0.041569033381824647, 50, 0.39999999999999991 },
  { -0.031059099239609828, 50, 0.50000000000000000 },
  { -0.058860798844001430, 50, 0.60000000000000009 },
  { -0.014572731645892805, 50, 0.69999999999999996 },
  { 0.13879737345093118, 50, 0.80000000000000004 },
  { -0.17003765994383663, 50, 0.89999999999999991 },
  { 1.0000000000000000, 50, 1.0000000000000000 },
};

// Test function for l=50.
template <typename Tp>
void test007()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data007)
                         / sizeof(testcase_legendre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::legendre(Tp(data007[i].l), Tp(data007[i].x));
      const Tp f0 = data007[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

// Test data for l=100.
testcase_legendre<double> data008[] = {
  { 1.0000000000000000, 100, -1.0000000000000000 },
  { 0.10226582055871908, 100, -0.90000000000000002 },
  { 0.050861167913584124, 100, -0.80000000000000004 },
  { -0.077132507199778780, 100, -0.69999999999999996 },
  { -0.023747023905133110, 100, -0.59999999999999998 },
  { -0.060518025961861198, 100, -0.50000000000000000 },
  { -0.072258202125684429, 100, -0.40000000000000002 },
  { 0.057127392202801719, 100, -0.30000000000000004 },
  { 0.014681835355659636, 100, -0.19999999999999996 },
  { -0.063895098434750303, 100, -0.099999999999999978 },
  { 0.079589237387178727, 100, 0.0000000000000000 },
  { -0.063895098434749775, 100, 0.10000000000000009 },
  { 0.014681835355659636, 100, 0.19999999999999996 },
  { 0.057127392202801719, 100, 0.30000000000000004 },
  { -0.072258202125685012, 100, 0.39999999999999991 },
  { -0.060518025961861198, 100, 0.50000000000000000 },
  { -0.023747023905134217, 100, 0.60000000000000009 },
  { -0.077132507199778780, 100, 0.69999999999999996 },
  { 0.050861167913584124, 100, 0.80000000000000004 },
  { 0.10226582055871723, 100, 0.89999999999999991 },
  { 1.0000000000000000, 100, 1.0000000000000000 },
};

// Test function for l=100.
template <typename Tp>
void test008()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data008)
                         / sizeof(testcase_legendre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::legendre(Tp(data008[i].l), Tp(data008[i].x));
      const Tp f0 = data008[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

int main(int, char**)
{
  test001<double>();
  test002<double>();
  test003<double>();
  test004<double>();
  test005<double>();
  test006<double>();
  test007<double>();
  test008<double>();
  return 0;
}
