#pragma once

#include <cstdint>

constexpr uint64_t illegal_instructions_intact[] =
{
	0x14123DEDC,
	0x141261C7F,
	0x141277D40,
	0x1414020BD,
	0x14140F61E,
	0x14B2B6065,
	0x14B2B9225,
	0x14B2C38FC,
	0x14B2C5FA2,
	0x14B2CA78B,
	0x14B2CF482,
	0x14B2D653C,
	0x14B2D8CF0,
	0x14B2DA6D2,
	0x14B2EB8FB,
	0x14B2ECBEE,
	0x14B2F376B,
	0x14B2F6306,
	0x14B2F88D3,
	0x14B2FDF3A,
	0x14B3508DC,
	0x14B351B0F,
	0x14B356014,
	0x14B3573EF,
	0x14B35CACF,
	0x14B35E76E,
	0x14B36757B,
	0x14B36AEA0,
	0x14B36E087,
	0x14B372670,
	0x14B372744,
	0x14B375729,
	0x14B3790EE,
	0x14B379F34,
	0x14B37CBC3,
	0x14B37E46C,
	0x14B3832F7,
	0x14B389DE5,
	0x14B390B46,
	0x14B39A032,
	0x14B39C874,
	0x14B3A7879,
	0x14B3A9BCC,
	0x14B3AC660,
	0x14B3AE8A8,
	0x14B3AF005,
	0x14B3C02E1,
	0x14B3C2DC7,
	0x14B3DAD67,
	0x14B3DD92D,
	0x14B3E49E1,
	0x14B3EBB18,
	0x14B3F156E,
	0x14B3F3B2E,
	0x14B3F6A1F,
	0x14B3FC8EE,
	0x14B3FE5C0,
	0x14B3FFE0C,
	0x14B405116,
	0x14B40CD15,
	0x14B40F8BA,
	0x14B4136C4,
	0x14B41539C,
	0x14B41B882,
	0x14B41C7D5,
	0x14B424303,
	0x14B428436,
	0x14B42B8DC,
	0x14B42DD0B,
	0x14B42E1CA,
	0x14B43A6D8,
	0x14B43CB43,
	0x14B4439FA,
	0x14B44510E,
	0x14B44528D,
	0x14B44E9E5,
	0x14B454C97,
	0x14B455538,
	0x14B475359,
	0x14B47C92C,
	0x14B488696,
	0x14B489298,
	0x14B489F2E,
	0x14B48AF9D,
	0x14B48B5B8,
	0x14B48F441,
	0x14B48FC17,
	0x14B493289,
	0x14B49581A,
	0x14B4991B9,
	0x14B4A0737,
	0x14B4A6FBB,
	0x14B4A7476,
	0x14B4ACE09,
	0x14B4B1A6A,
	0x14B4C0500,
	0x14B4C3A73,
	0x14B4C8DD0,
	0x14B4D9639,
	0x14B529163,
	0x14B52EB48,
	0x14B52EF82,
	0x14B53B5E3,
	0x14B53C40E,
	0x14B54466A,
	0x14B554BBD,
	0x14B583C3A,
	0x14B587749,
	0x14B587E86,
	0x14B588BFD,
	0x14B58EE98,
	0x14B58FCC1,
	0x14B59023F,
	0x14B5924FB,
	0x14B595DFC,
	0x14B596B2A,
	0x14B596E49,
	0x14B5A0B4A,
	0x14B5A235A,
	0x14B5A5D52,
	0x14B5AF2AA,
	0x14B5B0446,
	0x14B5C8698,
	0x14B5CD955,
	0x14B62639F,
	0x14B62F321,
	0x14B6339FC,
	0x14B63D66C,
	0x14B641A18,
	0x14B642607,
	0x14B64D09C,
	0x14B655A50,
	0x14B65A426,
	0x14B65D7D2,
	0x14B6666C4,
	0x14B66757B,
	0x14B66C177,
	0x14B676E80,
	0x14B6779A8,
	0x14B67DEA9,
	0x14B68C499,
	0x14B68F544,
	0x14B6E8817,
	0x14B7373C5,
	0x14B75DEB9,
	0x14B7630CC,
	0x14B769313,
	0x14B772EBD,
	0x14B77A2FE,
	0x14B7858E4,
	0x14B7878C2,
	0x14B787DD7,
	0x14B791100,
	0x14B791552,
	0x14B792E99,
	0x14B7A0DEF,
	0x14B7B8930,
	0x14B7CA91A,
	0x14B7CAAD8,
	0x14B7D1BBA,
	0x14B7DE6FD,
	0x14B7E06B3,
	0x14B7E0F97,
	0x14B7E19D9,
	0x14B7E7A48,
	0x14B7E8BC1,
	0x14B7E9741,
	0x14B7EBD12,
	0x14B807B6B,
	0x14B80C398,
	0x14B80C3C1,
	0x14B80F98A,
	0x14B8104BA,
	0x14B81287C,
	0x14B818115,
	0x14B818710,
	0x14B81DFBE,
	0x14B81E350,
	0x14B81F381,
	0x14B825255,
	0x14B829DD8,
	0x14B8754DF,
	0x14B885BE9,
	0x14B885F36,
	0x14B8896FC,
	0x14B88E976,
	0x14B8958FA,
	0x14B8EAF6C,
	0x14B8FEB01,
	0x14B9007C0,
	0x14B95AACD,
	0x14B95E17B,
	0x14B95EC92,
	0x14B960817,
	0x14B9636B4,
	0x14B9696F0,
	0x14B9B4551,
	0x14B9B82BE,
	0x14B9B8F4D,
	0x14B9BB089,
	0x14B9CB1DB,
	0x14B9D5DED,
	0x14B9DB649,
	0x14B9E60CD,
	0x14B9E6C9B,
	0x14B9E9928,
	0x14B9EFD44,
	0x14BA019AD,
	0x14BA01D70,
	0x14BA058BC,
	0x14BA09EC5,
	0x14BA11B00,
	0x14BA17BDC,
	0x14BA196A3,
	0x14BA1988A,
	0x14BA35064,
	0x14BA35B31,
	0x14BA36204,
	0x14BA3F03C,
	0x14BA47016,
	0x14BA4F49B,
	0x14BA50611,
	0x14BA64BB9,
	0x14BA64F6A,
	0x14BA6A610,
	0x14BA6A814,
	0x14BA6C8D3,
	0x14BA72980,
	0x14BA73097,
	0x14BA74956,
	0x14BA7B5F3,
	0x14BA7DE77,
	0x14BA81C1F,
	0x14BA85CC8,
	0x14BA91111,
	0x14BA941CF,
	0x14BA9B7EF,
	0x14BAB13A3,
	0x14BAB660C,
	0x14BAC4E16,
	0x14BAC662B,
	0x14BACCD50,
	0x14BAD3D3B,
	0x14BAD6528,
	0x14BAE6240,
	0x14BAE6C5C,
	0x14BAE782D,
	0x14BAE8DB7,
	0x14BAECE69,
	0x14BAEFD3C,
	0x14BAF3A44,
	0x14BB017BF,
	0x14BB06F08,
	0x14BB18982,
	0x14BB1A7EE,
	0x14BB1B1C7,
	0x14BB1F475,
	0x14BB25D17,
	0x14BB27982,
	0x14BB38329,
	0x14BB3FA72,
	0x14BB43CBB,
	0x14BB46A23,
	0x14BB5391B,
	0x14BB581D4,
	0x14BB5FBBB,
	0x14BB61611,
	0x14BB63931,
	0x14BB700CE,
	0x14BB82A27,
	0x14BB82C0A,
	0x14BB89003,
	0x14BB893CD,
	0x14BC03B2D,
	0x14BC041E8,
	0x14BC05287,
	0x14BC086B4,
	0x14BC15749,
	0x14BC1E58A,
	0x14BC3EC23,
	0x14BC436EF,
	0x14BC48195,
	0x14BC56497,
	0x14BC5755D,
	0x14BC57903,
	0x14BC5A62E,
	0x14BC5C62F,
	0x14BC66A22,
	0x14BCB7AE9,
	0x14BCBF793,
	0x14BCCAD84,
	0x14BCDA738,
	0x14BCEB884,
	0x14BCEF45F,
	0x14BCF3834,
	0x14BD016D1,
	0x14BD057AC,
	0x14BD05859,
	0x14BDB7EB7,
	0x14BDBA1DB,
	0x14BDBBA36,
	0x14BDBE93F,
	0x14BDC19E4,
	0x14BDC3E21,
	0x14BDC7BBF,
	0x14BDCBE79,
	0x14BDCF71D,
	0x14BDD3CBD,
	0x14BDD5AF5,
	0x14BDDAA78,
	0x14BDDB1F5,
	0x14BDE0244,
	0x14BDE6255,
	0x14BDF1556,
	0x14BDF4A3D,
	0x14BDF608A,
	0x14BDFB68F,
	0x14BDFFE41,
	0x14BE07690,
	0x14BE0B269,
	0x14BE0D169,
	0x14BE1193F,
	0x14BE11F1D,
	0x14BE18C23,
	0x14BE24E2A,
	0x14BE2896A,
	0x14BE2A7CF,
	0x14BE2B1CB,
	0x14BE2E4F7,
	0x14BE32D39,
	0x14BE351F2,
	0x14BE60CDD,
	0x14BE63E75,
	0x14BE6EF30,
	0x14BE71DB2,
	0x14BE7AE7A,
	0x14BE7E465,
	0x14BE8024B,
	0x14BE84254,
	0x14BE8D471,
	0x14BE90644,
	0x14BE94ACA,
	0x14BE95A75,
	0x14BEA14E0,
	0x14BEA5728,
	0x14BEA5792,
	0x14BEAAAAF,
	0x14BEAD940,
	0x14BEB407B,
	0x14BEB71BF,
	0x14BEC88F7,
	0x14BECF014,
	0x14BED66AB,
	0x14BEE4E49,
	0x14BEE712B,
	0x14BEE8115,
	0x14BEECA23,
	0x14BEF822E,
	0x14BEFE92E,
	0x14BF032D0,
	0x14BF086A4,
	0x14BF0D790,
	0x14BF1084D,
	0x14BF27B4B,
	0x14BF2BE6F,
	0x14BF2ECCD,
	0x14BF33217,
	0x14BF3C027,
	0x14BF3E0CA,
	0x14BF3F3C5,
	0x14BF40872,
	0x14BF40EA6,
	0x14BF411F3,
	0x14BF51243,
	0x14BF541A5,
	0x14BF58A0A,
	0x14BF5A721,
	0x14BF5F9E0,
	0x14BF7AC17,
	0x14BF7BDBB,
	0x14BF7DBB4,
	0x14BF806B0,
	0x14BF86481,
	0x14BF8B563,
	0x14BF8CE7E,
	0x14BF98757,
	0x14BFA3C60,
	0x14BFAEEBA,
	0x14BFB0E9D,
	0x14BFB59DF,
	0x14BFBDB2F,
	0x14BFBF43D,
	0x14BFC2764,
	0x14BFD674C,
	0x14BFE320E,
	0x14BFE4D2B,
	0x14BFE9D7F,
	0x14C006433,
	0x14C007B55,
	0x14C008A99,
	0x14C0092EC,
	0x14C00943D,
	0x14C00B792,
	0x14C012837,
	0x14C012AC3,
	0x14C01675E,
	0x14C0683E1,
	0x14C06AEED,
	0x14C07BED8,
	0x14C07FE7D,
	0x14C084D2D,
	0x14C088436,
	0x14C09466C,
	0x14C0AE879,
	0x14C0B4C36,
	0x14C0BC243,
	0x14C0C18D6,
	0x14C0CC8FC,
	0x14C0D4EF1,
	0x14C0EC01A,
	0x14C0ED2AD,
	0x14C0EDE92,
	0x14C0EE6A3,
	0x14C0F5DA6,
	0x14C0F654C,
	0x14C1030BF,
	0x14C17320D,
	0x14C177DC3,
	0x14C1850A3,
	0x14C185BA9,
	0x14C186C27,
	0x14C188C99,
	0x14C18CE23,
	0x14C1D51B5,
	0x14C1D6246,
	0x14C1DCB9A,
	0x14C1E3B52,
	0x14C1E9C40,
	0x14C1ED862,
	0x14C1F4B92,
	0x14C1F6575,
	0x14C20357C,
	0x14C20B745,
	0x14C216876,
	0x14C21ACF7,
	0x14C21EF99,
	0x14C2368F0,
	0x14C237C1B,
	0x14C2395B1,
	0x14C23ECD9,
	0x14C23EEEA,
	0x14C24F487,
	0x14C25172C,
	0x14C255A80,
	0x14C25E1BB,
	0x14C25FA75,
	0x14C263109,
	0x14C265E7E,
	0x14C269700,
	0x14C2723B5,
	0x14C275977,
	0x14C279104,
	0x14C27964C,
};
constexpr uint64_t illegal_instructions_split[] =
{
	0x1412522EB,
	0x14B2C77C4,
	0x14B2D62AD,
	0x14B2E71D4,
	0x14B2E7713,
	0x14B2F5C52,
	0x14B35F6C1,
	0x14B361A7F,
	0x14B367251,
	0x14B39AB42,
	0x14B3ACABD,
	0x14B3F7EAF,
	0x14B406441,
	0x14B4196E5,
	0x14B41D19F,
	0x14B4322A5,
	0x14B43ACFB,
	0x14B441015,
	0x14B445DFF,
	0x14B462EFE,
	0x14B47FA01,
	0x14B49BF69,
	0x14B49D7D3,
	0x14B4B31CE,
	0x14B4C8EB8,
	0x14B4CC306,
	0x14B543258,
	0x14B57B9A3,
	0x14B597BED,
	0x14B5A4691,
	0x14B5C07B5,
	0x14B5D51CC,
	0x14B642ADA,
	0x14B651DE6,
	0x14B656F57,
	0x14B68A4D4,
	0x14B6E48EA,
	0x14B73FCF4,
	0x14B747FEC,
	0x14B767C87,
	0x14B76C67B,
	0x14B7718EB,
	0x14B792301,
	0x14B7B8912,
	0x14B7BF5EE,
	0x14B7E6951,
	0x14B7F603C,
	0x14B804F0C,
	0x14B818EE5,
	0x14B86D440,
	0x14B87F411,
	0x14B884B33,
	0x14B8F01F1,
	0x14B90065F,
	0x14B961290,
	0x14B9B1CCE,
	0x14B9C8637,
	0x14B9D5D04,
	0x14BA08255,
	0x14BA1C344,
	0x14BA2C491,
	0x14BA628A5,
	0x14BAA45B9,
	0x14BAAFFC1,
	0x14BAC036C,
	0x14BAC09AB,
	0x14BAC7C55,
	0x14BAD7547,
	0x14BAF3B1E,
	0x14BB692E3,
	0x14BB7AB76,
	0x14BB800A1,
	0x14BC0930A,
	0x14BC34164,
	0x14BC5965F,
	0x14BC6152C,
	0x14BCBD74A,
	0x14BCC4BCB,
	0x14BCC7D79,
	0x14BCC7D8B,
	0x14BCD6F46,
	0x14BCF3B77,
	0x14BCF49BF,
	0x14BD05004,
	0x14BDC7020,
	0x14BDC7C68,
	0x14BDD4DF5,
	0x14BE09E85,
	0x14BE17031,
	0x14BE2C8A7,
	0x14BE530BB,
	0x14BE806DF,
	0x14BE8D36C,
	0x14BEBDBB6,
	0x14BECB9D6,
	0x14BED4F0F,
	0x14BEEC558,
	0x14BEFB5D8,
	0x14BF2FC57,
	0x14BF56768,
	0x14BF58CCA,
	0x14BF7E2ED,
	0x14BF88EC2,
	0x14BFBECE9,
	0x14BFC9530,
	0x14BFCBF54,
	0x14C098550,
	0x14C098F31,
	0x14C0A22BD,
	0x14C0BCDBD,
	0x14C0C80D2,
	0x14C173C79,
	0x14C1D498D,
	0x14C1F19C9,
	0x14C1F3A1F,
	0x14C1F6D2B,
	0x14C1F7093,
	0x14C235640,
	0x14C241065,
	0x14C244C7B,
	0x14C24EDC6,
	0x14C2615B0,
	0x14C262DC0,
	0x14C26EA5A,
};