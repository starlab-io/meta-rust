# In order to share the same source between multiple packages (.bb files), we
# unpack and patch the rustc source here into a shared dir.
#
# Take a look at gcc-source.inc for the general structure of this

inherit shared-source-provide

require rust-version.inc
require rust-release.inc

SRC_URI[rust.md5sum] = "8d95febc45b1bafce7b3d7c3dbf88a8c"
SRC_URI[rust.sha256sum] = "af4466147e8d4db4de2a46e07494d2dc2d96313c5b37da34237f511c905f7449"
LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=eb87dba71cb424233bcce88db3ae2f1a"

SRC_URI_append = "\
        file://rust/0002-Target-add-default-target.json-path-libdir-rust-targ.patch \
        file://rust/0003-mk-for-stage0-use-RUSTFLAGS-to-override-target-libs-.patch \
        file://rust/0004-mk-add-missing-CFG_LIBDIR_RELATIVE.patch \
        file://rust/0005-configure-support-bindir-and-extend-libdir-to-non-bl.patch \
        file://rust/0006-std-thread_local-workaround-for-NULL-__dso_handle.patch \
        file://rust/0007-mk-install-use-disable-rewrite-paths.patch \
        file://rust/0009-Remove-crate-metadata-from-symbol-hashing.patch \
        file://rust/0010-rustc_trans-make-.note.rustc-look-more-like-debug-in.patch \
        file://rust/0011-Allow-overriding-crate_hash-with-C-crate_hash.patch \
        file://rust/0012-mk-platform.mk-pass-C-crate_hash-to-builds.patch \
        file://rust/0013-mk-allow-changing-the-platform-configuration-source-.patch \
        file://rust-installer/0001-add-option-to-disable-rewriting-of-install-paths.patch;patchdir=src/rust-installer \
"
