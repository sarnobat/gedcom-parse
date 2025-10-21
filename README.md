# gedcom-parse

Mirrored from 
* https://gedcom-parse.sourceforge.net/
* https://sourceforge.net/projects/gedcom-parse/

## main()

* https://github.com/sarnobat/gedcom-parse/blob/main/gedcom-parse-0.90.0/t/src/standalone.c#L251

## src
* https://github.com/sarnobat/gedcom-parse/tree/main/gedcom-parse-0.90.0/t/src

## test
* https://github.com/sarnobat/gedcom-parse/blob/main/gedcom-parse-0.90.0/t/src/test_script

## output
```
/tmp/gedcom-parse-0.90.0/t/src/testgedcom /Volumes/git/sarnobat.git/2023/genealogy/rohidekar.ged || echo "Full log at\n\t cat check.out"
Header start
WARNING: Warning on line 5: Duplicate entry found for encoding 'ASCII', ignoring
WARNING: Warning on line 5: Duplicate entry found for encoding 'UTF-8', ignoring
Source is MYHERITAGE (ctxt is 1001, parent is 1)
Source context 1001 in parent 1
Header end, context is 1
Submitter, xref is @U1@
ERROR: Error on line 24: The tag 'NAME' is mandatory within 'SUBM', but missing
Parse failed
Full log at
	 cat check.out
```

