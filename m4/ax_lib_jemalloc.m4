############################################################
#
# JEMALLOC path
#
# This function finds the location of the jemalloc library
#
# input: none
#
# output: JEMALLOC_LIB
#
############################################################
AC_DEFUN([AC_JEMALLOC_LIB],
 [
  JEMALLOC_LIB="-ljemalloc"       

  AC_ARG_WITH([jemalloc],
        AS_HELP_STRING([--with-jemalloc=DIR],
                [Force directory for location of jemalloc library.]),
        [
        if test -d $withval
        then
            JEMALLOC_LIB="-L$withval -Wl,-rpath,$withval -ljemalloc"
        else
            AC_MSG_ERROR(--with-jemalloc expected directory name)
        fi
        ]
  )

  AC_SUBST(JEMALLOC_LIB,[$JEMALLOC_LIB])
 ]
)
