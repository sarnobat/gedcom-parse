## Process this file with automake to produce Makefile.in
# $Id: Makefile.am,v 1.7 2002/12/29 13:06:11 verthezp Exp $
# $Name: R0_90_0 $
include_HEADERS = gedcom.h \
		  gedcom-tags.h \
		  gom.h
BUILT_SOURCES = gedcom.h \
		gedcom-tags.h
EXTRA_DIST = gedcom.h.in \
	     gedcom-tags.h

gedcom-tags.h:	$(srcdir)/../gedcom/gedcom.tabgen.h
	grep "TAG_" $< > $@
	grep "USERTAG" $< >> $@