### check.out
```

=== Parsing file rohidekar.ged
Header start
== 1 GEDC (326) (null) (ctxt is 1, conversion failures: 0)
== 2 VERS (391) 5.5.1 (ctxt is 1, conversion failures: 0)
== 2 FORM (325) LINEAGE-LINKED (ctxt is 1, conversion failures: 0)
WARNING: Warning on line 5: Duplicate entry found for encoding 'ASCII', ignoring
WARNING: Warning on line 5: Duplicate entry found for encoding 'UTF-8', ignoring
== 1 CHAR (292) UTF-8 (ctxt is 1, conversion failures: 0)
== 1 LANG (334) English (ctxt is 1, conversion failures: 0)
Source is MYHERITAGE (ctxt is 1001, parent is 1)
== 2 NAME (342) MyHeritage Family Tree Builder (ctxt is 1001, conversion failures: 0)
== 2 VERS (391) 8.2.0.8522 (ctxt is 1001, conversion failures: 0)
== 2 _RTLSAVE (264) RTL (ctxt is 1001, conversion failures: 0)
== 2 CORP (302) MyHeritage.com (ctxt is 1001, conversion failures: 0)
Source context 1001 in parent 1
== 1 SUBM (382) @U1@ (ctxt is 1, conversion failures: 0)
== 1 DEST (310) MYHERITAGE (ctxt is 1, conversion failures: 0)
== 1 DATE (306) 14 JAN 2024 (ctxt is 1, conversion failures: 0)
== 2 TIME (387) 22:02:10 (ctxt is 1, conversion failures: 0)
== 2 _TIMEZONE (264) GMT-8 (ctxt is 1, conversion failures: 0)
== 1 _RINS (264) I304,F110,N4,M0,R0,S0,U5,L0,P16,Q0,IF2,FF-2 (ctxt is 1, conversion failures: 0)
== 1 _UID (264) 65A4CA149E91E6DDA29F73A6F0000290 (ctxt is 1, conversion failures: 0)
== 1 _DESCRIPTION_AWARE (264) Y (ctxt is 1, conversion failures: 0)
== 1 _FACTS_DEFRAGGED (264) Y (ctxt is 1, conversion failures: 0)
== 1 _USERNAME (264) ss401533@gmail.com (ctxt is 1, conversion failures: 0)
== 1 _DISABLED (264) Y (ctxt is 1, conversion failures: 0)
Header end, context is 1
Submitter, xref is @U1@
== 1 RIN (372) MH:U1 (ctxt is 10000, conversion failures: 0)
ERROR: Error on line 24: The tag 'NAME' is mandatory within 'SUBM', but missing

=== Total conversion failures: 0
Parse failed

=== Parsing file rohidekar.ged
Header start
== 1 GEDC (326) (null) (ctxt is 1, conversion failures: 0)
== 2 VERS (391) 5.5.1 (ctxt is 1, conversion failures: 0)
== 2 FORM (325) LINEAGE-LINKED (ctxt is 1, conversion failures: 0)
WARNING: Warning on line 5: Duplicate entry found for encoding 'ASCII', ignoring
WARNING: Warning on line 5: Duplicate entry found for encoding 'UTF-8', ignoring
== 1 CHAR (292) UTF-8 (ctxt is 1, conversion failures: 0)
== 1 LANG (334) English (ctxt is 1, conversion failures: 0)
Source is MYHERITAGE (ctxt is 1001, parent is 1)
== 2 NAME (342) MyHeritage Family Tree Builder (ctxt is 1001, conversion failures: 0)
== 2 VERS (391) 8.2.0.8522 (ctxt is 1001, conversion failures: 0)
== 2 _RTLSAVE (264) RTL (ctxt is 1001, conversion failures: 0)
== 2 CORP (302) MyHeritage.com (ctxt is 1001, conversion failures: 0)
Source context 1001 in parent 1
== 1 SUBM (382) @U1@ (ctxt is 1, conversion failures: 0)
== 1 DEST (310) MYHERITAGE (ctxt is 1, conversion failures: 0)
== 1 DATE (306) 14 JAN 2024 (ctxt is 1, conversion failures: 0)
== 2 TIME (387) 22:02:10 (ctxt is 1, conversion failures: 0)
== 2 _TIMEZONE (264) GMT-8 (ctxt is 1, conversion failures: 0)
== 1 _RINS (264) I304,F110,N4,M0,R0,S0,U5,L0,P16,Q0,IF2,FF-2 (ctxt is 1, conversion failures: 0)
== 1 _UID (264) 65A4CA149E91E6DDA29F73A6F0000290 (ctxt is 1, conversion failures: 0)
== 1 _DESCRIPTION_AWARE (264) Y (ctxt is 1, conversion failures: 0)
== 1 _FACTS_DEFRAGGED (264) Y (ctxt is 1, conversion failures: 0)
== 1 _USERNAME (264) ss401533@gmail.com (ctxt is 1, conversion failures: 0)
== 1 _DISABLED (264) Y (ctxt is 1, conversion failures: 0)
Header end, context is 1
Submitter, xref is @U1@
== 1 RIN (372) MH:U1 (ctxt is 10000, conversion failures: 0)
ERROR: Error on line 24: The tag 'NAME' is mandatory within 'SUBM', but missing

=== Total conversion failures: 0
Parse failed

=== Parsing file rohidekar.ged
Header start
== 1 GEDC (326) (null) (ctxt is 1, conversion failures: 0)
== 2 VERS (391) 5.5.1 (ctxt is 1, conversion failures: 0)
== 2 FORM (325) LINEAGE-LINKED (ctxt is 1, conversion failures: 0)
WARNING: Warning on line 5: Duplicate entry found for encoding 'ASCII', ignoring
WARNING: Warning on line 5: Duplicate entry found for encoding 'UTF-8', ignoring
== 1 CHAR (292) UTF-8 (ctxt is 1, conversion failures: 0)
== 1 LANG (334) English (ctxt is 1, conversion failures: 0)
Source is MYHERITAGE (ctxt is 1001, parent is 1)
== 2 NAME (342) MyHeritage Family Tree Builder (ctxt is 1001, conversion failures: 0)
== 2 VERS (391) 8.2.0.8522 (ctxt is 1001, conversion failures: 0)
== 2 _RTLSAVE (264) RTL (ctxt is 1001, conversion failures: 0)
== 2 CORP (302) MyHeritage.com (ctxt is 1001, conversion failures: 0)
Source context 1001 in parent 1
== 1 SUBM (382) @U1@ (ctxt is 1, conversion failures: 0)
== 1 DEST (310) MYHERITAGE (ctxt is 1, conversion failures: 0)
== 1 DATE (306) 14 JAN 2024 (ctxt is 1, conversion failures: 0)
== 2 TIME (387) 22:02:10 (ctxt is 1, conversion failures: 0)
== 2 _TIMEZONE (264) GMT-8 (ctxt is 1, conversion failures: 0)
== 1 _RINS (264) I304,F110,N4,M0,R0,S0,U5,L0,P16,Q0,IF2,FF-2 (ctxt is 1, conversion failures: 0)
== 1 _UID (264) 65A4CA149E91E6DDA29F73A6F0000290 (ctxt is 1, conversion failures: 0)
== 1 _DESCRIPTION_AWARE (264) Y (ctxt is 1, conversion failures: 0)
== 1 _FACTS_DEFRAGGED (264) Y (ctxt is 1, conversion failures: 0)
== 1 _USERNAME (264) ss401533@gmail.com (ctxt is 1, conversion failures: 0)
== 1 _DISABLED (264) Y (ctxt is 1, conversion failures: 0)
Header end, context is 1
Submitter, xref is @U1@
== 1 RIN (372) MH:U1 (ctxt is 10000, conversion failures: 0)
ERROR: Error on line 24: The tag 'NAME' is mandatory within 'SUBM', but missing

=== Total conversion failures: 0
Parse failed

=== Parsing file rohidekar.ged
Header start
== 1 GEDC (326) (null) (ctxt is 1, conversion failures: 0)
== 2 VERS (391) 5.5.1 (ctxt is 1, conversion failures: 0)
== 2 FORM (325) LINEAGE-LINKED (ctxt is 1, conversion failures: 0)
WARNING: Warning on line 5: Duplicate entry found for encoding 'ASCII', ignoring
WARNING: Warning on line 5: Duplicate entry found for encoding 'UTF-8', ignoring
== 1 CHAR (292) UTF-8 (ctxt is 1, conversion failures: 0)
== 1 LANG (334) English (ctxt is 1, conversion failures: 0)
Source is MYHERITAGE (ctxt is 1001, parent is 1)
== 2 NAME (342) MyHeritage Family Tree Builder (ctxt is 1001, conversion failures: 0)
== 2 VERS (391) 8.2.0.8522 (ctxt is 1001, conversion failures: 0)
== 2 _RTLSAVE (264) RTL (ctxt is 1001, conversion failures: 0)
== 2 CORP (302) MyHeritage.com (ctxt is 1001, conversion failures: 0)
Source context 1001 in parent 1
== 1 SUBM (382) @U1@ (ctxt is 1, conversion failures: 0)
== 1 DEST (310) MYHERITAGE (ctxt is 1, conversion failures: 0)
== 1 DATE (306) 14 JAN 2024 (ctxt is 1, conversion failures: 0)
== 2 TIME (387) 22:02:10 (ctxt is 1, conversion failures: 0)
== 2 _TIMEZONE (264) GMT-8 (ctxt is 1, conversion failures: 0)
== 1 _RINS (264) I304,F110,N4,M0,R0,S0,U5,L0,P16,Q0,IF2,FF-2 (ctxt is 1, conversion failures: 0)
== 1 _UID (264) 65A4CA149E91E6DDA29F73A6F0000290 (ctxt is 1, conversion failures: 0)
== 1 _DESCRIPTION_AWARE (264) Y (ctxt is 1, conversion failures: 0)
== 1 _FACTS_DEFRAGGED (264) Y (ctxt is 1, conversion failures: 0)
== 1 _USERNAME (264) ss401533@gmail.com (ctxt is 1, conversion failures: 0)
== 1 _DISABLED (264) Y (ctxt is 1, conversion failures: 0)
Header end, context is 1
Submitter, xref is @U1@
== 1 RIN (372) MH:U1 (ctxt is 10000, conversion failures: 0)
ERROR: Error on line 24: The tag 'NAME' is mandatory within 'SUBM', but missing

=== Total conversion failures: 0
Parse failed

=== Parsing file rohidekar.ged
Header start
== 1 GEDC (326) (null) (ctxt is 1, conversion failures: 0)
== 2 VERS (391) 5.5.1 (ctxt is 1, conversion failures: 0)
== 2 FORM (325) LINEAGE-LINKED (ctxt is 1, conversion failures: 0)
WARNING: Warning on line 5: Duplicate entry found for encoding 'ASCII', ignoring
WARNING: Warning on line 5: Duplicate entry found for encoding 'UTF-8', ignoring
== 1 CHAR (292) UTF-8 (ctxt is 1, conversion failures: 0)
== 1 LANG (334) English (ctxt is 1, conversion failures: 0)
Source is MYHERITAGE (ctxt is 1001, parent is 1)
== 2 NAME (342) MyHeritage Family Tree Builder (ctxt is 1001, conversion failures: 0)
== 2 VERS (391) 8.2.0.8522 (ctxt is 1001, conversion failures: 0)
== 2 _RTLSAVE (264) RTL (ctxt is 1001, conversion failures: 0)
== 2 CORP (302) MyHeritage.com (ctxt is 1001, conversion failures: 0)
Source context 1001 in parent 1
== 1 SUBM (382) @U1@ (ctxt is 1, conversion failures: 0)
== 1 DEST (310) MYHERITAGE (ctxt is 1, conversion failures: 0)
== 1 DATE (306) 14 JAN 2024 (ctxt is 1, conversion failures: 0)
== 2 TIME (387) 22:02:10 (ctxt is 1, conversion failures: 0)
== 2 _TIMEZONE (264) GMT-8 (ctxt is 1, conversion failures: 0)
== 1 _RINS (264) I304,F110,N4,M0,R0,S0,U5,L0,P16,Q0,IF2,FF-2 (ctxt is 1, conversion failures: 0)
== 1 _UID (264) 65A4CA149E91E6DDA29F73A6F0000290 (ctxt is 1, conversion failures: 0)
== 1 _DESCRIPTION_AWARE (264) Y (ctxt is 1, conversion failures: 0)
== 1 _FACTS_DEFRAGGED (264) Y (ctxt is 1, conversion failures: 0)
== 1 _USERNAME (264) ss401533@gmail.com (ctxt is 1, conversion failures: 0)
== 1 _DISABLED (264) Y (ctxt is 1, conversion failures: 0)
Header end, context is 1
Submitter, xref is @U1@
== 1 RIN (372) MH:U1 (ctxt is 10000, conversion failures: 0)
ERROR: Error on line 24: The tag 'NAME' is mandatory within 'SUBM', but missing

=== Total conversion failures: 0
Parse failed

=== Parsing file rohidekar.ged
Header start
== 1 GEDC (326) (null) (ctxt is 1, conversion failures: 0)
== 2 VERS (391) 5.5.1 (ctxt is 1, conversion failures: 0)
== 2 FORM (325) LINEAGE-LINKED (ctxt is 1, conversion failures: 0)
WARNING: Warning on line 5: Duplicate entry found for encoding 'ASCII', ignoring
WARNING: Warning on line 5: Duplicate entry found for encoding 'UTF-8', ignoring
== 1 CHAR (292) UTF-8 (ctxt is 1, conversion failures: 0)
== 1 LANG (334) English (ctxt is 1, conversion failures: 0)
Source is MYHERITAGE (ctxt is 1001, parent is 1)
== 2 NAME (342) MyHeritage Family Tree Builder (ctxt is 1001, conversion failures: 0)
== 2 VERS (391) 8.2.0.8522 (ctxt is 1001, conversion failures: 0)
== 2 _RTLSAVE (264) RTL (ctxt is 1001, conversion failures: 0)
== 2 CORP (302) MyHeritage.com (ctxt is 1001, conversion failures: 0)
Source context 1001 in parent 1
== 1 SUBM (382) @U1@ (ctxt is 1, conversion failures: 0)
== 1 DEST (310) MYHERITAGE (ctxt is 1, conversion failures: 0)
== 1 DATE (306) 14 JAN 2024 (ctxt is 1, conversion failures: 0)
== 2 TIME (387) 22:02:10 (ctxt is 1, conversion failures: 0)
== 2 _TIMEZONE (264) GMT-8 (ctxt is 1, conversion failures: 0)
== 1 _RINS (264) I304,F110,N4,M0,R0,S0,U5,L0,P16,Q0,IF2,FF-2 (ctxt is 1, conversion failures: 0)
== 1 _UID (264) 65A4CA149E91E6DDA29F73A6F0000290 (ctxt is 1, conversion failures: 0)
== 1 _DESCRIPTION_AWARE (264) Y (ctxt is 1, conversion failures: 0)
== 1 _FACTS_DEFRAGGED (264) Y (ctxt is 1, conversion failures: 0)
== 1 _USERNAME (264) ss401533@gmail.com (ctxt is 1, conversion failures: 0)
== 1 _DISABLED (264) Y (ctxt is 1, conversion failures: 0)
Header end, context is 1
Submitter, xref is @U1@
== 1 RIN (372) MH:U1 (ctxt is 10000, conversion failures: 0)
ERROR: Error on line 24: The tag 'NAME' is mandatory within 'SUBM', but missing

=== Total conversion failures: 0
Parse failed

=== Parsing file rohidekar.ged
Header start
== 1 GEDC (326) (null) (ctxt is 1, conversion failures: 0)
== 2 VERS (391) 5.5.1 (ctxt is 1, conversion failures: 0)
== 2 FORM (325) LINEAGE-LINKED (ctxt is 1, conversion failures: 0)
WARNING: Warning on line 5: Duplicate entry found for encoding 'ASCII', ignoring
WARNING: Warning on line 5: Duplicate entry found for encoding 'UTF-8', ignoring
== 1 CHAR (292) UTF-8 (ctxt is 1, conversion failures: 0)
== 1 LANG (334) English (ctxt is 1, conversion failures: 0)
Source is MYHERITAGE (ctxt is 1001, parent is 1)
== 2 NAME (342) MyHeritage Family Tree Builder (ctxt is 1001, conversion failures: 0)
== 2 VERS (391) 8.2.0.8522 (ctxt is 1001, conversion failures: 0)
== 2 _RTLSAVE (264) RTL (ctxt is 1001, conversion failures: 0)
== 2 CORP (302) MyHeritage.com (ctxt is 1001, conversion failures: 0)
Source context 1001 in parent 1
== 1 SUBM (382) @U1@ (ctxt is 1, conversion failures: 0)
== 1 DEST (310) MYHERITAGE (ctxt is 1, conversion failures: 0)
== 1 DATE (306) 14 JAN 2024 (ctxt is 1, conversion failures: 0)
== 2 TIME (387) 22:02:10 (ctxt is 1, conversion failures: 0)
== 2 _TIMEZONE (264) GMT-8 (ctxt is 1, conversion failures: 0)
== 1 _RINS (264) I304,F110,N4,M0,R0,S0,U5,L0,P16,Q0,IF2,FF-2 (ctxt is 1, conversion failures: 0)
== 1 _UID (264) 65A4CA149E91E6DDA29F73A6F0000290 (ctxt is 1, conversion failures: 0)
== 1 _DESCRIPTION_AWARE (264) Y (ctxt is 1, conversion failures: 0)
== 1 _FACTS_DEFRAGGED (264) Y (ctxt is 1, conversion failures: 0)
== 1 _USERNAME (264) ss401533@gmail.com (ctxt is 1, conversion failures: 0)
== 1 _DISABLED (264) Y (ctxt is 1, conversion failures: 0)
Header end, context is 1
Submitter, xref is @U1@
== 1 RIN (372) MH:U1 (ctxt is 10000, conversion failures: 0)
ERROR: Error on line 24: The tag 'NAME' is mandatory within 'SUBM', but missing

=== Total conversion failures: 0
Parse failed

=== Parsing file rohidekar.ged
Header start
== 1 GEDC (326) (null) (ctxt is 1, conversion failures: 0)
== 2 VERS (391) 5.5.1 (ctxt is 1, conversion failures: 0)
== 2 FORM (325) LINEAGE-LINKED (ctxt is 1, conversion failures: 0)
WARNING: Warning on line 5: Duplicate entry found for encoding 'ASCII', ignoring
WARNING: Warning on line 5: Duplicate entry found for encoding 'UTF-8', ignoring
== 1 CHAR (292) UTF-8 (ctxt is 1, conversion failures: 0)
== 1 LANG (334) English (ctxt is 1, conversion failures: 0)
Source is MYHERITAGE (ctxt is 1001, parent is 1)
== 2 NAME (342) MyHeritage Family Tree Builder (ctxt is 1001, conversion failures: 0)
== 2 VERS (391) 8.2.0.8522 (ctxt is 1001, conversion failures: 0)
== 2 _RTLSAVE (264) RTL (ctxt is 1001, conversion failures: 0)
== 2 CORP (302) MyHeritage.com (ctxt is 1001, conversion failures: 0)
Source context 1001 in parent 1
== 1 SUBM (382) @U1@ (ctxt is 1, conversion failures: 0)
== 1 DEST (310) MYHERITAGE (ctxt is 1, conversion failures: 0)
== 1 DATE (306) 14 JAN 2024 (ctxt is 1, conversion failures: 0)
== 2 TIME (387) 22:02:10 (ctxt is 1, conversion failures: 0)
== 2 _TIMEZONE (264) GMT-8 (ctxt is 1, conversion failures: 0)
== 1 _RINS (264) I304,F110,N4,M0,R0,S0,U5,L0,P16,Q0,IF2,FF-2 (ctxt is 1, conversion failures: 0)
== 1 _UID (264) 65A4CA149E91E6DDA29F73A6F0000290 (ctxt is 1, conversion failures: 0)
== 1 _DESCRIPTION_AWARE (264) Y (ctxt is 1, conversion failures: 0)
== 1 _FACTS_DEFRAGGED (264) Y (ctxt is 1, conversion failures: 0)
== 1 _USERNAME (264) ss401533@gmail.com (ctxt is 1, conversion failures: 0)
== 1 _DISABLED (264) Y (ctxt is 1, conversion failures: 0)
Header end, context is 1
Submitter, xref is @U1@
== 1 RIN (372) MH:U1 (ctxt is 10000, conversion failures: 0)
ERROR: Error on line 24: The tag 'NAME' is mandatory within 'SUBM', but missing

=== Total conversion failures: 0
Parse failed

```
## help
```
gedcom-parse test program for libgedcom

Usage:  testgedcom [options] file
Options:
  -h    Show this help text
  -nc   Disable compatibility mode
  -fi   Fail immediately on errors
  -fd   Deferred fail on errors, but parse completely
  -fn   No fail on errors
  -dg   Debug setting: only libgedcom debug messages
  -da   Debug setting: libgedcom + yacc debug messages
  -2    Run the test parse 2 times instead of once
  -3    Run the test parse 3 times instead of once
  -b    Parse a bogus file (bogus.ged) before parsing the main file
  -q    No output to standard output
  -o <outfile>  File to generate output to (def. testgedcom.out)
```
## Original README

