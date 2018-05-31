# Specifics for Rust 1.26.1

SRC_URI += "\
	https://static.rust-lang.org/dist/rustc-${PV}-src.tar.gz;name=rust \
	"

SRC_URI[md5sum] = "d3d8d4d30939279760067698ab4d3caf"
SRC_URI[sha256sum] = "70a7961bd8ec43b2c01e9896e90b0a06804a7fbe0a5c05acc7fd6fed19500df0"
SRC_URI[rust.md5sum] = "d3d8d4d30939279760067698ab4d3caf"
SRC_URI[rust.sha256sum] = "70a7961bd8ec43b2c01e9896e90b0a06804a7fbe0a5c05acc7fd6fed19500df0"


# later versions of rust change the directory that they unextract to
RUSTSRC = "${WORKDIR}/rustc-${PV}-src"
# set this as our default
S = "${RUSTSRC}"

LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=99c369ad81a36cd5b27f6c6968d01055"
