/*################################################################################
  ##
  ##   Copyright (C) 2011-2017 Keith O'Hara
  ##
  ##   This file is part of the StatsLib C++ library.
  ##
  ##   StatsLib is free software: you can redistribute it and/or modify
  ##   it under the terms of the GNU General Public License as published by
  ##   the Free Software Foundation, either version 2 of the License, or
  ##   (at your option) any later version.
  ##
  ##   StatsLib is distributed in the hope that it will be useful,
  ##   but WITHOUT ANY WARRANTY; without even the implied warranty of
  ##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  ##   GNU General Public License for more details.
  ##
  ################################################################################*/

/*
 * cdf of the univariate normal distribution
 *
 * Keith O'Hara
 * 01/03/2016
 *
 * This version:
 * 06/23/2017
 */

#ifndef _stats_pnorm_HPP
#define _stats_pnorm_HPP

// single input
double pnorm_int(double x, const double* mu_inp, const double* sigma_inp, bool log_form);

double pnorm(double x);
double pnorm(double x, bool log_form);
double pnorm(double x, double mu, double sigma);
double pnorm(double x, double mu, double sigma, bool log_form);

// vector input
arma::vec pnorm_int(const arma::vec& x, const double* mu_inp, const double* sigma_inp, bool log_form);

arma::vec pnorm(const arma::vec& x);
arma::vec pnorm(const arma::vec& x, bool log_form);
arma::vec pnorm(const arma::vec& x, double mu, double sigma);
arma::vec pnorm(const arma::vec& x, double mu, double sigma, bool log_form);

#include "pnorm.ipp"

#endif