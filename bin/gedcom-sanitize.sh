# $Id: gedcom-sanitize.sh,v 1.1 2003/01/24 06:48:33 verthezp Exp $
# $Name: R0_90_0 $
# Test script for gedcom-check (when not installed yet)

ltcmd="../libtool --mode=execute"
for lib in ../gedcom/libgedcom.la ../gom/libgedcom_gom.la ../utf8/libutf8tools.la
do
  ltcmd="$ltcmd -dlopen $lib"
done

ln -s ../data/gedcom.enc .
ln -s ../data/new.ged .
ln -s ../iconv/glibc/.libs/ANSI_Z39.47.so .
ln -s ../iconv/glibc/gconv-modules .
$ltcmd $GEDCOM_TESTENV ./gedcom-sanitize $*
result=$?
rm gedcom.enc
rm new.ged
rm ANSI_Z39.47.so
rm gconv-modules
exit $result
