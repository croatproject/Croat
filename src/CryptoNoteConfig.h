// Copyright (c) 2012-2016, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018, CROATApps Team
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstdint>

namespace CryptoNote {
namespace parameters {

const uint64_t DIFFICULTY_TARGET                             = 60; // seconds

const uint64_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 1000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = 70; // CROAT
const size_t   CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW          = 7; // CROAT
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = DIFFICULTY_TARGET * 3; // 60 * 60 * 2;
const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 60;

// MONEY_SUPPLY - total number coins to be generated
const uint64_t MONEY_SUPPLY                                   = UINT64_C(10046744073709551615); // CROAT
const uint32_t MANDATORY_TRANSACTION                          = 0;
const uint32_t KILL_HEIGHT                                    = 0;
const size_t CRYPTONOTE_COIN_VERSION                          = 0;
const unsigned EMISSION_SPEED_FACTOR                          = 20; // CROAT
const uint64_t GENESIS_BLOCK_REWARD                           = UINT64_C(1507011611056432600); // CROAT
static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE     = 100000; //size of block (bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2  = 20000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1  = 10000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 11; // CROAT
const uint64_t MINIMUM_FEE                                   = UINT64_C(1000000);    // pow(10, 6)
const uint64_t DEFAULT_DUST_THRESHOLD                        = UINT64_C(1000000);    // pow(10, 6)
// Use 0 for default max transaction size limit
const uint64_t MAX_TRANSACTION_SIZE_LIMIT                    = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE * 125 / 100 - CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE;
const uint64_t DEFAULT_FEE                                   = MINIMUM_FEE;

const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY             = 24 * 60 * 60 / DIFFICULTY_TARGET;
const size_t   DIFFICULTY_WINDOW                             = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY; // blocks
const size_t   DIFFICULTY_CUT                                = 60;  // timestamps to cut after sorting
const size_t   DIFFICULTY_LAG                                = 15;  // !!!
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");

const size_t   MAX_BLOCK_SIZE_INITIAL                        = 100000; // CROAT
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR         = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR       = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;

const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS     = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                = 60 * 60 * 24;     //seconds, one day
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 7; //seconds, one week
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;  // CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

const size_t   FUSION_TX_MAX_SIZE                            = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                     = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO              = 4;

const uint32_t UPGRADE_HEIGHT_V2                                = 1;
const uint32_t UPGRADE_HEIGHT_V3                                = 2;
const unsigned UPGRADE_VOTING_THRESHOLD                         = 90;  // percent
const uint32_t   UPGRADE_VOTING_WINDOW                         = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
const uint32_t   UPGRADE_WINDOW                                = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");

const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "blocks.dat";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "blockindexes.dat";
const char     CRYPTONOTE_BLOCKSCACHE_FILENAME[]             = "blockscache.dat";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "poolstate.bin";
const char     P2P_NET_DATA_FILENAME[]                       = "p2pstate.bin";
const char     CRYPTONOTE_BLOCKCHAIN_INDICES_FILENAME[]      = "blockchainindices.dat";
const char     MINER_CONFIG_FILE_NAME[]                      = "miner_conf.json";
const char     GENESIS_COINBASE_TX_HEX[]                     = "010701ff0001d8cba1abb6e2fef4140288ea25298cf01cbf265202303707116c16290882a0a3f47c60f7edd36a5f813c21011ba0f0ca3932e752111d5a4d8d03337cb44399d7e991bbc6148d018b35fd0a26";
} // parameters

const char     CRYPTONOTE_NAME[]                             = "croat";

const uint8_t  CURRENT_TRANSACTION_VERSION                   =  1;
const uint8_t  BLOCK_MAJOR_VERSION_1                         =  1;
const uint8_t  BLOCK_MAJOR_VERSION_2                         =  2;
const uint8_t  BLOCK_MAJOR_VERSION_3                         =  3;
const uint8_t  BLOCK_MINOR_VERSION_0                         =  0;
const uint8_t  BLOCK_MINOR_VERSION_1                         =  1;

const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        =  10000;  //by default, blocks ids count in synchronizing
const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            =  200;    //by default, blocks count in blocks downloading
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         =  1000;

const int      P2P_DEFAULT_PORT                              =  46347;
const int      RPC_DEFAULT_PORT                              =  46348;

const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                =  1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 =  5000;

const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 16 * 1024 * 1024; // 16 MB
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 8;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60;            // seconds
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;      // 50000000 bytes maximum packet size
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;          // 5 seconds
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000;          // 2 seconds
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000; // 2 minutes
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;          // 5 seconds
const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "";

const char* const SEED_NODES[] = { 
  "nodes.croatcoin.info:46347",     // CROATCoin.info Random Nodes
};

struct CheckpointData {
  uint32_t height;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
  {1,  "9692c651a2901da5a791b268dbec3762e43afcca9b4794c9035111930abccd75"},
  {50000, "7c05780b1fbf52e0af22df3788ca757fcc40ae17dd33467f3cc41d885cd5dcd4"},
  {100000, "4ad4270a066a8291375866b10f17bc1ec6c2194a5defa7f2efb2b4fddf68e2e2"},
  {150000, "9765c4a4fbe947ad5bba069ed1e454cb8ccf3a38083ad9df9cbdeafb3452422e"},
  {200000, "d4d5f31a66a8fa27ac76c10fea250a1f22f2ac2b5530f000e031431b008f3103"},
  {250000, "e059db7b96246fe2b331e9d4ea53601e55a8e3e02879d795e47878b65f7968e5"},
  {300000, "009bec7826dc5505fd1bd660f110d2f8824125b0e315b73114afaa75cc976b37"},
  {350000, "40a7676704c0f28c75b9808d1c77a95d86847c3c1dac0cc7d6f0b12b112b37cf"},
  {400000, "4cacf7d263629af014e7244c6191788065dc435e70445283959c6fe983549805"},
  {450000, "efd1554b5d772c9e6e236a712bbae28cf06fc5b65269d939ed693766959314af"},
  {500000, "6cfcd3e024612a8937323f5b5d66da3cbbaa9d19422714da71e96059c44f1a1b"},
  {550000, "dfece901a0ec0d2a505cbce1dd457c9e78e0beca026a868a20ce46fa3b089b7e"},
  {600000, "1ec699c60d081c6b460df3b44cb96c8030ea1bcf87635ece05e81777460be4ea"},
  {650000, "260c10677a1894e171dbdf3e0afe572d106fb5be6b2e43a728f2615da26d5cb9"},  
  {700000, "bd152581f2f34d7f0379f7c1de98bc98fa5a3fe8f8b0bb47ecff3bcbd9dc4d7b"},
  {710000, "cb4952459e60e3825d7d319e5e91228d8e0d2e6c7d6ef9b89421f6b981c81e62"},
  {711000, "6608c00aa77ea783f5f978233735a930d5ea1615029b12e3d91dbfc28bfa20ed"},
  {712000, "00081327f96890b31c71c77cd0cbb95429cfa8465bd1f6dc22f53e57b0c02516"},
  {713000, "7fe7cbf7a9585096a84b17b958bf39e18e90552f02e724b2f07ac31b59d649bb"},
  {714000, "0a50f6a664f78cb6bd6c429fbe273709c14e92a082dd49082f4182f302195068"},  
  {715000, "4fea8b66cbc8aae1161219e2b90c6f2ef96d90774e51b5cbd487fbb6859cafdb"},  
  {716000, "428e4d3fc79076a555ac852fcfe9792f7a128e15b12086a76ff882a3815f2825"},  
  {717000, "0c11ffce5543503121c9ee7e78889b652cf6ecab2d5bc22f7a02563d7b2e9956"},  
  {718000, "7544f9bfd2ba3658f8334799180470a51c9734455c21fb433a53df498829d45b"},  
  {719000, "d87cb89571feda045807c6f83ced9dc4d9c745d62bcd60b43f4085fae8f870db"},  
  {720000, "bef7b4e623526d9221543c45d0ecd3137b874412c6e18488f8cc06ae16aad924"},  
  {721000, "5ff4577bf4c8a368204af19570884fc5bba1924b148efefa29d5d23bf4b1832e"},  
  {722000, "bef394df6217fbbada2a9fb3a18408ca3ca176c78cf74d513f02fad8d0ced6fa"},  
  {723000, "7d83346091e24e641b879ec7e1ddd079eb69beb9bbe735b76888404b03fde433"},  
  {724000, "effa5dc40c80208b7811e9a6accb8d6fb84ac6a17ee47801d00b40706e8e1860"},  
  {725000, "49ae7d4243922e620d9efc5161c1497878f31053675f75c1d350fd51fa24b95f"},  
  {726000, "da1bea49d9c254f51c97771638d8bff755d8fa73866ca597ad50890de5897996"},  
  {727000, "66ccb96e22563166c8acdf8488b9f4ec677ad8a6f01baff8d1e4fb7f2c122b02"},  
  {728000, "ae0bd80f6d739b5cd8d6fa555b9f626355ed08d890b1f7e73c8627977a5c76eb"},  
  {729000, "51bc11aea45d5c66f52f4819738e8fcbcf74d42d517e534b8a1c877a3e634d16"},
  {730000, "0a1022b9328a71879e58ca2c672fc566f4fdaac2489aaf1bcb6a974a78f68f5d"},
  {731000, "5796172b99a046452c7120ead7afbb5e47de5b6e073a479433f03b0a793560e1"},
  {732000, "046d57502e098472e8465baf9c0a084f9fa82dc2e4c7ea3e63211db8351d3a97"},
  {732100, "a0dcba1454df99d8509802ffc6cca90d90aeb1d2c3e7efa7eee8124dfb4900a5"},  
  {732200, "8bd8b718bfc9a87e9dd287d60d72ada241478afe68ee047c78e660b0427cd5fd"},
  {732300, "94c1ecbabb4016ac217c5ba2e648e5e99a5e3c33d4cafcfdfbf322695fa2b395"},
  {732400, "b0148738032b9c18c2950d2183d4a5193513303c4730969b29ae792c526657db"},
  {732424, "2a2a8cfba6e5d1534933c0cec54eedc74abeac72846db7d940237721492faede"},
  {732500, "60541ac0dfc328852e51e2b78c6e6b2f670e42555b0c4d51d209f85753ee83f9"},
  {732600, "e1afda2d53932ce705bfd5a583461185773b5a53649ebe35ecead7a94a355a5e"},
  {732700, "8de842351df89162425bbadda5ebd6781a89eb598422d0cf4b394bce585aae59"},
  {732800, "9cc82b051bd22b63d6fe1b80f9a68939aa19f1179055f34857ba5d5f72b9e106"},
  {733000, "34c7d58093caaaec6e532353f0e5ad53e4a606a391bf5c6c96018d98547cb581"},
  {733100, "78840f3efc85bdab48972f5cc9d7ac6135fb24536bb0b91b962715788b44fcc8"},
  {733200, "85bb7aaa71793b53318ba743321d00bc8a7c09f3e4648d19c6ee6e07873d07af"},
  {733300, "36e82b00c53744b9630ff20fa7c180baa7b58968e411e74ad7787af2f419029f"},
  {733400, "a1560ff96585a3c87d007417ff1d13dd8ba90c01ac30316a54c30d1f023b8ea7"},
  {733500, "6f20fbc3c7551e6c8ed93b132825bf9da087d05fb900443a1b240580c6e6a308"},
  {733600, "afade09ad086b222ae968d13cabf69177e6e6449d11b02334499a305a8dbccc9"},
  {733700, "295eb783e01cdaa9dfd41f91bad4d62f40ca1c7536ef1c081671146cb9fe47c9"},
  {733800, "3e42c1dde5bcaa4964b902908077ada7d5a75bcb6f1d5a868b81a758d561e2ef"},
  {733900, "deb81ba0c55b660549a07bdb0644794dd8ad5c05a50e81486b992d1d0ba88e73"},  
  {734000, "02c15eef53536578ef350dfad714a24ea38773340f2146ef316fd312242bb296"},    
  {734500, "4c830f10fdb81a2afdd5924af8fe9fe4e10df8c04d750060ec0dc583d9d1669d"},    
  {735000, "6196428ed614ea6e24922f0e408b6c693756a69ece30858b85e21d4c68a618cd"},  
  {735100, "fef3367e3b0295cafe03020b314153861f5f4fed35d408ac7ad531acc1ffaa11"},  
  {735200, "8b21b4655c8290b720bbffc96b02773c80d581a630f27c2927f9a7113c132a27"},  
  {735300, "6e24130454628f6ad835df77a1426079644464b4095719a9a6d2f768f2803af5"},  
  {735400, "c39921bfd1dc0ecd2258e5cd6645075e880fe1bd1501fc7a2e7b113d5da00095"},  
  {735500, "c2ce3202172413f9e85a38d0db119f872a2a35eb92572934d8119dcc7c352a7d"},  
  {735600, "12722a7e7c6d8c7f0e732a165c0d7b03baa92437280561040038c6e638d34d64"},  
  {735700, "5013b40c4f4f782a9f0c4928dd21030cabe13e4c0c08cb75c500eae59a5687ed"},  
  {735800, "4c554eb0025504699e58add5e6e96fdb9a2a68c697c650b07d00e4aee44d5378"},  
  {735900, "6c8e1e13cb60ecb8520d6291143bb7ac80d4a713e2e5ef1e1cc3da9b3208df89"},    
  {736000, "78b74492843e6cfe5a444884610b17569e27d479aa8923e3773481d2bfc2ca57"}, 
  {736100, "94a1fe1e2331f4ec4cfd180b1d98f71e1af962480bfc000f48087e7af08cec24"}, 
  {736200, "c6a163c0c4d3a0053f972327174a3b8c59ac83e6e909d5a0749dff97ad0699cd"}, 
  {736300, "d15425a27f5a90c33ea0f00183b16d7978560b2f869eb7866a749b712c7d0e11"}, 
  {736400, "92c3ae687af1ab5fb7215efa9cb1d79cb21c3a79b92621e8a1ba459634aea0da"}, 
  {736500, "d72152570b89c99a6495eed04edf97d2080c45bb53ea66f72da8924e6282ade5"}, 
  {736600, "31adf690fe0d0ad0ddc205bfbc65d431ff0a44ac0f2a7f1896a86ea59410e5de"}, 
  {736700, "fe0c2259b799ca2368a9ba8237f2e041c8e27767975ccf1a9b387cdc2942b242"}, 
  {736800, "f388580703f27a135091e4323ca71e6b2bc58638e4feda9a9800fb5eb1584f7e"}, 
  {736900, "3a71cedc0603d218f1ba3f7d9f2390c3ab377c333b613ce7998848da081b7edc"}, 
  {737000, "6442b0734b684b1116df7906520db40e6eafded6342194ab899e92277b80b839"}, 
  {737100, "42723ceced41213965150b3a1c1efc158d7932eb65f89db92f3209ccd306ad5b"},   
  {737200, "e31ae84dc8265e06b0c68b62146e6449c443dc9f48acb57c0539b2498580fe92"}, 
  {737300, "f6980588352a2debd63cffec8f13f9f4d924cc725a39b2fd39312d713f5bcdd7"}, 
  {737400, "f2a00ec67c6840f76550677231e4b941f195d77a9bedd5017b142763f686c3e9"}, 
  {737500, "03ff2c671b20d822128df90c97201510b5b65b2dd540001df9e4ca8d8aa3d7c9"}, 
  {737600, "ebccd790cf35b1abe5cc9feb26098e0516b08cbc930f193a75221f7a0a58b206"},
  {737700, "591e9ae50f89cf0c196117f58111c4ba94608debad0be150b62beb463873a976"},
  {737800, "d284c61686db292a57fa128b851b7df37c879c61610141de31c64767f06df10a"},
  {737900, "be74fa7998cfe56508531d7eb521cdfc98395427a4905fb23827c5292cd53391"},  
  {737950, "f37c19aa20708b7088ef33f6e5a90f96553b45ea16f0d7c01329843d8ff7411a"},  
  {737955, "7e73d41ac7cdc4da1efec1d159626d55f0c82bc584ac722b1e18258e791a98a1"},  
  {738000, "cc453fc8787441d68e4b98c31a37c58e1df1f3c19ca7347b9238b5f04533b701"},  
  {738100, "6aecec8e287d3ba3df63408fa79e9ae11b846ed8e3e24ca9b8c492d3a0d993d6"},  
  {738200, "8cb0d279b945697274cf2b525adc19bce23f08601b3d0bd072d51211bb3da5a5"},  
  {738300, "7a93b549374a767e6fee0cb2c9cd21fa49ba6bce89f303adf49aec2479d2f09c"},  
  {738400, "8f764fb448f79dc20a6278538a2042b58cb3d38d6d840c880bfb4eae9e13fec2"},  
  {738500, "d93a2b6848c1f2f8388e2c148ca81b7a61b4729b250f48bb3cfd289006d8c9ee"},  
  {738600, "3e0d65f8b8849d687c6dd3bfb63bae7401c3ee126f53d1fbf2335fa620768ac3"},  
  {738700, "1cbe4e7a1aa0653ff03901b43f707f33bbf2491e1740f557ac3908a75f13a41b"},  
  {738800, "2ef89c0bd7ff556a7d954d7d6e0398598109386fce717ee29416eb6b73662f57"},  
  {738900, "5d2231ac1c7697cd1287add1249de7270550c277167aa9f5922f8cd95fd6bf85"},  
  {739000, "2d8004c5aaa5209e25e854cabaf29636a5de95486211f0eb4803a2a179531efd"},
  {739500, "4a2b6db963e16ae371a10688b997be202eeaeb1022b335372c93703460691c4d"},  
  {740000, "df937154b5cdd00b997269f769249494c122308ffc2548501c3efadb58bf4547"},  
  {740500, "32d38f0e3f44050f95885ca87bbd7a788b93b2726dcb3c5d7d501f13043906ab"},  
  {741000, "5bc594bb9a376d237f58371548aef771cc6ca3851d872693ade269cc1d3c2c71"},  
  {741500, "9e97a3d414c3b6cfd5154ab760a73121958c377165f6f4a3df6117c8f380763d"},  
  {742000, "017f8d5909979b59805a3dfa20e8d8d84ddf3b9cc21473d1a8a4b7282296c3f9"},  
  {742500, "619e43fa27b9c29dac432b4aba4ea3fe22f50f88a13eb4711337d66fd2876d29"},  
  {743000, "a83f3d3e6b99bd38e2cb677cd75729afe5342bb04658cc15eee9cb5d798341cb"},  
  {743500, "368c04a6eb88bbb92dd2f27b36ddc2ea635779899a0121821a543a9773aeae91"},  
  {744000, "b397174d6c00659086acc95f252f69d6a7dfff91087014515008bf23490cc571"},  
  {744500, "b6321d5da16c7960f3bbadc5bd7746ea553aa25830b40f08c01fe2219574de9f"},  
  {745000, "f1fe533b8d433a7e115129027ab7e5a1ca9eca65eda480c35882de93a16a743e"},
  {745500, "6cf34a63050b24221d68d04fe4779e49b83c30e05d86d1d74ba9055fc89b64eb"},
  {746000, "6036e0a446b2ed6d9620596b4602812be3308a300d91b61f159e485a84824320"},
  {746500, "0b623b8b4b0dc24b9bcacffdcfdaad52a041565225ba0b1a54cb847d13cdf424"},
  {747000, "33cd1c50a0c8cd108b68eca27b4ce60100e22882258f9983ce4a4737e3ea402a"},
  {747500, "d0df687f077e830b62a3810a1fe9c0996e8791475812754dde08276d306f1fda"},
  {748000, "e09a3f8ef3543001ad583c18cc14309995f64d8c7cfe95f4b3b5aa720f241a38"},
  {748500, "8c3f3d91bbfc1675a60046f78894aea201e582203d31e1f25ad5e76fb1dc844d"},
  {749000, "78c182b02acc33e82f5ee74c996909a7af63f0491cbb3653784ca9980abd79da"},
  {749500, "01bba0ae55a6841c6285b1171d7e5599e097baca2c5608d9ecca00e3bd254fca"},
  {750000, "f588adac2e3ea1300373b21975a7a136decf8eff8de248145d1d6409ff111ef8"},
  {750500, "c8dc9579128671f56eb7b7f4aa064050495a9429615264c91565a3063d6ea2c7"},  
  {751000, "754e311f93df2e0694198dd1e6da4a0b5f4556465ef33f81b3f81a90ebd729f2"},  
  {751500, "246dcf20960a1046d0f607ad4efc118fe0e7a3b7d569b693af33f7127e0a0afe"},  
  {752000, "30ff89575ec3401662b14d6cd0614342dc150d1d70100591659355bdcf494028"},  
  {752500, "d64db79b5a2a8ae2d6ed0dbbe19bfe1e36fa424b25365b56ad408a6aa1f1ed69"},  
  {753000, "522d01767c3eb4b428e841f02816a6c50302824a3169970be18176b7cc9a2ae3"},  
  {753500, "3ed69c2625a66c045791ba62f23924ff748bf773655eaa1c7ab645478216bc38"},  
  {754000, "0fc6093cbb407f5c119048672a7f30c10ba4bbff7f723d8d9184dcb286d729b8"},  
  {754500, "0adab32c4de1c0cfd7e19d984f425d58769f19edb9e3788b20fa20eedb71b93c"},  
  {755000, "e2fb643a8276add5c864c79a9fa62271f20099bd6d781e74d256b2409149bea9"},
  {755500, "40062300cde3d425932f47400d441688dc63ecc3a8dcf9515f680b044b3c2e46"},
  {756000, "8fa80ffd7891dd09ffa6348efe034a9d353d45cbee2915d1ace5f803927df7ed"},
  {756500, "8b69ba6c54e08e8eff03d5c2327fe017772fd4754a3ecdfb40457b70ea665b4f"},
  {757000, "02c276cb96c4f69eda06c41b943a93cd3e0ce0ef52325f3a8d3f1730c99456db"},
  {757500, "cef41a1cff05f0c95f71ae7daef5a78b98fe3b9d846b34894a16afb92e2178c3"},
  {758000, "83005947fc230e11b3eb78a3f58a8258c0b615ae1403647682eb39a1b61bec62"},
  {758500, "d76f81b2b537a853e6e7e229996f422249ccc2533d25b0261777596ce357c4f0"},
  {759000, "a167cefe93c76f41e9c6f2ec2a49e62c8f6e419cb92cd500c5b5216492390cd8"},
  {759500, "a05f7a686b6867bcb8d74643202d59d964e89106ed234c86c7cf2645649f0a90"},
  {760000, "6289e367116cb0b65c48ce344234f094f6f38a7ffd9aa4aaa8eb2fcc89c34a97"},
  {760500, "68385ff70331551f13477e012b208757cbabdc44d07ce375c4625c789c28bdd5"},
  {761000, "8dafd6885b77af45affe4794b42610a88ce678568cc401acd40fd75a893aad47"},
  {761500, "71d7bab6128fb536719191265f02e1d4a3d03b83d5f58d8e19c95457cef0513e"},
  {761970, "4f82516aebbd0aed5264888081ca53f55483382bd3a69945cd3c058780f8a39b"},
};
} // CryptoNote

#define ALLOW_DEBUG_COMMANDS


