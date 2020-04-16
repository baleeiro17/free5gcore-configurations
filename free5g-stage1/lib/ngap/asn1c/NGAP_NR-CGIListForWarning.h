/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/r14.4.0/38413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_NR_CGIListForWarning_H_
#define	_NGAP_NR_CGIListForWarning_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_NR_CGI;

/* NGAP_NR-CGIListForWarning */
typedef struct NGAP_NR_CGIListForWarning {
	A_SEQUENCE_OF(struct NGAP_NR_CGI) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_NR_CGIListForWarning_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_NR_CGIListForWarning;
extern asn_SET_OF_specifics_t asn_SPC_NGAP_NR_CGIListForWarning_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_NR_CGIListForWarning_1[1];
extern asn_per_constraints_t asn_PER_type_NGAP_NR_CGIListForWarning_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_NR_CGIListForWarning_H_ */
#include <asn_internal.h>
