// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// arrange_genes
IntegerVector arrange_genes(const NumericVector& start, const NumericVector& end);
RcppExport SEXP _qtl2ggplot_arrange_genes(SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type start(startSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(arrange_genes(start, end));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_qtl2ggplot_arrange_genes", (DL_FUNC) &_qtl2ggplot_arrange_genes, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_qtl2ggplot(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
