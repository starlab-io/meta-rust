## snapshot info taken from rust/src/snapshots.txt
## TODO: find a way to add additional SRC_URIs based on the contents of an
##       earlier SRC_URI.
RS_DATE = "2016-02-17"
RS_SRCHASH = "4d3eebf"
# linux-x86_64
RS_ARCH = "linux-x86_64"
RS_HASH = "d29b7607d13d64078b6324aec82926fb493f59ba"

RUST_SNAPSHOT = "rust-stage0-${RS_DATE}-${RS_SRCHASH}-${RS_ARCH}-${RS_HASH}.tar.bz2"

SRC_URI[rust-snapshot.md5sum] = "d36652d8de0aa5192697d93dc16e69f8"
SRC_URI[rust-snapshot.sha256sum] = "8deb8b687cb7d89ea943745c16c1061225fcbb5c64c0c121cdd1cb68673e683e"