```
The Gedcom parser library (release 0.90.0)
-------------------------
The Gedcom parser library is a C library that provides an API to applications
to parse, process and write arbitrary genealogy files in the standard gedcom
format.

Its main features are:

 - portable to any POSIX systems (libiconv is needed on systems that lack
   glibc 2.2, see below)

 - strict callback-based parser written in C (using lex/yacc), a C object
   model is also available (compare to the difference between SAX and DOM
   in XML).

 - supports the Gedcom 5.5 standard fully

 - supports the standard encoding formats (ASCII, ANSEL, UNICODE), but
   extensible (via a configuration file) to other encoding formats; by
   default ANSI is also supported.

 - all strings passed from callbacks to the using program are in UTF-8 format

 - internationalization of the error and warning messages

 - specific parsing of date values to a calendar-neutral date system (Julian
   days aka serial day numbers); the date parser can be called separately and
   dates can be manipulated

 - specific parsing and checking of cross-references

 - specific parsing of age values

 - support for writing Gedcom files (both in line-by-line format, or via the
   Gedcom object model)

 - "compatibility-mode" parsing, to allow for not-exactly-standard syntaxes
   used by other genealogy programs; currently, compatibility is added for
   (not necessarily complete):
     - ftree
     - Lifelines 3.0.2
     - Personal Ancestral File (PAF), version 2, 4 and 5
     - Family Origins
     - EasyTree

NOTE:
 - NO BACKWARD COMPATIBILITY is guaranteed for 0.x releases !

To do list:
 - specific parsing of other special values
 - compatibility with other genealogy programs
 - older/newer Gedcom standards ?
 - writing GEDML files
 - C++ object model
 - ...

For more information, refer to the documentation in the doc subdirectory,
or to the SourceForge project web site and summary page:
  http://gedcom-parse.sourceforge.net
  http://sourceforge.net/projects/gedcom-parse

Also, have a look at the 'Genes' program, from which this library is a
spin-off, and which uses this library:
  http://genes.sourceforge.net
  http://sourceforge.net/projects/genes


Requirements:
------------
For using the library:
 - either glibc 2.2 or higher, or libiconv

Note:

  The official libiconv package doesn't have ANSEL support, and is not
  extensible except by modifying its source code.

  There is a modified libiconv package available on the SourceForge project
  page, which is called 'libiconv-gedcom-1.8.x', based on libiconv 1.8.
  Install this if you need ANSEL support and you don't have glibc 2.2.

To compile the package, you'll need:
 - gcc

To compile from the CVS sources, you'll need in addition:
 - autoconf
 - automake
 - flex
 - bison (won't work with plain yacc)
 - perl


Installation:
------------
This is simply:

  ./configure
  make
  make install

If libiconv is not automatically found, you can give its path to configure,
for example, if the library lives in /home/mydir/lib:

  ./configure --with-libiconv-prefix=/home/mydir

You can also run some tests via:
  make check


###############################################################################
# $Id: README,v 1.13 2003/02/02 15:43:13 verthezp Exp $
# $Name: R0_90_0 $

```
