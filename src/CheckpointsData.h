// Copyright (c) 2012-2016, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2016-2018, The Karbowanec developers
// Copyright (c) 2017-2019, The CROAT.community developers
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

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {

struct CheckpointData {
  uint32_t height;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
{0, "8f8d0e094cb16c930739cca7e53e67e8be229e77a097ad13aa88db8df8f43091"},
{10000, "4c0c91557aca33b54f09de9f66167c7ebf2ea892c8a521bf658be2855ca6bd42"},
{20000, "7cb29a0ea6f1d73ed85b3431e6661af163eb3bb578ac7d4df5a116383960579f"},
{30000, "188f5332283b8f9a7485dd59c9f90b3f42fb7b31ac13248e0f9f59e633d162be"},
{40000, "9b3ba34eacdfdda97d1e06a420a74706a9a465b8f61afb2fdb13028ec3638e80"},
{50000, "7c05780b1fbf52e0af22df3788ca757fcc40ae17dd33467f3cc41d885cd5dcd4"},
{60000, "420009286e4fe0b25ae729fceffe8bafcfd786fa68cbc6ebbf518b5140895d9b"},
{70000, "e201e24cd0892e6a7db53651ee9d20b936d44288540a73ec5b76dc585fda9f7f"},
{80000, "9d52543dfeaee910278130892a9668b79c63110fd6d9330594e74a8051b0b408"},
{90000, "38e618e0cbbbd9bd4aca693e10a998242661fc074adbf569ec75d54e35b387ee"},
{100000, "4ad4270a066a8291375866b10f17bc1ec6c2194a5defa7f2efb2b4fddf68e2e2"},
{110000, "4d474937d475ad09da7bde65730a9df346ce88f36571c3092f97a5ccf15785cf"},
{120000, "4dbcb4f6aac806bac5889e866a924ba7275a7a7948049b5ccf4be2cfcab8b867"},
{130000, "bfc6b44298cafc308052234654ecb514d6088d4399a15b76a283014fd5660ab7"},
{140000, "36b8e900d144d01b9d2ea2c07d4854c25d6b04d5cdaf2fcf6136737efb6f515d"},
{150000, "9765c4a4fbe947ad5bba069ed1e454cb8ccf3a38083ad9df9cbdeafb3452422e"},
{160000, "4d4104bc567d7102448fd6035c4ca82f672c1a4aea85fdbd14f1e6220150fb08"},
{170000, "67dc492e5c494a731bb4c2e63eeca7a27c33456fd83855a621a9a4cc6cd4e730"},
{180000, "00399d0a46c363cb2e1139644c0c8ec3643c62de59f73ae6bc0ea96801a29767"},
{190000, "af25303e576cac4b979bcb77794000d435709c9a8698f81d5fe79c94ad4f5998"},
{200000, "d4d5f31a66a8fa27ac76c10fea250a1f22f2ac2b5530f000e031431b008f3103"},
{210000, "73ee380882f05d0b81e5fddb77ecc44044d74c7d790a27c5ebe6dc0bcafe6781"},
{220000, "9234b19f141568672014f05500b8002de6c5894de7921d614360410b52deaebe"},
{230000, "f22587c1ed7fedf050d15b457ecab701bea42b36a7eb04a0b6c4ca02a11ecf92"},
{240000, "5d20d1ef469a8863ec92731cbc86040f89086fbf9b2eb88ba4a2eeae845d106b"},
{250000, "e059db7b96246fe2b331e9d4ea53601e55a8e3e02879d795e47878b65f7968e5"},
{260000, "f74fe31cf81f3af52d62fe90ca0aadef560ae03d4e0245c0abcc67abde37a963"},
{270000, "a2220c85900022b31cd6e48979122c2979c82f4127e8b2d5fea40aa6fc9f22ae"},
{280000, "7a910073ebd8f20744a705f01af625839fd7a5dc39f9318dd93077e6dd41ed9e"},
{290000, "b02846b9060b45c564f9f085a3288511674d2d60b901bc66d4beddfdf902f7ae"},
{300000, "009bec7826dc5505fd1bd660f110d2f8824125b0e315b73114afaa75cc976b37"},
{310000, "709b56af5e6fd593a20a1b6a3d5a08bc969f6661ab0c658b887409a4c4e4d878"},
{320000, "35a456719803298024f016a872200756799209280138b8cd3d3024af4d908598"},
{330000, "0d324f5af554e924308adf31e87dcf96b7831fe04b154855c168ff958e52fd9f"},
{340000, "2790fa6d3002b2e0f6a78ec282d11425fccb56a85059dd4b814290285606f24b"},
{350000, "40a7676704c0f28c75b9808d1c77a95d86847c3c1dac0cc7d6f0b12b112b37cf"},
{360000, "d2ee45c1a2a0adb4b01ed51b9416f23c18d4f526d3154296457ff85ce64a56ed"},
{370000, "f7050da755e045b54806acb1b579eb0ab672220b73a232975ebca61c49014b8f"},
{380000, "2572a672850192d360349ae30f9060123bfe94a6515c3a2a581c934538b2a549"},
{390000, "a6703ac3426deaffaa1bc6de0c8d6fc51751a2faa36fa7ad1695801b35d4d374"},
{400000, "4cacf7d263629af014e7244c6191788065dc435e70445283959c6fe983549805"},
{410000, "c889e5959553e76d313a117c5e587c60b0e98072e9e95dfc77dd1b49c87ee8d1"},
{420000, "519e8fe50f9c90717c9e1238204b319f1f2f13510b1adf3c29229013c84418c5"},
{430000, "5fff41408b1ac0a27484a72f58d0372e28d7c10164025d3c726667a1fa788493"},
{440000, "0686721705f1ae1c39cea3de0912d67b0e5a41c26a7336a54df194513015f841"},
{450000, "efd1554b5d772c9e6e236a712bbae28cf06fc5b65269d939ed693766959314af"},
{460000, "f13bc1d575e0494487c3de7bf4e042d0422c32964233ce219d4d57ffe2cceeaf"},
{470000, "5b91c36aecc67e6db3290090b69e7b05e2cafb9e0b368532b53466e4e2e7ae55"},
{480000, "7a7b92ed9d8ec9082cea71bb38e1d42e4f2f1171d01bc0df8728e515d3833b94"},
{490000, "76d895a57b9551ae8ad95cbf1b181eec411be96be453215aa788e133980033f0"},
{500000, "6cfcd3e024612a8937323f5b5d66da3cbbaa9d19422714da71e96059c44f1a1b"},
{510000, "6a92c5b5e1b732b278614b029db3330b97d27de002e67bcab2e01791856f7dd6"},
{520000, "d4ee0be90f53a70fdf3099cc604533fb82ab6416f9753e180d303fa92073c06f"},
{530000, "dbdad74a98affecd353ce626f4ed0f2660231b06529b3790697b4b24bfbe7fc8"},
{540000, "4870c08777ec1270c1ba08c17e2527aff18346a27afd421ef6892c7c1d0038d4"},
{550000, "dfece901a0ec0d2a505cbce1dd457c9e78e0beca026a868a20ce46fa3b089b7e"},
{560000, "cbb3cc91535ace705f4c0dd64aaf6254cc36210d88afbaf9139559d918b82152"},
{570000, "7202308f4a04e5c1f7a0e032661058a1e50b683084b74811605b08d2d33e3b2f"},
{580000, "d15ec94ca7ff6f7ecc9dbf1af1872fe46dc2ab93066e43c5e04147639fcc196b"},
{590000, "f4832655a8ccb7f7717ac50210ab7f306cb81f2bf3c79968d5b9fc5bd4ced709"},
{600000, "1ec699c60d081c6b460df3b44cb96c8030ea1bcf87635ece05e81777460be4ea"},
{610000, "e7c9a169893c607b80ba5fb1c86bcc0a8af703272283cfe47da0d8ac5087e4f0"},
{620000, "52ea7b9f44ca590e40fae4f174ddb2ace3fb04b19c826e5a6e770c10fcd19370"},
{630000, "5fa58c5d9b26bebccc8f28d0609fab7538f7ac142438ef185a9d5f9a316c23d3"},
{640000, "d044fa800354b432023fdfa6910839e569de317fe8e16621a68b5b72041a3612"},
{650000, "260c10677a1894e171dbdf3e0afe572d106fb5be6b2e43a728f2615da26d5cb9"},
{660000, "8a47668c611a2ec0f2f12ad7d7665aeb49d59250bc98b40786ff2ff76b53ded2"},
{670000, "d25cb98e54bf3d260a330fcc2de3ba627aa1a9940b7f9f978415a207e856bf0e"},
{680000, "ffe3f2543dd9f69e32fb9bb0a2bbf631ba472ffccc43a9fd29628b37e142cbe8"},
{690000, "7d4bd01e317cd350a34e18af445cfb448e41838c712bc81b85e685d1f640958c"},
{700000, "bd152581f2f34d7f0379f7c1de98bc98fa5a3fe8f8b0bb47ecff3bcbd9dc4d7b"},
{710000, "cb4952459e60e3825d7d319e5e91228d8e0d2e6c7d6ef9b89421f6b981c81e62"},
{720000, "bef7b4e623526d9221543c45d0ecd3137b874412c6e18488f8cc06ae16aad924"},
{730000, "0a1022b9328a71879e58ca2c672fc566f4fdaac2489aaf1bcb6a974a78f68f5d"},
{732424, "2a2a8cfba6e5d1534933c0cec54eedc74abeac72846db7d940237721492faede"},
{740000, "df937154b5cdd00b997269f769249494c122308ffc2548501c3efadb58bf4547"},
{750000, "f588adac2e3ea1300373b21975a7a136decf8eff8de248145d1d6409ff111ef8"},
{760000, "6289e367116cb0b65c48ce344234f094f6f38a7ffd9aa4aaa8eb2fcc89c34a97"},
{770000, "19f0c69c68d06e89318e11220e3c30b31c6423d0db03fdee752bb5ea0dd5d565"},
{780000, "cf9fea8b67a3d7e30176efebc454660c45077a9d591dab8e99a682bdbc41b38f"},
{790000, "af65bf9289557b75baf35e40e4a5ca760597ecd3dd1b59379bf709d57b02102b"},
{800000, "730d01d22dd88d87518323f96973c5af486ab2dc1f32f98da7f4ce8d80abe223"},
{810000, "d0f4fdeeb0f732d93879b43b117dae2606d0910624c1a40e2c8473e0548fd52d"},
{820000, "39e7e35c09a84bc85416e981b4564d17aec2e410d80d436eb194b4f5c6624efd"},
{830000, "5570d83ebc0b9799ebe906fa8879127889a8106fd13728af3f549e9e14ecdcae"},
{840000, "a2339f3db5f213ba7b7e61299b132d7dd9595a9bd0c03685b071f351b8e3f47f"},
{850000, "83f3d995ade0ef80c54656d0605a3636748490d4825ee0075c4af581cfa8c8a8"},
{860000, "b4b0e40143258950f57ac7d4b988444386f65a4cd0f850798f12e44b49ad8bb4"},
{870000, "c90a39b8ec24508242f42467fd9ac922c1ad5b0cdd27cbd0fe970e65893b0ca7"},
{880000, "4706f97f105fde6b1a61118f37d0abb0399ee5b08ad87a7acf311d328fcdd114"},
{890000, "926a9d201a685194ae0f2e05c7d7a89120563f8b0056827219bfb27ce561e4d1"},
{900000, "0ad9b7a653b0c1a5ee5d99d4f12f4738895ae89d67794af3d78265deb172b767"},
{910000, "4b3646bc0c75838d0c6da456160e293aa1cad5f4663d0517e3de0ffda9187380"},
{920000, "fc911ddc5deaa6f5076a14e596372670a5db94cd2186b543a38552b9cee9090a"},
{930000, "2828cfa572dbddd16bc4707417553ad7473607d2bb9753a04318f0534cea6357"},
{940000, "6024971b226aaabfc96dbec77b6e7a022a5781d3a811d1658d5bccfa39c145c1"},
{950000, "6299d72f406c9142b7218f93c247d8625da9de22be5511f8feac91707c3414fa"},
{960000, "87437c14224d4db29369353e24abd814676ee7cf1c873bd78d228c6abdabc848"},
{970000, "f837cc8feb35a34f3698001fccaaa81a900bc42ead9e9fcb89671d2f23dc1c3c"},
{980000, "06279882e98e2868e2daed39c727c5c3bb17db0580840d440c0fa39ddcb67790"},
{990000, "f19119ccde2c048ddf4b9286bbe6aabbd8666840c0fbdbbfd88be7720dce2be0"},
{1000000, "f35867894fff920c27079c1030a42c8e8e43938e5e0674a9e47b719e7a972553"},
{1010000, "5d4dd782d031dc44f302e4f38b23b6e322da6c0d4100a95bfadd07496dab3bcb"},
{1020000, "85214e65c0273f417592a0ff7d8e7152c720824beb67f2d8c3381aa406119d06"},
{1030000, "c649c269622d902ba7be41530a869ac94dbfe4d97a826868fb083d71ab19d7d0"},
{1040000, "749e8a65bde6867608b6ee5961ff0ac3730c0d9d7bbbe9997f6bdc7a2f9beab9"},
{1050000, "d8ec7e389311e1c46d475f068f030871157400d596b39839823e2c523ae5d85f"},
{1060000, "91b9a74635b13229a17bced10656b1d01b3b127fb91843a2e73fed510aab1cc4"},
{1070000, "d5db2406807ef5573c310a67453d60462fd574c10a9ce2388b0de877e1a33cdb"},
{1080000, "a0001bd402178116b4c36be9ff7ea0bd0b42a8676ae76507eab29c92dc05d93d"},
{1090000, "a15bc126e609fdc5d2231eed5b13b7c433e0107f0822ce2eeecb80fe1ba480b3"},
{1100000, "06629d07ff709c00e201324afcae2867a6057f05bdc954ad7335d3da24ffc80a"},
{1110000, "c3bf51573a8be669ea91c958e62d98be8583dcf7dd5343940542ddb427fbdbb2"},
{1120000, "9c6581338103f3e6071baca7db8bc4e1b37225d198b2a59037ed88d718054242"},
{1130000, "e0024a043f0474159d67cffeda5d525c16bda89caebedad8f96ef6134608e230"},
{1140000, "f37ba6d45d057663b229e56b0df46f1f25c39535d67a4cc7bd9a5dfc47e8fd69"},
{1150000, "69831e1b8053852489c6451294da9811a48ad8f63ec21d173edf4c2b1d92a5bd"},
{1160000, "50568a11c70fa60c512af2ba137fcf38ced4ecd1f357903307d8a4221c3c0646"},
{1170000, "5583ac4a0ad40c3e80ca18f2dc5897197a14f74e4516f47f0e63614bfa287d17"},
{1180000, "f61889ded4b8e0b78c3399f4fa9a79eb3038281e64d36a502afe54a8ae05998e"},
{1190000, "584137fd27db76625fdb479557cee983d475976e4922fadea545a9d9f3b5618c"},
{1200000, "92dbb667b1c2dd1ba689a6cf028a7d40d5a246c49445904594d99dab5267b927"},
{1210000, "bf267c8ca2715ba0e1913a12a2fd3589cfc1be68116b9e81dbf7e2912d51c20a"},
{1220000, "5706a09dd680a164a44ca02a038c865599a70414d231a5b95bfc1b14787d1efd"},
{1230000, "8dda0c5551768fa2fafdb8ee19d2be20ce172c4435f15da2c01f42b151329906"},
{1240000, "d4753f8b8c2919c5e4a17afe64d704d7595c48d80b5a30a96b34ed22cf049158"},
{1250000, "3609603a67b04f4567e23f03481644bacfa4e0462c174b0d8bfb230e46ce71fe"},
{1260000, "cb0009195f2ef500c6d01adb460cfe0aed874be7570737a0b2c0217763a84cd1"},
{1270000, "b446942c6eea1955f8e4a85b43f54d0b93090d6a05a89f5f77fca6f7211cc32f"},
{1280000, "96bfe8d4c5a1edb0561b5561faa4c7dd105decbae3c2e44f71398b501f341184"},
{1290000, "4a397dfe853f7a419a1e299a22a6f764161da06347e47b994862842fb21538fc"},
{1300000, "35556e458a78d344f6b5e3a54a3682574b93a49db87a3780924edfbf7842feb5"},
{1310000, "48f30bb4f9e5525c4563d56fa76cc701888b81b8d016a682f5c426f10cf73839"},
{1320000, "4c4823945fca397b059755a06d2d0f23652be658f170b373af9a3de1d017c362"},
{1330000, "24ba828105ee2f90487015662e32266338d2f51db628005ba1d14da25722a04d"},
{1340000, "f5e751f1a38606177c7325f2cd2b1da0d54c6be4c96c9596f8ac07ae6630a982"},
{1350000, "d2cfc121bd504af035cbeb28873e0eafd5ba9f945f5a2b51d4444123ce690ef5"},
{1360000, "f792128050a2b2ed5e94dd38034581e5a52051663e2b067dbeda9df2ce04d630"},
{1370000, "5f3a5829915c289879a29bad6014862c9a12c4db73eb729e69a6ab8a04cee36a"},
{1380000, "0d0423a7a14d1999d76b8624370e0811292c0443b087dd1bed8a9aa86de73db9"},
{1390000, "d9911a4e95c57cd0f9a65ac8ce0ae923e106b033ad8b4478b07a79aeada8beea"},
{1400000, "9b14f88ecbfda836687a0530835426e711ab5d5dd48417ec096e58c0d62eaf8f"},
{1410000, "17b67bd414cafc28bed512b096e9611e7f525df68b7c79f19148a7c48a055c9c"},
{1420000, "e8c6d5775f42bc220f989fdc1978c5fe337ea4425703c40471713750f97e96df"}
};

}