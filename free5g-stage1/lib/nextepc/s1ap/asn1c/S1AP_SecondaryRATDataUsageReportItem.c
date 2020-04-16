/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "S1AP_SecondaryRATDataUsageReportItem.h"

#include "S1AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_S1AP_SecondaryRATDataUsageReportItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SecondaryRATDataUsageReportItem, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SecondaryRATDataUsageReportItem, secondaryRATType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_SecondaryRATType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"secondaryRATType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SecondaryRATDataUsageReportItem, e_RABUsageReportList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_E_RABUsageReportList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RABUsageReportList"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_SecondaryRATDataUsageReportItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_7055P94,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_SecondaryRATDataUsageReportItem_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_S1AP_SecondaryRATDataUsageReportItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_SecondaryRATDataUsageReportItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* secondaryRATType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* e-RABUsageReportList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1AP_SecondaryRATDataUsageReportItem_specs_1 = {
	sizeof(struct S1AP_SecondaryRATDataUsageReportItem),
	offsetof(struct S1AP_SecondaryRATDataUsageReportItem, _asn_ctx),
	asn_MAP_S1AP_SecondaryRATDataUsageReportItem_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_S1AP_SecondaryRATDataUsageReportItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_SecondaryRATDataUsageReportItem = {
	"SecondaryRATDataUsageReportItem",
	"SecondaryRATDataUsageReportItem",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_SecondaryRATDataUsageReportItem_tags_1,
	sizeof(asn_DEF_S1AP_SecondaryRATDataUsageReportItem_tags_1)
		/sizeof(asn_DEF_S1AP_SecondaryRATDataUsageReportItem_tags_1[0]), /* 1 */
	asn_DEF_S1AP_SecondaryRATDataUsageReportItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_SecondaryRATDataUsageReportItem_tags_1)
		/sizeof(asn_DEF_S1AP_SecondaryRATDataUsageReportItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_SecondaryRATDataUsageReportItem_1,
	4,	/* Elements count */
	&asn_SPC_S1AP_SecondaryRATDataUsageReportItem_specs_1	/* Additional specs */
};

