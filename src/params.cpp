// Copyright 2015 by Jon Dart. All Rights Reserved.
// This is a generated file. Do not edit.
//

const int Scoring::Params::RB_ADJUST[4] = {-182, -17, 125, 187};
const int Scoring::Params::RBN_ADJUST[4] = {-434, -613, -777, -1053};
const int Scoring::Params::QR_ADJUST[4] = {-436, 67, 564, 567};
const int Scoring::Params::KN_VS_PAWN_ADJUST[3] = {-69, -2341, -1436};
const int Scoring::Params::CASTLING[6] = {60, -16, -101, 222, 136, -216};
const int Scoring::Params::KING_COVER[5] = {138, 310, 250, 29, -37};
const int Scoring::Params::KING_COVER_BASE = -293;
const int Scoring::Params::KING_FILE_OPEN = -285;
const int Scoring::Params::KING_DISTANCE_BASIS = 312;
const int Scoring::Params::KING_DISTANCE_MULT = 77;
const int Scoring::Params::PIN_MULTIPLIER_MID = 227;
const int Scoring::Params::PIN_MULTIPLIER_END = 289;
const int Scoring::Params::ROOK_VS_PAWNS = 265;
const int Scoring::Params::KRMINOR_VS_R = -169;
const int Scoring::Params::KRMINOR_VS_R_NO_PAWNS = -569;
const int Scoring::Params::KQMINOR_VS_Q = -42;
const int Scoring::Params::KQMINOR_VS_Q_NO_PAWNS = -169;
const int Scoring::Params::MINOR_FOR_PAWNS = 293;
const int Scoring::Params::ENDGAME_PAWN_ADVANTAGE = 0;
const int Scoring::Params::PAWN_ENDGAME1 = 115;
const int Scoring::Params::PAWN_ENDGAME2 = 53;
const int Scoring::Params::MINOR_ATTACK_FACTOR = 315;
const int Scoring::Params::ROOK_ATTACK_FACTOR = 585;
const int Scoring::Params::QUEEN_ATTACK_FACTOR = 640;
const int Scoring::Params::ROOK_ATTACK_BOOST = 79;
const int Scoring::Params::QUEEN_ATTACK_BOOST = 332;
const int Scoring::Params::QUEEN_ATTACK_BOOST2 = 169;
const int Scoring::Params::KING_ATTACK_PARAM0 = -48;
const int Scoring::Params::KING_ATTACK_PARAM1 = 325;
const int Scoring::Params::KING_ATTACK_PARAM2 = 24;
const int Scoring::Params::KING_ATTACK_PARAM3 = 25;
const int Scoring::Params::KING_ATTACK_BOOST_THRESHOLD = -787;
const int Scoring::Params::KING_ATTACK_BOOST_DIVISOR = 850;
const int Scoring::Params::KING_ATTACK_BOOST_MAX = 128;
const int Scoring::Params::BISHOP_TRAPPED = -1470;
const int Scoring::Params::BISHOP_PAIR_MID = 395;
const int Scoring::Params::BISHOP_PAIR_END = 525;
const int Scoring::Params::BISHOP_PAWN_PLACEMENT_END = -170;
const int Scoring::Params::BAD_BISHOP_MID = -80;
const int Scoring::Params::BAD_BISHOP_END = -120;
const int Scoring::Params::CENTER_PAWN_BLOCK = -127;
const int Scoring::Params::OUTSIDE_PASSER_MID = 34;
const int Scoring::Params::OUTSIDE_PASSER_END = 158;
const int Scoring::Params::WEAK_PAWN_MID = -32;
const int Scoring::Params::WEAK_PAWN_END = -33;
const int Scoring::Params::WEAK_ON_OPEN_FILE_MID = -114;
const int Scoring::Params::WEAK_ON_OPEN_FILE_END = -112;
const int Scoring::Params::SPACE = 49;
const int Scoring::Params::PAWN_CENTER_SCORE_MID = 34;
const int Scoring::Params::ROOK_ON_7TH_MID = 270;
const int Scoring::Params::ROOK_ON_7TH_END = 276;
const int Scoring::Params::TWO_ROOKS_ON_7TH_MID = 270;
const int Scoring::Params::TWO_ROOKS_ON_7TH_END = 293;
const int Scoring::Params::ROOK_ON_OPEN_FILE_MID = 211;
const int Scoring::Params::ROOK_ON_OPEN_FILE_END = 205;
const int Scoring::Params::ROOK_ATTACKS_WEAK_PAWN_MID = 116;
const int Scoring::Params::ROOK_ATTACKS_WEAK_PAWN_END = 163;
const int Scoring::Params::ROOK_BEHIND_PP_MID = 86;
const int Scoring::Params::ROOK_BEHIND_PP_END = 126;
const int Scoring::Params::QUEEN_OUT = -68;
const int Scoring::Params::PAWN_SIDE_BONUS = 257;
const int Scoring::Params::KING_OWN_PAWN_DISTANCE = 6;
const int Scoring::Params::KING_OPP_PAWN_DISTANCE = 119;
const int Scoring::Params::SUPPORTED_PASSER6 = 336;
const int Scoring::Params::SUPPORTED_PASSER7 = 668;
const int Scoring::Params::SIDE_PROTECTED_PAWN = -92;
const int Scoring::Params::KING_OPP_PASSER_DISTANCE[6] = {0, 0, 84, 108, 119, 129};
const int Scoring::Params::KING_POSITION_LOW_MATERIAL[3] ={180, 160, 150};
const int Scoring::Params::KING_ATTACK_SCALE[512] = {0, 0, 1, 2, 3, 3, 4, 5, 6, 6, 7, 8, 9, 9, 10, 11, 12, 12, 13, 14, 15, 15, 16, 17, 18, 18, 19, 20, 21, 21, 22, 23, 24, 24, 25, 26, 27, 27, 28, 29, 30, 30, 31, 32, 33, 33, 34, 35, 36, 36, 37, 38, 39, 39, 40, 41, 42, 42, 43, 44, 45, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 66, 67, 68, 69, 71, 72, 73, 74, 76, 77, 78, 79, 81, 82, 83, 84, 86, 87, 88, 89, 91, 92, 93, 94, 96, 97, 98, 99, 101, 102, 103, 104, 106, 107, 108, 109, 111, 112, 113, 114, 116, 117, 118, 119, 121, 122, 123, 124, 126, 127, 128, 129, 131, 132, 133, 134, 136, 137, 138, 139, 141, 142, 143, 144, 146, 147, 148, 149, 151, 152, 153, 154, 156, 157, 158, 159, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 196, 197, 198, 198, 199, 200, 201, 201, 202, 203, 204, 204, 205, 206, 207, 207, 208, 209, 209, 210, 211, 212, 212, 213, 214, 214, 215, 216, 217, 217, 218, 219, 219, 220, 221, 222, 222, 223, 224, 224, 225, 226, 226, 227, 228, 228, 229, 230, 230, 231, 232, 232, 233, 234, 234, 235, 236, 236, 237, 238, 238, 239, 240, 240, 241, 242, 242, 243, 244, 244, 245, 246, 246, 247, 247, 248, 249, 249, 250, 251, 251, 252, 252, 253, 254, 254, 255, 256, 256, 257, 257, 258, 259, 259, 260, 260, 261, 262, 262, 263, 263, 264, 265, 265, 266, 266, 267, 267, 268, 269, 269, 270, 270, 271, 272, 272, 273, 273, 274, 274, 275, 275, 276, 277, 277, 278, 278, 279, 279, 280, 280, 281, 282, 282, 283, 283, 284, 284, 285, 285, 286, 286, 287, 287, 288, 288, 289, 290, 290, 291, 291, 292, 292, 293, 293, 294, 294, 295, 295, 296, 296, 297, 297, 298, 298, 299, 299, 300, 300, 301, 301, 302, 302, 302, 303, 303, 304, 304, 305, 305, 306, 306, 307, 307, 308, 308, 309, 309, 309, 310, 310, 311, 311, 312, 312, 313, 313, 314, 314, 314, 315, 315, 316, 316, 317, 317, 317, 318, 318, 319, 319, 320, 320, 320, 321, 321, 322, 322, 322, 323, 323, 324, 324, 324, 325, 325, 326, 326, 326, 327, 327, 328, 328, 328, 329, 329, 330, 330, 330, 331, 331, 331, 332, 332, 333, 333, 333, 334, 334, 334, 335, 335, 335, 336, 336, 337, 337, 337, 338, 338, 338, 339, 339, 339, 340, 340, 340, 341, 341, 341, 342, 342, 342, 343, 343, 343, 344, 344, 344, 344, 345, 345, 345, 346, 346, 346, 347, 347, 347, 348, 348, 348, 348, 349, 349, 349, 350, 350, 350, 350, 351, 351, 351, 352, 352, 352, 352, 353, 353, 353, 353, 354, 354, 354, 354, 355, 355, 355, 355};
const int Scoring::Params::TRADE_DOWN[16] = {757, 714, 672, 628, 592, 535, 498, 318, 362, 232, 217, 284, 103, 77, 18, 0};
const int Scoring::Params::PASSED_PAWN[2][8] = {{0, 0, 7, 55, 128, 294, 615, 1164}, {0, 0, 58, 108, 233, 433, 859, 1344}};
const int Scoring::Params::POTENTIAL_PASSER[2][8] = {{0, 0, 0, 0, 14, 35, 289, 0}, {0, 0, 0, 6, 62, 151, 422, 0}};
const int Scoring::Params::CONNECTED_PASSER[2][8] = {{0, 0, 0, 50, 157, 282, 594, 839}, {0, 0, 0, 50, 201, 301, 623, 869}};
const int Scoring::Params::ADJACENT_PASSER[2][8] = {{0, 0, 0, 55, 98, 91, 364, 833}, {0, 0, 0, 60, 104, 135, 291, 733}};
const int Scoring::Params::PP_OWN_PIECE_BLOCK[2][21] = {{-66, -66, -70, -61, -75, -73, -83, -82, -74, -79, -93, -91, 0, -103, -67, -11, -33, -129, -15, -13, -21}, {-14, -77, 0, -62, -39, -93, -108, -121, -113, -136, -123, -64, -66, -80, -76, -108, -112, -119, -152, -158, -317}};
const int Scoring::Params::PP_OPP_PIECE_BLOCK[2][21] = {{-224, -143, -99, -80, -68, -87, -243, -154, -116, -100, -93, -266, -148, -63, -105, -242, -74, -140, -285, -125, -283}, {-199, -179, -118, -82, -136, -162, -206, -153, -189, -91, -195, -222, -117, -123, -118, -258, -148, -141, -234, -216, -282}};
const int Scoring::Params::DOUBLED_PAWNS[2][8] = {{-114, -42, -159, -71, -71, -159, -42, -114}, {-146, -156, -134, -160, -160, -134, -156, -146}};
const int Scoring::Params::TRIPLED_PAWNS[2][8] = {{-4, -65, -96, -232, -232, -96, -65, -4}, {-157, -116, -234, -343, -343, -234, -116, -157}};
const int Scoring::Params::ISOLATED_PAWN[2][8] = {{-29, -26, -95, -146, -146, -95, -26, -29}, {-80, -83, -90, -132, -132, -90, -83, -80}};

