############################################################
#
# libz path
#
# This function finds the location of libz
#
# input: none
#
# output: LIBZ_LIB
#
############################################################
AC_DEFUN([AC_LIBZ_LIB],
 [
  LIBZ_LIB="-lz"       

  AC_ARG_WITH([libz],
        AS_HELP_STRING([--with-libz=DIR],
                [Force directory for location of libz library.]),
        [
        if test -d $withval
        then
            LIBZ_LIB="-L$withval -Wl,-rpath,$withval -lz"
        else
            AC_MSG_ERROR(--with-libz expected directory name)
        fi
        ]
  )

  AC_SUBST(LIBZ_LIB,[$LIBZ_LIB])
 ]
)
