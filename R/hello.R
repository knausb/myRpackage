#' @title hello
#' @description
#' Says hello.
#' @name hello
#' @param txt something to say hello to
#' 
#' @export
hello <- function(txt = "world") {
    cat("Hello, ", txt, "\n")
}

#' @useDynLib myRpackage
#' @importFrom Rcpp sourceCpp
NULL

