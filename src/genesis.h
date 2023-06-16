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
static const unsigned int nNonceMain = 213440;
/** Genesis Nonce Testnet */
static const unsigned int nNonceTest = 14567;
/** Genesis Nonce Regnet */
static const unsigned int nNonceReg = 8;
/** Main Net Genesis Block */
static const uint256 nGenesisBlock("0x000037be2875d2a8bd68ac77efb3772b5b0b5f8b255981f28137e028619081da");
/** Test Net Genesis Block */
static const uint256 hashTestNetGenesisBlock("0x00014b980c37696a0d0387f98cae81594f64c34d10a5e5d2a3ec4f62c44a344d");
/** Reg Net Genesis Block */
static const uint256 hashRegNetGenesisBlock("0xa69b52facdc86b74eb541f8e8952226537d4e748d9a6c9dc6715a56c3b236535");
/** Genesis Merkleroot */
static const uint256 nGenesisMerkle("0x12175adc21102329b46ae8595182ac91ccbd0d9169cd44f3904d93c890c35350");

#endif // BITCOIN_GENESIS_H
