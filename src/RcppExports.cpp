// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// pi_sample_rcpp
double pi_sample_rcpp(int n);
RcppExport SEXP testing_pi_sample_rcpp(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(pi_sample_rcpp(n));
    return __result;
END_RCPP
}
// pi_sample_rcpp2
double pi_sample_rcpp2(int n);
RcppExport SEXP testing_pi_sample_rcpp2(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(pi_sample_rcpp2(n));
    return __result;
END_RCPP
}
// hello_world
double hello_world();
RcppExport SEXP testing_hello_world() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(hello_world());
    return __result;
END_RCPP
}
// hello_world2
std::vector<double> hello_world2(int n);
RcppExport SEXP testing_hello_world2(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(hello_world2(n));
    return __result;
END_RCPP
}
// hello_world3
Rcpp::NumericVector hello_world3(int n);
RcppExport SEXP testing_hello_world3(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(hello_world3(n));
    return __result;
END_RCPP
}
// hello_world4
Rcpp::NumericVector hello_world4(int n);
RcppExport SEXP testing_hello_world4(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(hello_world4(n));
    return __result;
END_RCPP
}
