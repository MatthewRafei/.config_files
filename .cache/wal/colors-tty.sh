#!/bin/sh
[ "${TERM:-none}" = "linux" ] && \
    printf '%b' '\e]P0090909
                 \e]P1909090
                 \e]P2B1B1B1
                 \e]P3C8C8C8
                 \e]P4D7D7D7
                 \e]P5E8E8E8
                 \e]P6F4F4F4
                 \e]P7f4f4f4
                 \e]P8aaaaaa
                 \e]P9909090
                 \e]PAB1B1B1
                 \e]PBC8C8C8
                 \e]PCD7D7D7
                 \e]PDE8E8E8
                 \e]PEF4F4F4
                 \e]PFf4f4f4
                 \ec'
