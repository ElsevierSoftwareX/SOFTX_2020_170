// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cderivate_mat
arma::mat cderivate_mat(arma::mat X, arma::rowvec v);
RcppExport SEXP _uFTIR_cderivate_mat(SEXP XSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(cderivate_mat(X, v));
    return rcpp_result_gen;
END_RCPP
}
// cderivate_cube
arma::cube cderivate_cube(arma::cube myCube, arma::vec v);
RcppExport SEXP _uFTIR_cderivate_cube(SEXP myCubeSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type myCube(myCubeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(cderivate_cube(myCube, v));
    return rcpp_result_gen;
END_RCPP
}
// cget_particles
arma::mat cget_particles(arma::mat A);
RcppExport SEXP _uFTIR_cget_particles(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(cget_particles(A));
    return rcpp_result_gen;
END_RCPP
}
// cmosaic_clusterfind
arma::cube cmosaic_clusterfind(arma::cube sam_match, arma::rowvec clusters);
RcppExport SEXP _uFTIR_cmosaic_clusterfind(SEXP sam_matchSEXP, SEXP clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type sam_match(sam_matchSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type clusters(clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(cmosaic_clusterfind(sam_match, clusters));
    return rcpp_result_gen;
END_RCPP
}
// cmosaic_compose
arma::cube cmosaic_compose(Rcpp::StringVector file, arma::mat xy_pos, int xmax, int ymax);
RcppExport SEXP _uFTIR_cmosaic_compose(SEXP fileSEXP, SEXP xy_posSEXP, SEXP xmaxSEXP, SEXP ymaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type file(fileSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xy_pos(xy_posSEXP);
    Rcpp::traits::input_parameter< int >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< int >::type ymax(ymaxSEXP);
    rcpp_result_gen = Rcpp::wrap(cmosaic_compose(file, xy_pos, xmax, ymax));
    return rcpp_result_gen;
END_RCPP
}
// csmooth_sam
arma::cube csmooth_sam(arma::cube myCube, int wind, int bins, int nslices);
RcppExport SEXP _uFTIR_csmooth_sam(SEXP myCubeSEXP, SEXP windSEXP, SEXP binsSEXP, SEXP nslicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type myCube(myCubeSEXP);
    Rcpp::traits::input_parameter< int >::type wind(windSEXP);
    Rcpp::traits::input_parameter< int >::type bins(binsSEXP);
    Rcpp::traits::input_parameter< int >::type nslices(nslicesSEXP);
    rcpp_result_gen = Rcpp::wrap(csmooth_sam(myCube, wind, bins, nslices));
    return rcpp_result_gen;
END_RCPP
}
// mosaic_read_chunk
arma::cube mosaic_read_chunk(char const* filename, int fpa, int wl);
RcppExport SEXP _uFTIR_mosaic_read_chunk(SEXP filenameSEXP, SEXP fpaSEXP, SEXP wlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< char const* >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type fpa(fpaSEXP);
    Rcpp::traits::input_parameter< int >::type wl(wlSEXP);
    rcpp_result_gen = Rcpp::wrap(mosaic_read_chunk(filename, fpa, wl));
    return rcpp_result_gen;
END_RCPP
}
// mosaic_sam_write
int mosaic_sam_write(arma::cube A, char const* filename);
RcppExport SEXP _uFTIR_mosaic_sam_write(SEXP ASEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type A(ASEXP);
    Rcpp::traits::input_parameter< char const* >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(mosaic_sam_write(A, filename));
    return rcpp_result_gen;
END_RCPP
}
// read_cube
arma::cube read_cube(std::string x);
RcppExport SEXP _uFTIR_read_cube(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(read_cube(x));
    return rcpp_result_gen;
END_RCPP
}
// sam_main
arma::cube sam_main(arma::cube myCube, arma::mat em);
RcppExport SEXP _uFTIR_sam_main(SEXP myCubeSEXP, SEXP emSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type myCube(myCubeSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type em(emSEXP);
    rcpp_result_gen = Rcpp::wrap(sam_main(myCube, em));
    return rcpp_result_gen;
END_RCPP
}
// sam_match
arma::ucube sam_match(arma::cube myCube);
RcppExport SEXP _uFTIR_sam_match(SEXP myCubeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type myCube(myCubeSEXP);
    rcpp_result_gen = Rcpp::wrap(sam_match(myCube));
    return rcpp_result_gen;
END_RCPP
}
// ctile_sam
Rcpp::List ctile_sam(arma::cube myCube, arma::mat em);
RcppExport SEXP _uFTIR_ctile_sam(SEXP myCubeSEXP, SEXP emSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type myCube(myCubeSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type em(emSEXP);
    rcpp_result_gen = Rcpp::wrap(ctile_sam(myCube, em));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_uFTIR_cderivate_mat", (DL_FUNC) &_uFTIR_cderivate_mat, 2},
    {"_uFTIR_cderivate_cube", (DL_FUNC) &_uFTIR_cderivate_cube, 2},
    {"_uFTIR_cget_particles", (DL_FUNC) &_uFTIR_cget_particles, 1},
    {"_uFTIR_cmosaic_clusterfind", (DL_FUNC) &_uFTIR_cmosaic_clusterfind, 2},
    {"_uFTIR_cmosaic_compose", (DL_FUNC) &_uFTIR_cmosaic_compose, 4},
    {"_uFTIR_csmooth_sam", (DL_FUNC) &_uFTIR_csmooth_sam, 4},
    {"_uFTIR_mosaic_read_chunk", (DL_FUNC) &_uFTIR_mosaic_read_chunk, 3},
    {"_uFTIR_mosaic_sam_write", (DL_FUNC) &_uFTIR_mosaic_sam_write, 2},
    {"_uFTIR_read_cube", (DL_FUNC) &_uFTIR_read_cube, 1},
    {"_uFTIR_sam_main", (DL_FUNC) &_uFTIR_sam_main, 2},
    {"_uFTIR_sam_match", (DL_FUNC) &_uFTIR_sam_match, 1},
    {"_uFTIR_ctile_sam", (DL_FUNC) &_uFTIR_ctile_sam, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_uFTIR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
