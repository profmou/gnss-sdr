/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _UlPseudoSegInd_H
#define _UlPseudoSegInd_H

#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Dependencies */
    typedef enum UlPseudoSegInd
    {
        UlPseudoSegInd_firstOfMany = 0,
        UlPseudoSegInd_secondOfMany = 1
    } e_UlPseudoSegInd;

    /* UlPseudoSegInd */
    typedef ENUMERATED_t UlPseudoSegInd_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_UlPseudoSegInd;
    asn_struct_free_f UlPseudoSegInd_free;
    asn_struct_print_f UlPseudoSegInd_print;
    asn_constr_check_f UlPseudoSegInd_constraint;
    ber_type_decoder_f UlPseudoSegInd_decode_ber;
    der_type_encoder_f UlPseudoSegInd_encode_der;
    xer_type_decoder_f UlPseudoSegInd_decode_xer;
    xer_type_encoder_f UlPseudoSegInd_encode_xer;
    per_type_decoder_f UlPseudoSegInd_decode_uper;
    per_type_encoder_f UlPseudoSegInd_encode_uper;

#ifdef __cplusplus
}
#endif

#endif /* _UlPseudoSegInd_H_ */
#include <asn_internal.h>
