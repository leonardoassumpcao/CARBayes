// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// linpredcompute
NumericVector linpredcompute(NumericMatrix X, const int nsites, const int p, NumericVector beta, NumericVector offset);
RcppExport SEXP CARBayes_linpredcompute(SEXP XSEXP, SEXP nsitesSEXP, SEXP pSEXP, SEXP betaSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP );
        Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP );
        Rcpp::traits::input_parameter< const int >::type p(pSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP );
        NumericVector __result = linpredcompute(X, nsites, p, beta, offset);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// binomialbetaupdate
double binomialbetaupdate(NumericMatrix X, const int nsites, const int p, NumericVector beta, NumericVector proposal, NumericVector offset, NumericVector y, NumericVector failures, NumericVector prior_meanbeta, NumericVector prior_varbeta);
RcppExport SEXP CARBayes_binomialbetaupdate(SEXP XSEXP, SEXP nsitesSEXP, SEXP pSEXP, SEXP betaSEXP, SEXP proposalSEXP, SEXP offsetSEXP, SEXP ySEXP, SEXP failuresSEXP, SEXP prior_meanbetaSEXP, SEXP prior_varbetaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP );
        Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP );
        Rcpp::traits::input_parameter< const int >::type p(pSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type proposal(proposalSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type failures(failuresSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type prior_meanbeta(prior_meanbetaSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type prior_varbeta(prior_varbetaSEXP );
        double __result = binomialbetaupdate(X, nsites, p, beta, proposal, offset, y, failures, prior_meanbeta, prior_varbeta);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// quadform
double quadform(IntegerVector W_duplet1, IntegerVector W_duplet2, const int n_duplet, const int nsites, NumericVector phi, NumericVector nneighbours, double diagonal, double offdiagonal);
RcppExport SEXP CARBayes_quadform(SEXP W_duplet1SEXP, SEXP W_duplet2SEXP, SEXP n_dupletSEXP, SEXP nsitesSEXP, SEXP phiSEXP, SEXP nneighboursSEXP, SEXP diagonalSEXP, SEXP offdiagonalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type W_duplet1(W_duplet1SEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type W_duplet2(W_duplet2SEXP );
        Rcpp::traits::input_parameter< const int >::type n_duplet(n_dupletSEXP );
        Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type phi(phiSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type nneighbours(nneighboursSEXP );
        Rcpp::traits::input_parameter< double >::type diagonal(diagonalSEXP );
        Rcpp::traits::input_parameter< double >::type offdiagonal(offdiagonalSEXP );
        double __result = quadform(W_duplet1, W_duplet2, n_duplet, nsites, phi, nneighbours, diagonal, offdiagonal);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// binomialcarupdate
List binomialcarupdate(List W_list, const int nsites, NumericVector phi, NumericVector nneighbours, double tau2, const NumericVector y, const NumericVector failures, const double phi_tune, double rho_num, double rho_den, NumericVector offset);
RcppExport SEXP CARBayes_binomialcarupdate(SEXP W_listSEXP, SEXP nsitesSEXP, SEXP phiSEXP, SEXP nneighboursSEXP, SEXP tau2SEXP, SEXP ySEXP, SEXP failuresSEXP, SEXP phi_tuneSEXP, SEXP rho_numSEXP, SEXP rho_denSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type W_list(W_listSEXP );
        Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type phi(phiSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type nneighbours(nneighboursSEXP );
        Rcpp::traits::input_parameter< double >::type tau2(tau2SEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type failures(failuresSEXP );
        Rcpp::traits::input_parameter< const double >::type phi_tune(phi_tuneSEXP );
        Rcpp::traits::input_parameter< double >::type rho_num(rho_numSEXP );
        Rcpp::traits::input_parameter< double >::type rho_den(rho_denSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP );
        List __result = binomialcarupdate(W_list, nsites, phi, nneighbours, tau2, y, failures, phi_tune, rho_num, rho_den, offset);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// binomialindepupdate
List binomialindepupdate(const int nsites, NumericVector theta, double sigma2, const NumericVector y, const NumericVector failures, const double theta_tune, NumericVector offset);
RcppExport SEXP CARBayes_binomialindepupdate(SEXP nsitesSEXP, SEXP thetaSEXP, SEXP sigma2SEXP, SEXP ySEXP, SEXP failuresSEXP, SEXP theta_tuneSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP );
        Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type failures(failuresSEXP );
        Rcpp::traits::input_parameter< const double >::type theta_tune(theta_tuneSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP );
        List __result = binomialindepupdate(nsites, theta, sigma2, y, failures, theta_tune, offset);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// poissonindepupdate
List poissonindepupdate(const int nsites, NumericVector theta, double sigma2, const NumericVector y, const double theta_tune, NumericVector offset);
RcppExport SEXP CARBayes_poissonindepupdate(SEXP nsitesSEXP, SEXP thetaSEXP, SEXP sigma2SEXP, SEXP ySEXP, SEXP theta_tuneSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP );
        Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< const double >::type theta_tune(theta_tuneSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP );
        List __result = poissonindepupdate(nsites, theta, sigma2, y, theta_tune, offset);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// poissoncarupdate
List poissoncarupdate(List W_list, const int nsites, NumericVector phi, NumericVector nneighbours, double tau2, const NumericVector y, const double phi_tune, double rho_num, double rho_den, NumericVector offset);
RcppExport SEXP CARBayes_poissoncarupdate(SEXP W_listSEXP, SEXP nsitesSEXP, SEXP phiSEXP, SEXP nneighboursSEXP, SEXP tau2SEXP, SEXP ySEXP, SEXP phi_tuneSEXP, SEXP rho_numSEXP, SEXP rho_denSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type W_list(W_listSEXP );
        Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type phi(phiSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type nneighbours(nneighboursSEXP );
        Rcpp::traits::input_parameter< double >::type tau2(tau2SEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< const double >::type phi_tune(phi_tuneSEXP );
        Rcpp::traits::input_parameter< double >::type rho_num(rho_numSEXP );
        Rcpp::traits::input_parameter< double >::type rho_den(rho_denSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP );
        List __result = poissoncarupdate(W_list, nsites, phi, nneighbours, tau2, y, phi_tune, rho_num, rho_den, offset);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// poissonbetaupdate
double poissonbetaupdate(NumericMatrix X, const int nsites, const int p, NumericVector beta, NumericVector proposal, NumericVector offset, NumericVector y, NumericVector prior_meanbeta, NumericVector prior_varbeta);
RcppExport SEXP CARBayes_poissonbetaupdate(SEXP XSEXP, SEXP nsitesSEXP, SEXP pSEXP, SEXP betaSEXP, SEXP proposalSEXP, SEXP offsetSEXP, SEXP ySEXP, SEXP prior_meanbetaSEXP, SEXP prior_varbetaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP );
        Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP );
        Rcpp::traits::input_parameter< const int >::type p(pSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type proposal(proposalSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type prior_meanbeta(prior_meanbetaSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type prior_varbeta(prior_varbetaSEXP );
        double __result = poissonbetaupdate(X, nsites, p, beta, proposal, offset, y, prior_meanbeta, prior_varbeta);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// gaussiancarupdate
NumericVector gaussiancarupdate(List W_list, const int nsites, NumericVector phi, NumericVector nneighbours, double tau2, double rho_num, double rho_den, double nu2, NumericVector offset);
RcppExport SEXP CARBayes_gaussiancarupdate(SEXP W_listSEXP, SEXP nsitesSEXP, SEXP phiSEXP, SEXP nneighboursSEXP, SEXP tau2SEXP, SEXP rho_numSEXP, SEXP rho_denSEXP, SEXP nu2SEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type W_list(W_listSEXP );
        Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type phi(phiSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type nneighbours(nneighboursSEXP );
        Rcpp::traits::input_parameter< double >::type tau2(tau2SEXP );
        Rcpp::traits::input_parameter< double >::type rho_num(rho_numSEXP );
        Rcpp::traits::input_parameter< double >::type rho_den(rho_denSEXP );
        Rcpp::traits::input_parameter< double >::type nu2(nu2SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP );
        NumericVector __result = gaussiancarupdate(W_list, nsites, phi, nneighbours, tau2, rho_num, rho_den, nu2, offset);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// poissondissimilaritycarupdate
List poissondissimilaritycarupdate(NumericMatrix Wtriplet, NumericMatrix Wbegfin, const int nsites, NumericVector phi, double tau2, const NumericVector y, const double phi_tune, double rho, NumericVector offset);
RcppExport SEXP CARBayes_poissondissimilaritycarupdate(SEXP WtripletSEXP, SEXP WbegfinSEXP, SEXP nsitesSEXP, SEXP phiSEXP, SEXP tau2SEXP, SEXP ySEXP, SEXP phi_tuneSEXP, SEXP rhoSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type Wtriplet(WtripletSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type Wbegfin(WbegfinSEXP );
        Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type phi(phiSEXP );
        Rcpp::traits::input_parameter< double >::type tau2(tau2SEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< const double >::type phi_tune(phi_tuneSEXP );
        Rcpp::traits::input_parameter< double >::type rho(rhoSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP );
        List __result = poissondissimilaritycarupdate(Wtriplet, Wbegfin, nsites, phi, tau2, y, phi_tune, rho, offset);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// binomialdissimilaritycarupdate
List binomialdissimilaritycarupdate(NumericMatrix Wtriplet, NumericMatrix Wbegfin, const int nsites, NumericVector phi, double tau2, const NumericVector y, const NumericVector failures, const double phi_tune, double rho, NumericVector offset);
RcppExport SEXP CARBayes_binomialdissimilaritycarupdate(SEXP WtripletSEXP, SEXP WbegfinSEXP, SEXP nsitesSEXP, SEXP phiSEXP, SEXP tau2SEXP, SEXP ySEXP, SEXP failuresSEXP, SEXP phi_tuneSEXP, SEXP rhoSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type Wtriplet(WtripletSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type Wbegfin(WbegfinSEXP );
        Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type phi(phiSEXP );
        Rcpp::traits::input_parameter< double >::type tau2(tau2SEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type failures(failuresSEXP );
        Rcpp::traits::input_parameter< const double >::type phi_tune(phi_tuneSEXP );
        Rcpp::traits::input_parameter< double >::type rho(rhoSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP );
        List __result = binomialdissimilaritycarupdate(Wtriplet, Wbegfin, nsites, phi, tau2, y, failures, phi_tune, rho, offset);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// gaussiandissimilaritycarupdate
NumericVector gaussiandissimilaritycarupdate(NumericMatrix Wtriplet, NumericMatrix Wbegfin, const int nsites, NumericVector phi, double tau2, double rho, double nu2, NumericVector offset);
RcppExport SEXP CARBayes_gaussiandissimilaritycarupdate(SEXP WtripletSEXP, SEXP WbegfinSEXP, SEXP nsitesSEXP, SEXP phiSEXP, SEXP tau2SEXP, SEXP rhoSEXP, SEXP nu2SEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type Wtriplet(WtripletSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type Wbegfin(WbegfinSEXP );
        Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type phi(phiSEXP );
        Rcpp::traits::input_parameter< double >::type tau2(tau2SEXP );
        Rcpp::traits::input_parameter< double >::type rho(rhoSEXP );
        Rcpp::traits::input_parameter< double >::type nu2(nu2SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type offset(offsetSEXP );
        NumericVector __result = gaussiandissimilaritycarupdate(Wtriplet, Wbegfin, nsites, phi, tau2, rho, nu2, offset);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// quadformW
double quadformW(NumericMatrix Wtriplet, NumericMatrix Wbegfin, const int n_triplet, const int nsites, NumericVector phi, double rho);
RcppExport SEXP CARBayes_quadformW(SEXP WtripletSEXP, SEXP WbegfinSEXP, SEXP n_tripletSEXP, SEXP nsitesSEXP, SEXP phiSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type Wtriplet(WtripletSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type Wbegfin(WbegfinSEXP );
        Rcpp::traits::input_parameter< const int >::type n_triplet(n_tripletSEXP );
        Rcpp::traits::input_parameter< const int >::type nsites(nsitesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type phi(phiSEXP );
        Rcpp::traits::input_parameter< double >::type rho(rhoSEXP );
        double __result = quadformW(Wtriplet, Wbegfin, n_triplet, nsites, phi, rho);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
