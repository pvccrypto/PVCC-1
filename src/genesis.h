// Copyright (c) 2016-2023 The CryptoCoderz Team / Espers
// Copyright (c) 2018-2023 The CryptoCoderz Team / INSaNe project
// Copyright (c) 2016-2023 The Rubix project
// Copyright (c) 2023 The PVCC project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_GENESIS_H
#define BITCOIN_GENESIS_H

#include "bignum.h"

/** Genesis Start Time */
static const unsigned int timeGenesisBlock = 1686822379; // Thursday, June 15, 2023 2:46:19 AM GMT-07:00 DST
/** Genesis TestNet Start Time */
static const unsigned int timeTestNetGenesis = 1686822382;
/** Genesis RegNet Start Time */
static const unsigned int timeRegNetGenesis = 1686822390;
/** Genesis Nonce Mainnet*/
static const unsigned int nNonceMain = 81619;
/** Genesis Nonce Testnet */
static const unsigned int nNonceTest = 37271;
/** Genesis Nonce Regnet */
static const unsigned int nNonceReg = 8;
/** Main Net Genesis Block */
static const uint256 nGenesisBlock("0x00003e75511f03ddd2662091944fc5e4f11207527e5f895182808faa3ed47b03");
/** Test Net Genesis Block */
static const uint256 hashTestNetGenesisBlock("0x00017f779301052f364007baa8e9678ec9411867abbf6144b3dc8793f6619dc0");
/** Reg Net Genesis Block */
static const uint256 hashRegNetGenesisBlock("0x6f210609569a3910d973e3b261381b3845689d3c706ea975809a45e1ca31ad7f");
/** Genesis Merkleroot */
static const uint256 nGenesisMerkle("0x2d5345deef33bd51baf87f36d4003fbba17099734f3137035a36924c4c5f1059");

#endif // BITCOIN_GENESIS_H
