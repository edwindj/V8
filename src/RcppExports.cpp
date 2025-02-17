// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/V8.h"
#include <Rcpp.h>

using namespace Rcpp;

// make_context
ctxptr make_context(bool set_console);
RcppExport SEXP V8_make_context(SEXP set_consoleSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< bool >::type set_console(set_consoleSEXP );
        ctxptr __result = make_context(set_console);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// context_enable_typed_arrays
bool context_enable_typed_arrays(Rcpp::XPtr< v8::Persistent<v8::Context> > ctx);
RcppExport SEXP V8_context_enable_typed_arrays(SEXP ctxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::XPtr< v8::Persistent<v8::Context> > >::type ctx(ctxSEXP );
        bool __result = context_enable_typed_arrays(ctx);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// version
std::string version();
RcppExport SEXP V8_version() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        std::string __result = version();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// context_eval
std::string context_eval(std::string src, Rcpp::XPtr< v8::Persistent<v8::Context> > ctx);
RcppExport SEXP V8_context_eval(SEXP srcSEXP, SEXP ctxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type src(srcSEXP );
        Rcpp::traits::input_parameter< Rcpp::XPtr< v8::Persistent<v8::Context> > >::type ctx(ctxSEXP );
        std::string __result = context_eval(src, ctx);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// context_validate
bool context_validate(std::string src, Rcpp::XPtr< v8::Persistent<v8::Context> > ctx);
RcppExport SEXP V8_context_validate(SEXP srcSEXP, SEXP ctxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type src(srcSEXP );
        Rcpp::traits::input_parameter< Rcpp::XPtr< v8::Persistent<v8::Context> > >::type ctx(ctxSEXP );
        bool __result = context_validate(src, ctx);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// context_null
bool context_null(Rcpp::XPtr< v8::Persistent<v8::Context> > ctx);
RcppExport SEXP V8_context_null(SEXP ctxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::XPtr< v8::Persistent<v8::Context> > >::type ctx(ctxSEXP );
        bool __result = context_null(ctx);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// context_eval_safe
SEXP context_eval_safe(SEXP src, Rcpp::XPtr< v8::Persistent<v8::Context> > ctx);
RcppExport SEXP V8_context_eval_safe(SEXP srcSEXP, SEXP ctxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type src(srcSEXP );
        Rcpp::traits::input_parameter< Rcpp::XPtr< v8::Persistent<v8::Context> > >::type ctx(ctxSEXP );
        SEXP __result = context_eval_safe(src, ctx);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// context_validate_safe
bool context_validate_safe(SEXP src, Rcpp::XPtr< v8::Persistent<v8::Context> > ctx);
RcppExport SEXP V8_context_validate_safe(SEXP srcSEXP, SEXP ctxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type src(srcSEXP );
        Rcpp::traits::input_parameter< Rcpp::XPtr< v8::Persistent<v8::Context> > >::type ctx(ctxSEXP );
        bool __result = context_validate_safe(src, ctx);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// context_assign_bin
bool context_assign_bin(std::string name, Rcpp::RawVector data, Rcpp::XPtr< v8::Persistent<v8::Context> > ctx);
RcppExport SEXP V8_context_assign_bin(SEXP nameSEXP, SEXP dataSEXP, SEXP ctxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type name(nameSEXP );
        Rcpp::traits::input_parameter< Rcpp::RawVector >::type data(dataSEXP );
        Rcpp::traits::input_parameter< Rcpp::XPtr< v8::Persistent<v8::Context> > >::type ctx(ctxSEXP );
        bool __result = context_assign_bin(name, data, ctx);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// context_get_bin
Rcpp::RawVector context_get_bin(std::string name, Rcpp::XPtr< v8::Persistent<v8::Context> > ctx);
RcppExport SEXP V8_context_get_bin(SEXP nameSEXP, SEXP ctxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type name(nameSEXP );
        Rcpp::traits::input_parameter< Rcpp::XPtr< v8::Persistent<v8::Context> > >::type ctx(ctxSEXP );
        Rcpp::RawVector __result = context_get_bin(name, ctx);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
