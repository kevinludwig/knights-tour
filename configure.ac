AC_INIT([knights_tour], [1.0])
AC_CONFIG_SRCDIR([src])
AC_CONFIG_AUX_DIR([target])

AC_LANG_PUSH(C++)
AC_CHECK_HEADERS([vector iostream algorithm], [], [AC_MSG_ERROR([Missing header file])])
AC_LANG_POP(C++)

AM_INIT_AUTOMAKE([-Wall foreign subdir-objects])
AC_PROG_CXX
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
