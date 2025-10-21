## Process this file with automake to produce Makefile.in
# $Id: Makefile.am,v 1.2 2002/11/03 10:18:29 verthezp Exp $
# $Name: R0_90_0 $
M4_FILES = gedcom.m4
EXTRA_DIST = $(M4_FILES)

install-m4:
	@dir=`aclocal --print-ac-dir`; \
	echo "Installing m4 macros in $$dir"; \
	for file in $(M4_FILES); do \
	  $(INSTALL) $(srcdir)/$$file $$dir; \
	done

