/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2015-2019 Jason A. Donenfeld <Jason@zx2c4.com>. All Rights Reserved.
 */

#include <sys/types.h>

enum highlight_type {
    HighlightSection,
    HighlightKeytype,
    HighlightKey,
    HighlightCmd,
    HighlightIP,
    HighlightCidr,
    HighlightHost,
    HighlightPort,
    HighlightTable,
    HighlightFwMark,
    HighlightMTU,
    HighlightSaveConfig,
    HighlightKeepalive,
    HighlightComment,
    HighlightDelimiter,
    HighlightError,
    HighlightEnd
};

struct highlight_span {
    enum highlight_type type;
    size_t start, len;
};

struct highlight_span *highlight_config(const char *config);
