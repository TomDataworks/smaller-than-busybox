# Generated automatically from Makefile.in by configure.
# Makefile.in generated automatically by automake 1.4 from Makefile.am

# Copyright (C) 1994, 1995-8, 1999 Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.


SHELL = /bin/sh

srcdir = .
top_srcdir = ..
prefix = /usr
exec_prefix = 

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include

DESTDIR =

pkgdatadir = $(datadir)/shadow
pkglibdir = $(libdir)/shadow
pkgincludedir = $(includedir)/shadow

top_builddir = ..

ACLOCAL = aclocal
AUTOCONF = autoconf
AUTOMAKE = automake
AUTOHEADER = autoheader

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL} $(AM_INSTALL_PROGRAM_FLAGS)
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
transform = s,x,x,

NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
host_alias = i386-linux-gnu
host_triplet = i386-pc-linux-gnu
AS = @AS@
CATALOGS =  el.mo fr.mo pl.mo sv.mo
CATOBJEXT = .mo
CC = diet -Os gcc -static -m32
CPP = diet -Os gcc -static -m32 -E
DATADIRNAME = lib
DLLTOOL = @DLLTOOL@
GENCAT = 
GMOFILES =  el.gmo fr.gmo pl.gmo sv.gmo
GMSGFMT = /usr/bin/msgfmt
GT_NO = 
GT_YES = #YES#
INCLUDE_LOCALE_H = #include <locale.h>
INSTOBJEXT = .mo
INTLDEPS = 
INTLLIBS = 
INTLOBJS = 
LD = /usr/bin/ld
LIBCRACK = 
LIBCRYPT = 
LIBPAM = 
LIBSKEY = 
LIBTCFS = 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LN_S = ln -s
LTLIBOBJS =  putgrent.lo putspent.lo sgetgrent.lo sgetpwent.lo sgetspent.lo
MAKEINFO = /home/users/tfields/linux/raw/shadow-19990827/missing makeinfo
MKINSTALLDIRS = ./mkinstalldirs
MSGFMT = /usr/bin/msgfmt
NM = /usr/bin/nm -B
OBJDUMP = @OBJDUMP@
PACKAGE = shadow
POFILES =  el.po fr.po pl.po sv.po
POSUB = po
RANLIB = ranlib
U = 
USE_INCLUDED_LIBINTL = no
USE_NLS = yes
VERSION = 19990827
YACC = bison -y
l = 

AUTOMAKE_OPTIONS = 1.0 foreign

noinst_HEADERS = commonio.h defines.h dialchk.h dialup.h  faillog.h getdef.h groupio.h md5.h pam_defs.h port.h prototypes.h  pwauth.h pwio.h rcsid.h sgroupio.h shadowio.h snprintf.h  tcfsio.h


localedir = $(datadir)/locale
DEFS = -DLOCALEDIR=\"$(localedir)\" -I. -I$(srcdir) -I.. -DHAVE_CONFIG_H

# These files are unneeded for some reason, listed in
# order of appearance:
#
# sources which are not really needed (are they in libc???)
# sources for dbm support (not yet used)
# sources for LIBOBJS (which are normally in libc)
# misc header sources

EXTRA_DIST = grdbm.c gsdbm.c pwdbm.c spdbm.c  grpack.c gspack.c pwpack.c sppack.c  gshadow_.h shadow_.h lastlog_.h snprintf.h


EXTRA_libshadow_a_SOURCESS = grent.c pwent.c  mkdir.c rename.c rmdir.c strdup.c strcasecmp.c strerror.c strstr.c  putgrent.c putpwent.c putspent.c  sgetgrent.c sgetpwent.c sgetspent.c snprintf.c  md5.c md5crypt.c


# We build libshadow for our tools.

noinst_LIBRARIES = libshadow.a

libshadow_a_SOURCES = commonio.c dialchk.c dialup.c encrypt.c  fputsx.c getdef.c getpass.c groupio.c gshadow.c lockpw.c port.c  pwauth.c pwio.c rad64.c sgroupio.c shadow.c shadowio.c utent.c  tcfsio.c


libshadow_a_LIBADD =  putgrent.o putspent.o sgetgrent.o sgetpwent.o sgetspent.o

INCLUDES = -I$(top_srcdir)/lib

# shared library support
libdir = ${exec_prefix}/lib
#lib_PROGRAMS = libshadow.la
lib_LTLIBRARIES = libshadow.la
libshadow_la_SOURCES = ${libshadow_a_SOURCES}
#libshadow_la_LIBADD =  putgrent.lo putspent.lo sgetgrent.lo sgetpwent.lo sgetspent.lo
#libshadow_la_LDFLAGS = -version-info 0:0:0 -rpath $(libdir)
libshadow_la_LDFLAGS = -version-info 0:0:0
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = ../config.h
CONFIG_CLEAN_FILES = 
LIBRARIES =  $(noinst_LIBRARIES)