const int Scoring::Params::KNIGHT_PST[2][64] = {{-280, -176, -160, -143, -143, -160, -176, -280, -173, -115, -93, -50, -50, -93, -115, -173, -178, -24, -3, 38, 38, -3, -24, -178, -133, 29, 53, 61, 61, 53, 29, -133, -58, 17, 57, 80, 80, 57, 17, -58, -65, -85, 34, 55, 55, 34, -85, -65, -213, -50, 12, 22, 22, 12, -50, -213, -248, -157, -138, -23, -23, -138, -157, -248}, {-293, -250, -217, -203, -203, -217, -250, -293, -186, -146, -111, -99, -99, -111, -146, -186, -153, -111, -81, 6, 6, -81, -111, -153, -138, -87, 35, 42, 42, 35, -87, -138, -136, -62, 35, 43, 43, 35, -62, -136, -130, -7, -19, 35, 35, -19, -7, -130, -190, -123, -104, -3, -3, -104, -123, -190, -235, -192, -137, -139, -139, -137, -192, -235}};
const int Scoring::Params::BISHOP_PST[2][64] = {{-260, -53, -97, -183, -183, -97, -53, -260, -54, 115, -50, 23, 23, -50, 115, -54, -42, 54, 29, 44, 44, 29, 54, -42, -47, -51, 2, 148, 148, 2, -51, -47, -63, 1, 96, 116, 116, 96, 1, -63, 162, 34, 60, 145, 145, 60, 34, 162, -45, -54, -76, -167, -167, -76, -54, -45, -124, -164, -38, -132, -132, -38, -164, -124}, {-117, -90, -52, -14, -14, -52, -90, -117, -62, 10, -24, 22, 22, -24, 10, -62, -47, 53, 85, 110, 110, 85, 53, -47, 3, 22, 137, 148, 148, 137, 22, 3, -10, 39, 68, 112, 112, 68, 39, -10, 57, 59, 63, 66, 66, 63, 59, 57, 10, 39, -18, 30, 30, -18, 39, 10, -13, 12, 48, -10, -10, 48, 12, -13}};
const int Scoring::Params::ROOK_PST[2][64] = {{-53, -51, 38, 48, 48, 38, -51, -53, -62, -56, -56, -38, -38, -56, -56, -62, -57, -58, 18, 32, 32, 18, -58, -57, -66, -52, 33, 31, 31, 33, -52, -66, 49, 59, 58, 62, 62, 58, 59, 49, 60, 62, 61, 61, 61, 61, 62, 60, 42, 40, 51, 37, 37, 51, 40, 42, 46, 66, 60, 39, 39, 60, 66, 46}, {-52, -60, -57, -56, -56, -57, -60, -52, -58, -58, -41, -39, -39, -41, -58, -58, -42, -38, -29, -34, -34, -29, -38, -42, 41, 34, 55, 32, 32, 55, 34, 41, 46, 53, 58, 57, 57, 58, 53, 46, 57, 57, 60, 57, 57, 60, 57, 57, 24, 28, 42, 35, 35, 42, 28, 24, 57, 62, 60, 63, 63, 60, 62, 57}};
const int Scoring::Params::QUEEN_PST[2][64] = {{-23, -37, -47, 31, 31, -47, -37, -23, 38, -25, 49, 43, 43, 49, -25, 38, -52, 8, 46, -50, -50, 46, 8, -52, -47, -44, 20, -11, -11, 20, -44, -47, -53, -13, 21, -17, -17, 21, -13, -53, -58, 3, 55, 54, 54, 55, 3, -58, -40, -59, 47, 9, 9, 47, -59, -40, 69, 69, 65, 69, 69, 65, 69, 69}, {-64, -64, -61, -62, -62, -61, -64, -64, -60, -61, -64, -61, -61, -64, -61, -60, -58, -40, 14, -42, -42, 14, -40, -58, -32, 50, 58, 55, 55, 58, 50, -32, -8, 62, 60, 59, 59, 60, 62, -8, 6, 57, 62, 60, 60, 62, 57, 6, 32, 56, 59, 58, 58, 59, 56, 32, 51, 51, 55, 61, 61, 55, 51, 51}};
const int Scoring::Params::KING_PST[2][64] = {{-54, 53, -60, 57, 57, -60, 53, -54, 18, 58, -53, 57, 57, -53, 58, 18, -67, -27, -32, -7, -7, -32, -27, -67, -303, -328, -308, -334, -334, -308, -328, -303, -309, -432, -429, -439, -439, -429, -432, -309, -292, -315, -429, -325, -325, -429, -315, -292, -291, -292, -292, -430, -430, -292, -292, -291, -291, -291, -423, -291, -291, -423, -291, -291}, {-304, -179, -212, -163, -163, -212, -179, -304, -171, -123, -141, -35, -35, -141, -123, -171, -201, -73, -23, 18, 18, -23, -73, -201, -126, -14, 43, 90, 90, 43, -14, -126, -59, 51, 99, 137, 137, 99, 51, -59, -44, 114, 75, 110, 110, 75, 114, -44, 33, 101, 120, 167, 167, 120, 101, 33, 15, 90, 123, 166, 166, 123, 90, 15}};

