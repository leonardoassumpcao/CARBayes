// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// linpredcompute
NumericVector linpredcompute(NumericMatrix X, const int nsites, const int p, NumericVector beta, NumericVector offset);
RcppExport SEXP CARBayes_linpredcompute(SEXP XSEXP, SEXP nsitesSEXP, SEXP pSEXP, SEXP betaSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP);
    __result = Rcpp::wrap(linpredcompute(X, nsites, p, beta, offset));
    return __result;
END_RCPP
}
// quadform
double quadform(NumericMatrix Wtriplet, NumericVector Wtripletsum, const int n_triplet, const int nsites, NumericVector phi, NumericVector theta, double rho);
RcppExport SEXP CARBayes_quadform(SEXP WtripletSEXP, SEXP WtripletsumSEXP, SEXP n_tripletSEXP, SEXP nsitesSEXP, SEXP phiSEXP, SEXP thetaSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type Wtriplet(WtripletSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Wtripletsum(WtripletsumSEXP);
    Rcpp::traits::input_parameter< const int >::type n_triplet(n_tripletSEXP);
    Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    __result = Rcpp::wrap(quadform(Wtriplet, Wtripletsum, n_triplet, nsites, phi, theta, rho));
    return __result;
END_RCPP
}
// binomialcarupdate
List binomialcarupdate(NumericMatrix Wtriplet, NumericMatrix Wbegfin, NumericVector Wtripletsum, const int nsites, NumericVector phi, double tau2, const NumericVector y, const NumericVector failures, const double phi_tune, double rho, NumericVector offset);
RcppExport SEXP CARBayes_binomialcarupdate(SEXP WtripletSEXP, SEXP WbegfinSEXP, SEXP WtripletsumSEXP, SEXP nsitesSEXP, SEXP phiSEXP, SEXP tau2SEXP, SEXP ySEXP, SEXP failuresSEXP, SEXP phi_tuneSEXP, SEXP rhoSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type Wtriplet(WtripletSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Wbegfin(WbegfinSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Wtripletsum(WtripletsumSEXP);
    Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< double >::type tau2(tau2SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type failures(failuresSEXP);
    Rcpp::traits::input_parameter< const double >::type phi_tune(phi_tuneSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP);
    __result = Rcpp::wrap(binomialcarupdate(Wtriplet, Wbegfin, Wtripletsum, nsites, phi, tau2, y, failures, phi_tune, rho, offset));
    return __result;
END_RCPP
}
// binomialbetaupdate
double binomialbetaupdate(NumericMatrix X, const int nsites, const int p, NumericVector beta, NumericVector proposal, NumericVector offset, NumericVector y, NumericVector failures, NumericVector prior_meanbeta, NumericVector prior_varbeta);
RcppExport SEXP CARBayes_binomialbetaupdate(SEXP XSEXP, SEXP nsitesSEXP, SEXP pSEXP, SEXP betaSEXP, SEXP proposalSEXP, SEXP offsetSEXP, SEXP ySEXP, SEXP failuresSEXP, SEXP prior_meanbetaSEXP, SEXP prior_varbetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type proposal(proposalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type failures(failuresSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_meanbeta(prior_meanbetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_varbeta(prior_varbetaSEXP);
    __result = Rcpp::wrap(binomialbetaupdate(X, nsites, p, beta, proposal, offset, y, failures, prior_meanbeta, prior_varbeta));
    return __result;
END_RCPP
}
// binomialindepupdate
List binomialindepupdate(const int nsites, NumericVector theta, double sigma2, const NumericVector y, const NumericVector failures, const double theta_tune, NumericVector offset);
RcppExport SEXP CARBayes_binomialindepupdate(SEXP nsitesSEXP, SEXP thetaSEXP, SEXP sigma2SEXP, SEXP ySEXP, SEXP failuresSEXP, SEXP theta_tuneSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type failures(failuresSEXP);
    Rcpp::traits::input_parameter< const double >::type theta_tune(theta_tuneSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP);
    __result = Rcpp::wrap(binomialindepupdate(nsites, theta, sigma2, y, failures, theta_tune, offset));
    return __result;
END_RCPP
}
// poissonindepupdate
List poissonindepupdate(const int nsites, NumericVector theta, double sigma2, const NumericVector y, const double theta_tune, NumericVector offset);
RcppExport SEXP CARBayes_poissonindepupdate(SEXP nsitesSEXP, SEXP thetaSEXP, SEXP sigma2SEXP, SEXP ySEXP, SEXP theta_tuneSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double >::type theta_tune(theta_tuneSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP);
    __result = Rcpp::wrap(poissonindepupdate(nsites, theta, sigma2, y, theta_tune, offset));
    return __result;
END_RCPP
}
// poissonbetaupdate
double poissonbetaupdate(NumericMatrix X, const int nsites, const int p, NumericVector beta, NumericVector proposal, NumericVector offset, NumericVector y, NumericVector prior_meanbeta, NumericVector prior_varbeta);
RcppExport SEXP CARBayes_poissonbetaupdate(SEXP XSEXP, SEXP nsitesSEXP, SEXP pSEXP, SEXP betaSEXP, SEXP proposalSEXP, SEXP offsetSEXP, SEXP ySEXP, SEXP prior_meanbetaSEXP, SEXP prior_varbetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type proposal(proposalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_meanbeta(prior_meanbetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_varbeta(prior_varbetaSEXP);
    __result = Rcpp::wrap(poissonbetaupdate(X, nsites, p, beta, proposal, offset, y, prior_meanbeta, prior_varbeta));
    return __result;
END_RCPP
}
// poissoncarupdate
List poissoncarupdate(NumericMatrix Wtriplet, NumericMatrix Wbegfin, NumericVector Wtripletsum, const int nsites, NumericVector phi, double tau2, const NumericVector y, const double phi_tune, double rho, NumericVector offset);
RcppExport SEXP CARBayes_poissoncarupdate(SEXP WtripletSEXP, SEXP WbegfinSEXP, SEXP WtripletsumSEXP, SEXP nsitesSEXP, SEXP phiSEXP, SEXP tau2SEXP, SEXP ySEXP, SEXP phi_tuneSEXP, SEXP rhoSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type Wtriplet(WtripletSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Wbegfin(WbegfinSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Wtripletsum(WtripletsumSEXP);
    Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< double >::type tau2(tau2SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double >::type phi_tune(phi_tuneSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP);
    __result = Rcpp::wrap(poissoncarupdate(Wtriplet, Wbegfin, Wtripletsum, nsites, phi, tau2, y, phi_tune, rho, offset));
    return __result;
END_RCPP
}
// gaussiancarupdate
NumericVector gaussiancarupdate(NumericMatrix Wtriplet, NumericMatrix Wbegfin, NumericVector Wtripletsum, const int nsites, NumericVector phi, double tau2, double rho, double nu2, NumericVector offset);
RcppExport SEXP CARBayes_gaussiancarupdate(SEXP WtripletSEXP, SEXP WbegfinSEXP, SEXP WtripletsumSEXP, SEXP nsitesSEXP, SEXP phiSEXP, SEXP tau2SEXP, SEXP rhoSEXP, SEXP nu2SEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type Wtriplet(WtripletSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Wbegfin(WbegfinSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Wtripletsum(WtripletsumSEXP);
    Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< double >::type tau2(tau2SEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type nu2(nu2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP);
    __result = Rcpp::wrap(gaussiancarupdate(Wtriplet, Wbegfin, Wtripletsum, nsites, phi, tau2, rho, nu2, offset));
    return __result;
END_RCPP
}