CPPFLAGS = 
LDFLAGS = -s
LIBS = 
libshadow_a_DEPENDENCIES =   putgrent.o putspent.o sgetgrent.o sgetpwent.o sgetspent.o
libshadow_a_OBJECTS =  commonio.o dialchk.o dialup.o encrypt.o fputsx.o \
getdef.o getpass.o groupio.o gshadow.o lockpw.o port.o pwauth.o pwio.o \
rad64.o sgroupio.o shadow.o shadowio.o utent.o tcfsio.o
AR = ar
LTLIBRARIES =  $(lib_LTLIBRARIES)

libshadow_la_LIBADD = 
libshadow_la_OBJECTS =  commonio.lo dialchk.lo dialup.lo encrypt.lo \
fputsx.lo getdef.lo getpass.lo groupio.lo gshadow.lo lockpw.lo port.lo \
pwauth.lo pwio.lo rad64.lo sgroupio.lo shadow.lo shadowio.lo utent.lo \
tcfsio.lo
CFLAGS = -m32
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) --mode=compile $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(LIBTOOL) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(LDFLAGS) -o $@
HEADERS =  $(noinst_HEADERS)

DIST_COMMON =  Makefile.am Makefile.in md5.c md5crypt.c mkdir.c \
putgrent.c putpwent.c putspent.c rename.c rmdir.c sgetgrent.c \
sgetpwent.c sgetspent.c snprintf.c strcasecmp.c strdup.c strerror.c \
strstr.c


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = tar
GZIP_ENV = --best
SOURCES = $(libshadow_a_SOURCES) $(libshadow_la_SOURCES)
OBJECTS = $(libshadow_a_OBJECTS) $(libshadow_la_OBJECTS)

all: all-redirect
.SUFFIXES:
.SUFFIXES: .S .c .lo .o .s
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOMAKE) --foreign --include-deps lib/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status


mostlyclean-noinstLIBRARIES:

clean-noinstLIBRARIES:
	-test -z "$(noinst_LIBRARIES)" || rm -f $(noinst_LIBRARIES)

distclean-noinstLIBRARIES:

maintainer-clean-noinstLIBRARIES:

.c.o:
	$(COMPILE) -c $<

.s.o:
	$(COMPILE) -c $<

.S.o:
	$(COMPILE) -c $<

mostlyclean-compile:
	-rm -f *.o core *.core

clean-compile:

distclean-compile:
	-rm -f *.tab.c

maintainer-clean-compile:

.c.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

.s.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

.S.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs

distclean-libtool:

maintainer-clean-libtool:

libshadow.a: $(libshadow_a_OBJECTS) $(libshadow_a_DEPENDENCIES)
	-rm -f libshadow.a
	$(AR) cru libshadow.a $(libshadow_a_OBJECTS) $(libshadow_a_LIBADD)
	$(RANLIB) libshadow.a

mostlyclean-libLTLIBRARIES:

clean-libLTLIBRARIES:
	-test -z "$(lib_LTLIBRARIES)" || rm -f $(lib_LTLIBRARIES)

distclean-libLTLIBRARIES:

maintainer-clean-libLTLIBRARIES:

install-libLTLIBRARIES: $(lib_LTLIBRARIES)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(libdir)
	@list='$(lib_LTLIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo "$(LIBTOOL)  --mode=install $(INSTALL) $$p $(DESTDIR)$(libdir)/$$p"; \
	    $(LIBTOOL)  --mode=install $(INSTALL) $$p $(DESTDIR)$(libdir)/$$p; \
	  else :; fi; \
	done

uninstall-libLTLIBRARIES:
	@$(NORMAL_UNINSTALL)
	list='$(lib_LTLIBRARIES)'; for p in $$list; do \
	  $(LIBTOOL)  --mode=uninstall rm -f $(DESTDIR)$(libdir)/$$p; \
	done

libshadow.la: $(libshadow_la_OBJECTS) $(libshadow_la_DEPENDENCIES)
	$(LINK) -rpath $(libdir) $(libshadow_la_LDFLAGS) $(libshadow_la_OBJECTS) $(libshadow_la_LIBADD) $(LIBS)

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP)
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	here=`pwd` && cd $(srcdir) \
	  && mkid -f$$here/ID $$unique $(LISP)

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$unique$(LISP)$$tags" \
	  || (cd $(srcdir) && etags $(ETAGS_ARGS) $$tags  $$unique $(LISP) -o $$here/TAGS)

mostlyclean-tags:

clean-tags:

distclean-tags:
	-rm -f TAGS ID

maintainer-clean-tags:

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = lib

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  d=$(srcdir); \
	  if test -d $$d/$$file; then \
	    cp -pr $$/$$file $(distdir)/$$file; \
	  else \
	    test -f $(distdir)/$$file \
	    || ln $$d/$$file $(distdir)/$$file 2> /dev/null \
	    || cp -p $$d/$$file $(distdir)/$$file || :; \
	  fi; \
	done
commonio.lo commonio.o : commonio.c ../config.h rcsid.h defines.h \
	gshadow_.h commonio.h
dialchk.lo dialchk.o : dialchk.c ../config.h rcsid.h defines.h \
	gshadow_.h prototypes.h dialup.h dialchk.h
dialup.lo dialup.o : dialup.c ../config.h rcsid.h prototypes.h defines.h \
	gshadow_.h dialup.h