const int Scoring::Params::KNIGHT_MOBILITY[9] = {-241, -124, -64, -33, 53, 90, 106, 113, 68};
const int Scoring::Params::BISHOP_MOBILITY[15] = {-231, -144, -108, -54, 23, 64, 99, 125, 95, 135, 65, 80, 31, 129, 21};
const int Scoring::Params::ROOK_MOBILITY[2][15] = {{-247, -151, -69, -70, -38, 32, 94, 133, 154, 179, 206, 233, 243, 283, 304}, {-336, -215, -142, 15, -1, 67, 120, 160, 204, 247, 277, 303, 312, 268, 264}};
const int Scoring::Params::QUEEN_MOBILITY[2][29] = {{-114, -73, -9, -32, 8, 33, 58, 71, 145, 174, 192, 206, 228, 236, 246, 257, 255, 271, 272, 276, 278, 279, 279, 279, 279, 279, 279, 279, 141}, {-188, -120, -72, -36, -6, 29, 68, 89, 111, 117, 202, 236, 272, 294, 307, 312, 308, 319, 311, 310, 310, 256, 287, 193, 316, 198, 194, 192, 191}};
const int Scoring::Params::KING_MOBILITY_ENDGAME[9] = {-248, -148, -78, 3, 53, 18, 62, -30, -39};

