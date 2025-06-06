/*
 *  SPDX-License-Identifier: BSD-3-Clause
 *  SPDX-FileCopyrightText: Copyright The TrustedFirmware-M Contributors
 *
 */

#undef MBEDTLS_PSA_CRYPTO_EXTERNAL_RNG
#define MBEDTLS_PSA_CRYPTO_EXTERNAL_RNG 1

/* PSA crypto algorithm support for AEAD (authenticated encryption) */
#define PSA_WANT_ALG_GCM 1
#define PSA_WANT_ALG_CCM 1

/* PSA crypto algorithm support for AES cipher modes */
#define PSA_WANT_ALG_ECB_NO_PADDING 1
#define PSA_WANT_ALG_CBC_NO_PADDING 1
#define PSA_WANT_ALG_CBC_PKCS7 1
#define PSA_WANT_ALG_CTR 1
#define PSA_WANT_ALG_CFB 1
#define PSA_WANT_ALG_OFB 1

/* PSA crypto key types for symmetric encryption */
#define PSA_WANT_KEY_TYPE_RAW_DATA 1
#define PSA_WANT_KEY_TYPE_AES 1

/* PSA crypto hash algorithms */
#define PSA_WANT_ALG_SHA_256 1
#define PSA_WANT_ALG_SHA_1 1

/* RSA algorithms for asymmetric encryption */
#define PSA_WANT_ALG_RSA_PKCS1V15_CRYPT 1
#define PSA_WANT_ALG_RSA_OAEP 1
#define PSA_WANT_KEY_TYPE_RSA_KEY_PAIR 1
#define PSA_WANT_KEY_TYPE_RSA_PUBLIC_KEY 1

