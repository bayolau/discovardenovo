AC_INIT([DiscovarDeNovo], [52488], [crdhelp@broadinstitute.org])
AM_INIT_AUTOMAKE
AM_PROG_LIBTOOL([disable-shared])
AC_PROG_CXX
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_FILES([Makefile])
AC_CONFIG_FILES([src/Makefile])

AC_LITTLE_ENDIAN_CHECK
AC_GXX_CHECK
AX_PTHREAD
AC_JEMALLOC_LIB
AC_OPENMP
AC_OPENMP_CHECK
AC_LIBZ_LIB

CXXFLAGS="$CXXFLAGS -std=c++11 -Wextra -Wall -Wsign-promo -Woverloaded-virtual -Wendif-labels -Wno-unused -Wno-deprecated -Wno-long-long -Wno-parentheses -Wno-unused-parameter -fno-nonansi-builtins -mieee-fp -fno-strict-aliasing -iquote . -ggdb -DNDEBUG"

OS_RELEASE="`uname -r`"
AC_SUBST(CXXFLAGS)
AC_SUBST(OS_RELEASE, [$OS_RELEASE])
AC_SUBST(VERSION, [$VERSION])
AC_OUTPUT
