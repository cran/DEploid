// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// dEploid
List dEploid(std::string args);
RcppExport SEXP _DEploid_dEploid(SEXP argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type args(argsSEXP);
    rcpp_result_gen = Rcpp::wrap(dEploid(args));
    return rcpp_result_gen;
END_RCPP
}
// extractVcf
Rcpp::DataFrame extractVcf(std::string filename);
RcppExport SEXP _DEploid_extractVcf(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(extractVcf(filename));
    return rcpp_result_gen;
END_RCPP
}
// test_RRG_sample
double test_RRG_sample();
RcppExport SEXP _DEploid_test_RRG_sample() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_RRG_sample());
    return rcpp_result_gen;
END_RCPP
}
// test_RRG_sampleUnitExpo
double test_RRG_sampleUnitExpo();
RcppExport SEXP _DEploid_test_RRG_sampleUnitExpo() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_RRG_sampleUnitExpo());
    return rcpp_result_gen;
END_RCPP
}
// test_RRG_sampleExpoExpoLimit
double test_RRG_sampleExpoExpoLimit(double lambda, double b, double limit);
RcppExport SEXP _DEploid_test_RRG_sampleExpoExpoLimit(SEXP lambdaSEXP, SEXP bSEXP, SEXP limitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type limit(limitSEXP);
    rcpp_result_gen = Rcpp::wrap(test_RRG_sampleExpoExpoLimit(lambda, b, limit));
    return rcpp_result_gen;
END_RCPP
}