const int Scoring::Params::KNIGHT_OUTPOST[3][64] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 102, 102, 82, 0, 0, 0, 0, 0, 114, 114, 0, 0, 0, 0, 0, 64, 63, 63, 64, 0, 0, 0, 0, 0, 56, 56, 0, 0, 0},{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 145, 195, 195, 145, 27, 0, 71, 84, 141, 189, 189, 141, 84, 71, 79, 0, 94, 115, 115, 94, 0, 79, 0, 0, 77, 0, 0, 77, 0, 0},{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 147, 190, 190, 147, 62, 0, 0, 70, 13, 199, 199, 13, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 79, 79, 79, 79, 79, 0}};
const int Scoring::Params::BISHOP_OUTPOST[3][64] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 98, 98, 78, 0, 0, 67, 0, 76, 91, 91, 76, 0, 67, 61, 54, 48, 0, 0, 48, 54, 61, 68, 62, 61, 0, 0, 61, 62, 68},{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 52, 166, 166, 52, 9, 0, 0, 26, 24, 59, 59, 24, 26, 0, 0, 69, 0, 0, 0, 0, 69, 0, 0, 62, 0, 0, 0, 0, 62, 0},{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 36, 66, 66, 36, 98, 0, 0, 0, 1, 164, 164, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 79, 0}};
