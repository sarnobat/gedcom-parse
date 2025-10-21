## Process this file with automake to produce Makefile.in
# $Id: Makefile.am,v 1.3 2002/12/08 16:01:24 verthezp Exp $
# $Name: R0_90_0 $
CFLAGS  = -O2 @EXTRA_CFLAGS@
INCLUDES = -I$(srcdir)/..
libdir  = $(pkgdatadir)

pkgdata_DATA = gconv-modules

lib_LTLIBRARIES = ANSI_Z39.47.la

ANSI_Z39_47_la_LDFLAGS = -module -avoid-version
ANSI_Z39_47_la_SOURCES = ANSI_Z39.47.c
EXTRA_DIST = loop.c \
	     skeleton.c \
	     $(pkgdata_DATA)
