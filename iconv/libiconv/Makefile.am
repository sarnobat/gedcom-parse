## Process this file with automake to produce Makefile.in
# $Id: Makefile.am,v 1.4 2002/10/13 14:22:38 verthezp Exp $
# $Name: R0_90_0 $

PATCH_FILES := $(wildcard $(srcdir)/*.patch)
SRC_FILES   := ansi_z39_47.h

EXTRA_DIST = ChangeLog.gedcom NEWS.gedcom get_patches patch_dist \
	     $(SRC_FILES) $(PATCH_FILES)

all:

distcheck:

libiconv-dist:
	./patch_dist
