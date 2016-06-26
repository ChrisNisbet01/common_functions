AC_PREREQ(2.61)
AC_INIT([common_functions], [1.0], [nisbet@ihug.co.nz])
AC_CONFIG_SRCDIR([src/strlcpy.c])
AC_CONFIG_HEADER([config.h])
AC_CONFIG_FILES([Makefile src/Makefile include/Makefile])
AC_CONFIG_MACRO_DIR([m4])

# Prepare automake
AM_INIT_AUTOMAKE([no-dist-gzip dist-xz])

# Checks for programs.
AC_PROG_CC
AC_PROG_CXX

# Checks for libraries.
LT_INIT

AM_CFLAGS="-std=gnu99 $inline_cflags -Wall -Werror"
AC_SUBST(AM_CFLAGS)
AC_SUBST(CFLAGS, "$CFLAGS -D_GNU_SOURCE -Wall -Werror -Wextra -Wno-unused-result -Wunused-variable -I../include")

AC_OUTPUT

