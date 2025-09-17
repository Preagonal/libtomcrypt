/* LibTomCrypt, modular cryptographic library -- Tom St Denis */
/* SPDX-License-Identifier: Unlicense */

/* ---- SYMMETRIC KEY STUFF -----
 *
 * We put each of the ciphers scheduled keys in their own structs then we put all of
 * the key formats in one union.  This makes the function prototypes easier to use.
 */

#ifdef LTC_DESGR
int desgr_setup(const unsigned char *key, int keylen, int num_rounds, symmetric_key *skey);
int desgr_ecb_encrypt(const unsigned char *pt, unsigned char *ct, const symmetric_key *skey);
int desgr_ecb_decrypt(const unsigned char *ct, unsigned char *pt, const symmetric_key *skey);
int desgr_test(void);
void desgr_done(symmetric_key *skey);
int desgr_keysize(int *keysize);
int desxgr_setup(const unsigned char *key, int keylen, int num_rounds, symmetric_key *skey);
int desxgr_ecb_encrypt(const unsigned char *pt, unsigned char *ct, const symmetric_key *skey);
int desxgr_ecb_decrypt(const unsigned char *ct, unsigned char *pt, const symmetric_key *skey);
int desxgr_test(void);
void desxgr_done(symmetric_key *skey);
int desxgr_keysize(int *keysize);
int des3gr_setup(const unsigned char *key, int keylen, int num_rounds, symmetric_key *skey);
int des3gr_ecb_encrypt(const unsigned char *pt, unsigned char *ct, const symmetric_key *skey);
int des3gr_ecb_decrypt(const unsigned char *ct, unsigned char *pt, const symmetric_key *skey);
int des3gr_test(void);
void des3gr_done(symmetric_key *skey);
int des3gr_keysize(int *keysize);
extern const struct ltc_cipher_descriptor desgr_desc, desxgr_desc, des3gr_desc;
#endif
