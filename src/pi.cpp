#include <Rcpp.h>

// [[Rcpp::export]]
double pi_sample_rcpp(int n) {
  int tot = 0;
  for (int i = 0; i < n; ++i) {
    double x = unif_rand(), y = unif_rand();
    if (x * x + y * y <= 1) {
      ++tot;
    }
  }
  return 4 * tot / (double) n;
}

// [[Rcpp::export]]
double pi_sample_rcpp2(int n) {
  int tot = 0;
  double x, y;
  for (int i = 0; i < n; ++i) {
    x = unif_rand();
    y = unif_rand();
    if (x * x + y * y <= 1) {
      ++tot;
    }
  }
  return 4 * tot / (double) n;
}
