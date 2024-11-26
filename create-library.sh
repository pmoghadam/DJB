#!/bin/bash
tar xf djbdns-1.05.tar.gz
cd djbdns-1.05/
mkdir ../library
cp \
    gen_allocdefs.h gen_alloc.h stralloc.h stralloc_catb.c stralloc_cat.c \
    stralloc_cats.c stralloc_copy.c stralloc_eady.c stralloc_num.c \
    stralloc_opyb.c stralloc_opys.c stralloc_pend.c byte.h byte_chr.c \
    byte_copy.c byte_cr.c byte_diff.c byte_zero.c str.h str_chr.c \
    str_diff.c strerr_die.c strerr.h strerr_sys.c str_len.c str_rchr.c \
    str_start.c alloc.h alloc.c alloc_re.c error.c error.h error_str.c \
    buffer_1.c buffer.c buffer_get.c buffer_put.c buffer_write.c buffer_2.c \
    buffer_copy.c buffer.h buffer_read.c exit.h ../library
