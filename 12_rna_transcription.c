#include "12_rna_transcription.h"
#include <stdlib.h>
#include <string.h>

char *to_rna(const char *dna) {
    if (!dna) {
        return NULL;
    }

    size_t len = strlen(dna);
    char *rna = malloc(len + 1);
    if (!rna) {
        return NULL;
    }

    static const char rna_map[256] = {
        ['G'] = 'C',
        ['C'] = 'G',
        ['T'] = 'A',
        ['A'] = 'U'
    };

    for (size_t i = 0; i < len; ++i) {
        rna[i] = rna_map[(unsigned char)dna[i]];
    }
    rna[len] = '\0';

    return rna;
}