encrypt.lo encrypt.o : encrypt.c ../config.h rcsid.h prototypes.h \
	defines.h gshadow_.h
fputsx.lo fputsx.o : fputsx.c ../config.h defines.h gshadow_.h rcsid.h
getdef.lo getdef.o : getdef.c ../config.h rcsid.h prototypes.h defines.h \
	gshadow_.h getdef.h
getpass.lo getpass.o : getpass.c ../config.h rcsid.h defines.h \
	gshadow_.h getdef.h
groupio.lo groupio.o : groupio.c ../config.h rcsid.h prototypes.h \
	defines.h gshadow_.h commonio.h groupio.h
gshadow.lo gshadow.o : gshadow.c ../config.h rcsid.h prototypes.h \
	defines.h gshadow_.h
lockpw.lo lockpw.o : lockpw.c ../config.h
port.lo port.o : port.c ../config.h rcsid.h defines.h gshadow_.h port.h
putgrent.o: putgrent.c ../config.h prototypes.h defines.h gshadow_.h
pwauth.lo pwauth.o : pwauth.c ../config.h rcsid.h prototypes.h defines.h \
	gshadow_.h pwauth.h getdef.h
pwio.lo pwio.o : pwio.c ../config.h rcsid.h prototypes.h defines.h \
	gshadow_.h commonio.h pwio.h
rad64.lo rad64.o : rad64.c ../config.h rcsid.h
sgetgrent.o: sgetgrent.c ../config.h rcsid.h defines.h gshadow_.h
sgetpwent.o: sgetpwent.c ../config.h rcsid.h defines.h gshadow_.h
sgroupio.lo sgroupio.o : sgroupio.c ../config.h rcsid.h prototypes.h \
	defines.h gshadow_.h commonio.h sgroupio.h
shadowio.lo shadowio.o : shadowio.c ../config.h rcsid.h prototypes.h \
	defines.h gshadow_.h commonio.h shadowio.h
shadow.lo shadow.o : shadow.c ../config.h
tcfsio.lo tcfsio.o : tcfsio.c ../config.h
utent.lo utent.o : utent.c ../config.h

info-am:
info: info-am
dvi-am:
dvi: dvi-am
check-am: all-am
check: check-am
installcheck-am:
installcheck: installcheck-am
install-exec-am: install-libLTLIBRARIES
	@$(NORMAL_INSTALL)
	$(MAKE) $(AM_MAKEFLAGS) install-exec-hook
install-exec: install-exec-am

install-data-am:
install-data: install-data-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
install: install-am
uninstall-am: uninstall-libLTLIBRARIES
uninstall: uninstall-am
all-am: Makefile $(LIBRARIES) $(LTLIBRARIES) $(HEADERS)
all-redirect: all-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) AM_INSTALL_PROGRAM_FLAGS=-s install
installdirs:
	$(mkinstalldirs)  $(DESTDIR)$(libdir)


mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*

maintainer-clean-generic:
mostlyclean-am:  mostlyclean-noinstLIBRARIES mostlyclean-compile \
		mostlyclean-libtool mostlyclean-libLTLIBRARIES \
		mostlyclean-tags mostlyclean-generic

mostlyclean: mostlyclean-am

clean-am:  clean-noinstLIBRARIES clean-compile clean-libtool \
		clean-libLTLIBRARIES clean-tags clean-generic \
		mostlyclean-am

clean: clean-am

distclean-am:  distclean-noinstLIBRARIES distclean-compile \
		distclean-libtool distclean-libLTLIBRARIES \
		distclean-tags distclean-generic clean-am
	-rm -f libtool

distclean: distclean-am

maintainer-clean-am:  maintainer-clean-noinstLIBRARIES \
		maintainer-clean-compile maintainer-clean-libtool \
		maintainer-clean-libLTLIBRARIES maintainer-clean-tags \
		maintainer-clean-generic distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-am

.PHONY: mostlyclean-noinstLIBRARIES distclean-noinstLIBRARIES \
clean-noinstLIBRARIES maintainer-clean-noinstLIBRARIES \
mostlyclean-compile distclean-compile clean-compile \
maintainer-clean-compile mostlyclean-libtool distclean-libtool \
clean-libtool maintainer-clean-libtool mostlyclean-libLTLIBRARIES \
distclean-libLTLIBRARIES clean-libLTLIBRARIES \
maintainer-clean-libLTLIBRARIES uninstall-libLTLIBRARIES \
install-libLTLIBRARIES tags mostlyclean-tags distclean-tags clean-tags \
maintainer-clean-tags distdir info-am info dvi-am dvi check check-am \
installcheck-am installcheck install-exec-am install-exec \
install-data-am install-data install-am install uninstall-am uninstall \
all-redirect all-am all installdirs mostlyclean-generic \
distclean-generic clean-generic maintainer-clean-generic clean \
mostlyclean distclean maintainer-clean


# remove the libshadow.so -> libshadow.so.x.x symlink, because this
# library is for internal use by this package only.  Shadow support
# is in libc and no one should be using -lshadow anymore.
install-exec-hook:
	rm -f $(libdir)/libshadow.so

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
