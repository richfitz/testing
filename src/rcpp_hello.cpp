#include <Rcpp.h>

// [[Rcpp::export]]
double hello_world() {
  return R::rcauchy(0, 1);
}

// [[Rcpp::export]]
std::vector<double> hello_world2(int n) {
  std::vector<double> ret(n);
  for (int i = 0; i < n; ++i) {
    ret[i] = R::rcauchy(0, 1);
  }
  return ret;
}

// [[Rcpp::export]]
Rcpp::NumericVector hello_world3(int n) {
  Rcpp::NumericVector ret(n);
  for (int i = 0; i < n; ++i) {
    ret[i] = R::rcauchy(0, 1);
  }
  return ret;
}

// [[Rcpp::export]]
Rcpp::NumericVector hello_world4(int n) {
  return Rcpp::rcauchy(n, 0, 1);
}
