pi_sample <- function(n) {
  tot <- 0L
  for (i in seq_len(n)) {
    xy <- runif(2L)
    if (sum(xy * xy) <= 1) {
      tot <- tot + 1
    }
  }
  4 * tot / n
}

pi_sample2 <- function(n) {
  x <- runif(n)
  y <- runif(n)
  4 * sum(x * x + y * y <= 1) / n
}

#' Estimate pi by making random draws and doing rejection sampling.
#'
#' @title Estimate pi by random draws
#' @param n The number of draws to make
#' @export
#' @examples
#' estimate_pi(10)
#' # more accurate with bigger n.
#' estimate_pi(100000)
#' pi
estimate_pi <- function(n) {
  pi_sample_rcpp(n)
}
