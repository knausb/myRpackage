#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/*
  The following symbols/expressions for .NAME have been omitted

    vcfR_AD_frequency
    vcfR_extract_GT_to_CM
    vcfR_extract_GT_to_CM2
    vcfR_CM_to_NM
    vcfR_extract_haps
    vcfR_grepa
    vcfR_freq_peak
    vcfR_gt_to_popsum
    vcfR_is_het
    vcfR_masplit
    vcfR_NM2winNM
    vcfR_windowize_NM
    vcfR_pair_sort
    vcfR_rank_variants
    vcfR_seq_to_rects
    vcfR_window_init
    vcfR_windowize_fasta
    vcfR_windowize_variants
    vcfR_windowize_annotations
    vcfR_vcf_stats_gz
    vcfR_read_meta_gz
    vcfR_read_body_gz
    vcfR_write_vcf_body
    vcfR_write_fasta

  Most likely possible values need to be added below.
*/

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP vcfR_CM_to_NM(SEXP);
extern SEXP vcfR_extract_GT_to_CM2(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP vcfR_extract_haps(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP vcfR_gt_to_popsum(SEXP, SEXP);
extern SEXP vcfR_NM2winNM(SEXP, SEXP, SEXP, SEXP);
extern SEXP vcfR_rank_variants(SEXP, SEXP, SEXP);
extern SEXP vcfR_read_body_gz(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP vcfR_read_meta_gz(SEXP, SEXP, SEXP);
extern SEXP vcfR_seq_to_rects(SEXP, SEXP);
extern SEXP vcfR_vcf_stats_gz(SEXP);
extern SEXP vcfR_window_init(SEXP, SEXP);
extern SEXP vcfR_windowize_annotations(SEXP, SEXP, SEXP, SEXP);
extern SEXP vcfR_windowize_fasta(SEXP, SEXP);
extern SEXP vcfR_windowize_NM(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP vcfR_windowize_variants(SEXP, SEXP);
extern SEXP vcfR_write_fasta(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP vcfR_write_vcf_body(SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"vcfR_CM_to_NM",              (DL_FUNC) &vcfR_CM_to_NM,              1},
    {"vcfR_extract_GT_to_CM2",     (DL_FUNC) &vcfR_extract_GT_to_CM2,     6},
    {"vcfR_extract_haps",          (DL_FUNC) &vcfR_extract_haps,          5},
    {"vcfR_gt_to_popsum",          (DL_FUNC) &vcfR_gt_to_popsum,          2},
    {"vcfR_NM2winNM",              (DL_FUNC) &vcfR_NM2winNM,              4},
    {"vcfR_rank_variants",         (DL_FUNC) &vcfR_rank_variants,         3},
    {"vcfR_read_body_gz",          (DL_FUNC) &vcfR_read_body_gz,          7},
    {"vcfR_read_meta_gz",          (DL_FUNC) &vcfR_read_meta_gz,          3},
    {"vcfR_seq_to_rects",          (DL_FUNC) &vcfR_seq_to_rects,          2},
    {"vcfR_vcf_stats_gz",          (DL_FUNC) &vcfR_vcf_stats_gz,          1},
    {"vcfR_window_init",           (DL_FUNC) &vcfR_window_init,           2},
    {"vcfR_windowize_annotations", (DL_FUNC) &vcfR_windowize_annotations, 4},
    {"vcfR_windowize_fasta",       (DL_FUNC) &vcfR_windowize_fasta,       2},
    {"vcfR_windowize_NM",          (DL_FUNC) &vcfR_windowize_NM,          5},
    {"vcfR_windowize_variants",    (DL_FUNC) &vcfR_windowize_variants,    2},
    {"vcfR_write_fasta",           (DL_FUNC) &vcfR_write_fasta,           5},
    {"vcfR_write_vcf_body",        (DL_FUNC) &vcfR_write_vcf_body,        4},
    {NULL, NULL, 0}
};

void R_init_vcfR(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

