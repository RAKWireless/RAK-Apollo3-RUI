# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.c"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3//"
# 1 "<built-in>"
#define __STDC__ 1
#define __STDC_VERSION__ 199901L
#define __STDC_HOSTED__ 1
#define __GNUC__ 10
#define __GNUC_MINOR__ 2
#define __GNUC_PATCHLEVEL__ 1
#define __VERSION__ "10.2.1 20201103 (release)"
#define __ATOMIC_RELAXED 0
#define __ATOMIC_SEQ_CST 5
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_RELEASE 3
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_CONSUME 1
#define __OPTIMIZE_SIZE__ 1
#define __OPTIMIZE__ 1
#define __FINITE_MATH_ONLY__ 0
#define __SIZEOF_INT__ 4
#define __SIZEOF_LONG__ 4
#define __SIZEOF_LONG_LONG__ 8
#define __SIZEOF_SHORT__ 2
#define __SIZEOF_FLOAT__ 4
#define __SIZEOF_DOUBLE__ 8
#define __SIZEOF_LONG_DOUBLE__ 8
#define __SIZEOF_SIZE_T__ 4
#define __CHAR_BIT__ 8
#define __BIGGEST_ALIGNMENT__ 8
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __ORDER_BIG_ENDIAN__ 4321
#define __ORDER_PDP_ENDIAN__ 3412
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __SIZEOF_POINTER__ 4
#define __SIZE_TYPE__ unsigned int
#define __PTRDIFF_TYPE__ int
#define __WCHAR_TYPE__ unsigned int
#define __WINT_TYPE__ unsigned int
#define __INTMAX_TYPE__ long long int
#define __UINTMAX_TYPE__ long long unsigned int
#define __CHAR16_TYPE__ short unsigned int
#define __CHAR32_TYPE__ long unsigned int
#define __SIG_ATOMIC_TYPE__ int
#define __INT8_TYPE__ signed char
#define __INT16_TYPE__ short int
#define __INT32_TYPE__ long int
#define __INT64_TYPE__ long long int
#define __UINT8_TYPE__ unsigned char
#define __UINT16_TYPE__ short unsigned int
#define __UINT32_TYPE__ long unsigned int
#define __UINT64_TYPE__ long long unsigned int
#define __INT_LEAST8_TYPE__ signed char
#define __INT_LEAST16_TYPE__ short int
#define __INT_LEAST32_TYPE__ long int
#define __INT_LEAST64_TYPE__ long long int
#define __UINT_LEAST8_TYPE__ unsigned char
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __UINT_LEAST32_TYPE__ long unsigned int
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __INT_FAST8_TYPE__ int
#define __INT_FAST16_TYPE__ int
#define __INT_FAST32_TYPE__ int
#define __INT_FAST64_TYPE__ long long int
#define __UINT_FAST8_TYPE__ unsigned int
#define __UINT_FAST16_TYPE__ unsigned int
#define __UINT_FAST32_TYPE__ unsigned int
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __INTPTR_TYPE__ int
#define __UINTPTR_TYPE__ unsigned int
#define __GXX_ABI_VERSION 1014
#define __SCHAR_MAX__ 0x7f
#define __SHRT_MAX__ 0x7fff
#define __INT_MAX__ 0x7fffffff
#define __LONG_MAX__ 0x7fffffffL
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __WCHAR_MAX__ 0xffffffffU
#define __WCHAR_MIN__ 0U
#define __WINT_MAX__ 0xffffffffU
#define __WINT_MIN__ 0U
#define __PTRDIFF_MAX__ 0x7fffffff
#define __SIZE_MAX__ 0xffffffffU
#define __SCHAR_WIDTH__ 8
#define __SHRT_WIDTH__ 16
#define __INT_WIDTH__ 32
#define __LONG_WIDTH__ 32
#define __LONG_LONG_WIDTH__ 64
#define __WCHAR_WIDTH__ 32
#define __WINT_WIDTH__ 32
#define __PTRDIFF_WIDTH__ 32
#define __SIZE_WIDTH__ 32
#define __INTMAX_MAX__ 0x7fffffffffffffffLL
#define __INTMAX_C(c) c ## LL
#define __UINTMAX_MAX__ 0xffffffffffffffffULL
#define __UINTMAX_C(c) c ## ULL
#define __INTMAX_WIDTH__ 64
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __SIG_ATOMIC_WIDTH__ 32
#define __INT8_MAX__ 0x7f
#define __INT16_MAX__ 0x7fff
#define __INT32_MAX__ 0x7fffffffL
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __UINT8_MAX__ 0xff
#define __UINT16_MAX__ 0xffff
#define __UINT32_MAX__ 0xffffffffUL
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __INT_LEAST8_MAX__ 0x7f
#define __INT8_C(c) c
#define __INT_LEAST8_WIDTH__ 8
#define __INT_LEAST16_MAX__ 0x7fff
#define __INT16_C(c) c
#define __INT_LEAST16_WIDTH__ 16
#define __INT_LEAST32_MAX__ 0x7fffffffL
#define __INT32_C(c) c ## L
#define __INT_LEAST32_WIDTH__ 32
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __INT64_C(c) c ## LL
#define __INT_LEAST64_WIDTH__ 64
#define __UINT_LEAST8_MAX__ 0xff
#define __UINT8_C(c) c
#define __UINT_LEAST16_MAX__ 0xffff
#define __UINT16_C(c) c
#define __UINT_LEAST32_MAX__ 0xffffffffUL
#define __UINT32_C(c) c ## UL
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define __UINT64_C(c) c ## ULL
#define __INT_FAST8_MAX__ 0x7fffffff
#define __INT_FAST8_WIDTH__ 32
#define __INT_FAST16_MAX__ 0x7fffffff
#define __INT_FAST16_WIDTH__ 32
#define __INT_FAST32_MAX__ 0x7fffffff
#define __INT_FAST32_WIDTH__ 32
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __INT_FAST64_WIDTH__ 64
#define __UINT_FAST8_MAX__ 0xffffffffU
#define __UINT_FAST16_MAX__ 0xffffffffU
#define __UINT_FAST32_MAX__ 0xffffffffU
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __INTPTR_MAX__ 0x7fffffff
#define __INTPTR_WIDTH__ 32
#define __UINTPTR_MAX__ 0xffffffffU
#define __GCC_IEC_559 0
#define __GCC_IEC_559_COMPLEX 0
#define __FLT_EVAL_METHOD__ 0
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __DEC_EVAL_METHOD__ 2
#define __FLT_RADIX__ 2
#define __FLT_MANT_DIG__ 24
#define __FLT_DIG__ 6
#define __FLT_MIN_EXP__ (-125)
#define __FLT_MIN_10_EXP__ (-37)
#define __FLT_MAX_EXP__ 128
#define __FLT_MAX_10_EXP__ 38
#define __FLT_DECIMAL_DIG__ 9
#define __FLT_MAX__ 3.4028234663852886e+38F
#define __FLT_NORM_MAX__ 3.4028234663852886e+38F
#define __FLT_MIN__ 1.1754943508222875e-38F
#define __FLT_EPSILON__ 1.1920928955078125e-7F
#define __FLT_DENORM_MIN__ 1.4012984643248171e-45F
#define __FLT_HAS_DENORM__ 1
#define __FLT_HAS_INFINITY__ 1
#define __FLT_HAS_QUIET_NAN__ 1
#define __FP_FAST_FMAF 1
#define __DBL_MANT_DIG__ 53
#define __DBL_DIG__ 15
#define __DBL_MIN_EXP__ (-1021)
#define __DBL_MIN_10_EXP__ (-307)
#define __DBL_MAX_EXP__ 1024
#define __DBL_MAX_10_EXP__ 308
#define __DBL_DECIMAL_DIG__ 17
#define __DBL_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_NORM_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_MIN__ ((double)2.2250738585072014e-308L)
#define __DBL_EPSILON__ ((double)2.2204460492503131e-16L)
#define __DBL_DENORM_MIN__ ((double)4.9406564584124654e-324L)
#define __DBL_HAS_DENORM__ 1
#define __DBL_HAS_INFINITY__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __LDBL_MANT_DIG__ 53
#define __LDBL_DIG__ 15
#define __LDBL_MIN_EXP__ (-1021)
#define __LDBL_MIN_10_EXP__ (-307)
#define __LDBL_MAX_EXP__ 1024
#define __LDBL_MAX_10_EXP__ 308
#define __DECIMAL_DIG__ 17
#define __LDBL_DECIMAL_DIG__ 17
#define __LDBL_MAX__ 1.7976931348623157e+308L
#define __LDBL_NORM_MAX__ 1.7976931348623157e+308L
#define __LDBL_MIN__ 2.2250738585072014e-308L
#define __LDBL_EPSILON__ 2.2204460492503131e-16L
#define __LDBL_DENORM_MIN__ 4.9406564584124654e-324L
#define __LDBL_HAS_DENORM__ 1
#define __LDBL_HAS_INFINITY__ 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define __FLT32_MANT_DIG__ 24
#define __FLT32_DIG__ 6
#define __FLT32_MIN_EXP__ (-125)
#define __FLT32_MIN_10_EXP__ (-37)
#define __FLT32_MAX_EXP__ 128
#define __FLT32_MAX_10_EXP__ 38
#define __FLT32_DECIMAL_DIG__ 9
#define __FLT32_MAX__ 3.4028234663852886e+38F32
#define __FLT32_NORM_MAX__ 3.4028234663852886e+38F32
#define __FLT32_MIN__ 1.1754943508222875e-38F32
#define __FLT32_EPSILON__ 1.1920928955078125e-7F32
#define __FLT32_DENORM_MIN__ 1.4012984643248171e-45F32
#define __FLT32_HAS_DENORM__ 1
#define __FLT32_HAS_INFINITY__ 1
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FP_FAST_FMAF32 1
#define __FLT64_MANT_DIG__ 53
#define __FLT64_DIG__ 15
#define __FLT64_MIN_EXP__ (-1021)
#define __FLT64_MIN_10_EXP__ (-307)
#define __FLT64_MAX_EXP__ 1024
#define __FLT64_MAX_10_EXP__ 308
#define __FLT64_DECIMAL_DIG__ 17
#define __FLT64_MAX__ 1.7976931348623157e+308F64
#define __FLT64_NORM_MAX__ 1.7976931348623157e+308F64
#define __FLT64_MIN__ 2.2250738585072014e-308F64
#define __FLT64_EPSILON__ 2.2204460492503131e-16F64
#define __FLT64_DENORM_MIN__ 4.9406564584124654e-324F64
#define __FLT64_HAS_DENORM__ 1
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define __FLT32X_MANT_DIG__ 53
#define __FLT32X_DIG__ 15
#define __FLT32X_MIN_EXP__ (-1021)
#define __FLT32X_MIN_10_EXP__ (-307)
#define __FLT32X_MAX_EXP__ 1024
#define __FLT32X_MAX_10_EXP__ 308
#define __FLT32X_DECIMAL_DIG__ 17
#define __FLT32X_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_NORM_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_MIN__ 2.2250738585072014e-308F32x
#define __FLT32X_EPSILON__ 2.2204460492503131e-16F32x
#define __FLT32X_DENORM_MIN__ 4.9406564584124654e-324F32x
#define __FLT32X_HAS_DENORM__ 1
#define __FLT32X_HAS_INFINITY__ 1
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __SFRACT_FBIT__ 7
#define __SFRACT_IBIT__ 0
#define __SFRACT_MIN__ (-0.5HR-0.5HR)
#define __SFRACT_MAX__ 0X7FP-7HR
#define __SFRACT_EPSILON__ 0x1P-7HR
#define __USFRACT_FBIT__ 8
#define __USFRACT_IBIT__ 0
#define __USFRACT_MIN__ 0.0UHR
#define __USFRACT_MAX__ 0XFFP-8UHR
#define __USFRACT_EPSILON__ 0x1P-8UHR
#define __FRACT_FBIT__ 15
#define __FRACT_IBIT__ 0
#define __FRACT_MIN__ (-0.5R-0.5R)
#define __FRACT_MAX__ 0X7FFFP-15R
#define __FRACT_EPSILON__ 0x1P-15R
#define __UFRACT_FBIT__ 16
#define __UFRACT_IBIT__ 0
#define __UFRACT_MIN__ 0.0UR
#define __UFRACT_MAX__ 0XFFFFP-16UR
#define __UFRACT_EPSILON__ 0x1P-16UR
#define __LFRACT_FBIT__ 31
#define __LFRACT_IBIT__ 0
#define __LFRACT_MIN__ (-0.5LR-0.5LR)
#define __LFRACT_MAX__ 0X7FFFFFFFP-31LR
#define __LFRACT_EPSILON__ 0x1P-31LR
#define __ULFRACT_FBIT__ 32
#define __ULFRACT_IBIT__ 0
#define __ULFRACT_MIN__ 0.0ULR
#define __ULFRACT_MAX__ 0XFFFFFFFFP-32ULR
#define __ULFRACT_EPSILON__ 0x1P-32ULR
#define __LLFRACT_FBIT__ 63
#define __LLFRACT_IBIT__ 0
#define __LLFRACT_MIN__ (-0.5LLR-0.5LLR)
#define __LLFRACT_MAX__ 0X7FFFFFFFFFFFFFFFP-63LLR
#define __LLFRACT_EPSILON__ 0x1P-63LLR
#define __ULLFRACT_FBIT__ 64
#define __ULLFRACT_IBIT__ 0
#define __ULLFRACT_MIN__ 0.0ULLR
#define __ULLFRACT_MAX__ 0XFFFFFFFFFFFFFFFFP-64ULLR
#define __ULLFRACT_EPSILON__ 0x1P-64ULLR
#define __SACCUM_FBIT__ 7
#define __SACCUM_IBIT__ 8
#define __SACCUM_MIN__ (-0X1P7HK-0X1P7HK)
#define __SACCUM_MAX__ 0X7FFFP-7HK
#define __SACCUM_EPSILON__ 0x1P-7HK
#define __USACCUM_FBIT__ 8
#define __USACCUM_IBIT__ 8
#define __USACCUM_MIN__ 0.0UHK
#define __USACCUM_MAX__ 0XFFFFP-8UHK
#define __USACCUM_EPSILON__ 0x1P-8UHK
#define __ACCUM_FBIT__ 15
#define __ACCUM_IBIT__ 16
#define __ACCUM_MIN__ (-0X1P15K-0X1P15K)
#define __ACCUM_MAX__ 0X7FFFFFFFP-15K
#define __ACCUM_EPSILON__ 0x1P-15K
#define __UACCUM_FBIT__ 16
#define __UACCUM_IBIT__ 16
#define __UACCUM_MIN__ 0.0UK
#define __UACCUM_MAX__ 0XFFFFFFFFP-16UK
#define __UACCUM_EPSILON__ 0x1P-16UK
#define __LACCUM_FBIT__ 31
#define __LACCUM_IBIT__ 32
#define __LACCUM_MIN__ (-0X1P31LK-0X1P31LK)
#define __LACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LK
#define __LACCUM_EPSILON__ 0x1P-31LK
#define __ULACCUM_FBIT__ 32
#define __ULACCUM_IBIT__ 32
#define __ULACCUM_MIN__ 0.0ULK
#define __ULACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULK
#define __ULACCUM_EPSILON__ 0x1P-32ULK
#define __LLACCUM_FBIT__ 31
#define __LLACCUM_IBIT__ 32
#define __LLACCUM_MIN__ (-0X1P31LLK-0X1P31LLK)
#define __LLACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LLK
#define __LLACCUM_EPSILON__ 0x1P-31LLK
#define __ULLACCUM_FBIT__ 32
#define __ULLACCUM_IBIT__ 32
#define __ULLACCUM_MIN__ 0.0ULLK
#define __ULLACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULLK
#define __ULLACCUM_EPSILON__ 0x1P-32ULLK
#define __QQ_FBIT__ 7
#define __QQ_IBIT__ 0
#define __HQ_FBIT__ 15
#define __HQ_IBIT__ 0
#define __SQ_FBIT__ 31
#define __SQ_IBIT__ 0
#define __DQ_FBIT__ 63
#define __DQ_IBIT__ 0
#define __TQ_FBIT__ 127
#define __TQ_IBIT__ 0
#define __UQQ_FBIT__ 8
#define __UQQ_IBIT__ 0
#define __UHQ_FBIT__ 16
#define __UHQ_IBIT__ 0
#define __USQ_FBIT__ 32
#define __USQ_IBIT__ 0
#define __UDQ_FBIT__ 64
#define __UDQ_IBIT__ 0
#define __UTQ_FBIT__ 128
#define __UTQ_IBIT__ 0
#define __HA_FBIT__ 7
#define __HA_IBIT__ 8
#define __SA_FBIT__ 15
#define __SA_IBIT__ 16
#define __DA_FBIT__ 31
#define __DA_IBIT__ 32
#define __TA_FBIT__ 63
#define __TA_IBIT__ 64
#define __UHA_FBIT__ 8
#define __UHA_IBIT__ 8
#define __USA_FBIT__ 16
#define __USA_IBIT__ 16
#define __UDA_FBIT__ 32
#define __UDA_IBIT__ 32
#define __UTA_FBIT__ 64
#define __UTA_IBIT__ 64
#define __REGISTER_PREFIX__ 
#define __USER_LABEL_PREFIX__ 
#define __GNUC_STDC_INLINE__ 1
#define __STRICT_ANSI__ 1
#define __CHAR_UNSIGNED__ 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __SIZEOF_WCHAR_T__ 4
#define __SIZEOF_WINT_T__ 4
#define __SIZEOF_PTRDIFF_T__ 4
#define __ARM_FEATURE_DSP 1
#define __ARM_FEATURE_QBIT 1
#define __ARM_FEATURE_SAT 1
#undef __ARM_FEATURE_CRYPTO
# 1 "<built-in>"
#define __ARM_FEATURE_UNALIGNED 1
#undef __ARM_FEATURE_QRDMX
# 1 "<built-in>"
#undef __ARM_FEATURE_CRC32
# 1 "<built-in>"
#undef __ARM_FEATURE_DOTPROD
# 1 "<built-in>"
#undef __ARM_FEATURE_COMPLEX
# 1 "<built-in>"
#define __ARM_32BIT_STATE 1
#undef __ARM_FEATURE_MVE
# 1 "<built-in>"
#undef __ARM_FEATURE_CMSE
# 1 "<built-in>"
#undef __ARM_FEATURE_LDREX
# 1 "<built-in>"
#define __ARM_FEATURE_LDREX 7
#define __ARM_FEATURE_CLZ 1
#undef __ARM_FEATURE_NUMERIC_MAXMIN
# 1 "<built-in>"
#define __ARM_FEATURE_SIMD32 1
#define __ARM_SIZEOF_MINIMAL_ENUM 1
#define __ARM_SIZEOF_WCHAR_T 4
#undef __ARM_ARCH_PROFILE
# 1 "<built-in>"
#define __ARM_ARCH_PROFILE 77
#define __arm__ 1
#undef __ARM_ARCH
# 1 "<built-in>"
#define __ARM_ARCH 7
#define __APCS_32__ 1
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __thumb__ 1
#define __thumb2__ 1
#define __THUMBEL__ 1
#undef __ARM_ARCH_ISA_THUMB
# 1 "<built-in>"
#define __ARM_ARCH_ISA_THUMB 2
#define __ARMEL__ 1
#define __VFP_FP__ 1
#undef __ARM_FP
# 1 "<built-in>"
#define __ARM_FP 4
#undef __ARM_FP16_FORMAT_IEEE
# 1 "<built-in>"
#undef __ARM_FP16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#undef __ARM_FP16_ARGS
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_FML
# 1 "<built-in>"
#define __ARM_FEATURE_FMA 1
#undef __ARM_NEON__
# 1 "<built-in>"
#undef __ARM_NEON
# 1 "<built-in>"
#undef __ARM_NEON_FP
# 1 "<built-in>"
#define __THUMB_INTERWORK__ 1
#define __ARM_ARCH_7EM__ 1
#define __ARM_PCS_VFP 1
#define __ARM_EABI__ 1
#undef __FDPIC__
# 1 "<built-in>"
#define __ARM_ARCH_EXT_IDIV__ 1
#define __ARM_FEATURE_IDIV 1
#define __ARM_ASM_SYNTAX_UNIFIED__ 1
#undef __ARM_FEATURE_COPROC
# 1 "<built-in>"
#define __ARM_FEATURE_COPROC 15
#undef __ARM_FEATURE_CDE
# 1 "<built-in>"
#undef __ARM_FEATURE_CDE_COPROC
# 1 "<built-in>"
#undef __ARM_FEATURE_MATMUL_INT8
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_BF16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#define __GXX_TYPEINFO_EQUALITY_INLINE 0
#define __ELF__ 1
# 1 "<command-line>"
#define __USES_INITFINI__ 1
#define apollo3 1
#define SUPPORT_LORA 1
#define SUPPORT_LORA_P2P 1
#define LORA_IO_SPI_PORT 1
#define SYS_RTC_COUNTER_PORT 2
#define ATCMD_CUST_TABLE_SIZE 64
#define WAN_TYPE 0
#define RAK11720 +RAK5005-O_V1.0 1
#define rak11720 1
#define gcc 1
#define PART_APOLLO3 1
#define AM_PACKAGE_BGA 1
#define AM_PART_APOLLO3 1
#define AM_FREERTOS 1
#define AM_FREERTOS_STIMER_BACKUP 1
#define AM_BLE_USE_NVM 1
#define AM_CUSTOM_BDADDR 1
#define AM_NUS_ADD 1
#define AM_CUS_ADD 1
#define AM_AMOTA_ADD 1
#define AM_UTIL_FAULTISR_PRINT 1
#define SEC_ECC_CFG SEC_ECC_CFG_HCI
#define RTT_LOG_ENABLED 1
#define DEBUG_ENABLED 1
#define rak11720 1
#define SYS_RTC_COUNTER_PORT 2
#define TWI0_ENABLED 1
#define SPI0_ENABLED 1
#define SPI1_ENABLED 1
#define BLE_SUPPORT 1
#define ATCMD_CUST_TABLE_SIZE 64
#define WISBLOCK_BASE_5005_O 1
#define SX1262_CHIP 1
#define REGION_AS923 1
#define REGION_AU915 1
#define REGION_CN470 1
#define REGION_CN779 1
#define REGION_EU433 1
#define REGION_EU868 1
#define REGION_KR920 1
#define REGION_IN865 1
#define REGION_US915 1
#define REGION_RU864 1
#define REGION_LA915 1
#define SOFT_SE 1
#define SECURE_ELEMENT_PRE_PROVISIONED 1
#define LORAMAC_CLASSB_ENABLED 1
#define BLE_CENTRAL_SUPPORT 1
#define WISBLOCK_BASE_5005_O 1
#define SUPPORT_BLE 1
#define SUPPORT_SPI 1
#define SUPPORT_AT 1
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.c"
# 21 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.c"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.h"
#define __LORAMAC_PARSER_H__ 






# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 1 3 4
# 9 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define _STDINT_H 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 1 3 4





#define _MACHINE__DEFAULT_TYPES_H 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 1 3 4
# 22 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define _SYS_FEATURES_H 





# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_newlib_version.h" 1 3 4



#define _NEWLIB_VERSION_H__ 1

#define _NEWLIB_VERSION "3.3.0"
#define __NEWLIB__ 3
#define __NEWLIB_MINOR__ 3
#define __NEWLIB_PATCHLEVEL__ 0
# 29 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 2 3 4




#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))






#define __GNUC_PREREQ__(ma,mi) __GNUC_PREREQ(ma, mi)
# 249 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __ATFILE_VISIBLE 0





#define __BSD_VISIBLE 0





#define __GNU_VISIBLE 0







#define __ISO_C_VISIBLE 1999







#define __LARGEFILE_VISIBLE 0





#define __MISC_VISIBLE 0
# 299 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __POSIX_VISIBLE 0





#define __SVID_VISIBLE 0
# 319 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __XSI_VISIBLE 0
# 330 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __SSP_FORTIFY_LEVEL 0
# 9 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 2 3 4






#define __EXP(x) __ ##x ##__
# 26 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
#define __have_longlong64 1






#define __have_long32 1








# 41 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;



#define ___int8_t_defined 1







typedef short int __int16_t;

typedef short unsigned int __uint16_t;



#define ___int16_t_defined 1
# 77 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;



#define ___int32_t_defined 1
# 103 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;



#define ___int64_t_defined 1
# 134 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;



#define ___int_least8_t_defined 1
# 160 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;



#define ___int_least16_t_defined 1
# 182 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;



#define ___int_least32_t_defined 1
# 200 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;



#define ___int_least64_t_defined 1







typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 244 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
#undef __EXP
# 13 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _SYS__INTSUP_H 





#define __STDINT_EXP(x) __ ##x ##__
# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
       
#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef __int20
#undef __int20__
#undef long
#define signed +0
#define unsigned +0
#define char +0
#define short +1
#define __int20 +2
#define __int20__ +2
#define int +2
#define long +4
# 67 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _INTPTR_EQ_INT 






#define _INT32_EQ_LONG 







#define __INT8 "hh"
# 93 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT16 "h"
# 104 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT32 "l"
# 113 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT64 "ll"






#define __FAST8 
# 129 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST16 






#define __FAST32 
# 147 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST64 "ll"



#define __LEAST8 "hh"
# 162 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST16 "h"
# 173 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST32 "l"
# 182 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST64 "ll"

#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef long
       
       
       
       
       
# 194 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20
       
# 195 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20__
       
       
# 14 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 3 4
#define _SYS__STDINT_H 
# 20 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;
#define _INT8_T_DECLARED 


typedef __uint8_t uint8_t ;
#define _UINT8_T_DECLARED 

#define __int8_t_defined 1




typedef __int16_t int16_t ;
#define _INT16_T_DECLARED 


typedef __uint16_t uint16_t ;
#define _UINT16_T_DECLARED 

#define __int16_t_defined 1




typedef __int32_t int32_t ;
#define _INT32_T_DECLARED 


typedef __uint32_t uint32_t ;
#define _UINT32_T_DECLARED 

#define __int32_t_defined 1




typedef __int64_t int64_t ;
#define _INT64_T_DECLARED 


typedef __uint64_t uint64_t ;
#define _UINT64_T_DECLARED 

#define __int64_t_defined 1



typedef __intmax_t intmax_t;
#define _INTMAX_T_DECLARED 



typedef __uintmax_t uintmax_t;
#define _UINTMAX_T_DECLARED 



typedef __intptr_t intptr_t;
#define _INTPTR_T_DECLARED 



typedef __uintptr_t uintptr_t;
#define _UINTPTR_T_DECLARED 
# 15 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;
#define __int_least8_t_defined 1



typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;
#define __int_least16_t_defined 1



typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;
#define __int_least32_t_defined 1



typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
#define __int_least64_t_defined 1
# 51 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
#define __int_fast8_t_defined 1







  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
#define __int_fast16_t_defined 1







  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
#define __int_fast32_t_defined 1







  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
#define __int_fast64_t_defined 1
# 128 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTPTR_MIN (-__INTPTR_MAX__ - 1)
#define INTPTR_MAX (__INTPTR_MAX__)
#define UINTPTR_MAX (__UINTPTR_MAX__)
# 152 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT8_MIN (-__INT8_MAX__ - 1)
#define INT8_MAX (__INT8_MAX__)
#define UINT8_MAX (__UINT8_MAX__)







#define INT_LEAST8_MIN (-__INT_LEAST8_MAX__ - 1)
#define INT_LEAST8_MAX (__INT_LEAST8_MAX__)
#define UINT_LEAST8_MAX (__UINT_LEAST8_MAX__)
# 174 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT16_MIN (-__INT16_MAX__ - 1)
#define INT16_MAX (__INT16_MAX__)
#define UINT16_MAX (__UINT16_MAX__)







#define INT_LEAST16_MIN (-__INT_LEAST16_MAX__ - 1)
#define INT_LEAST16_MAX (__INT_LEAST16_MAX__)
#define UINT_LEAST16_MAX (__UINT_LEAST16_MAX__)
# 196 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT32_MIN (-__INT32_MAX__ - 1)
#define INT32_MAX (__INT32_MAX__)
#define UINT32_MAX (__UINT32_MAX__)
# 212 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST32_MIN (-__INT_LEAST32_MAX__ - 1)
#define INT_LEAST32_MAX (__INT_LEAST32_MAX__)
#define UINT_LEAST32_MAX (__UINT_LEAST32_MAX__)
# 230 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT64_MIN (-__INT64_MAX__ - 1)
#define INT64_MAX (__INT64_MAX__)
#define UINT64_MAX (__UINT64_MAX__)
# 246 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST64_MIN (-__INT_LEAST64_MAX__ - 1)
#define INT_LEAST64_MAX (__INT_LEAST64_MAX__)
#define UINT_LEAST64_MAX (__UINT_LEAST64_MAX__)
# 262 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST8_MIN (-__INT_FAST8_MAX__ - 1)
#define INT_FAST8_MAX (__INT_FAST8_MAX__)
#define UINT_FAST8_MAX (__UINT_FAST8_MAX__)
# 278 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST16_MIN (-__INT_FAST16_MAX__ - 1)
#define INT_FAST16_MAX (__INT_FAST16_MAX__)
#define UINT_FAST16_MAX (__UINT_FAST16_MAX__)
# 294 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST32_MIN (-__INT_FAST32_MAX__ - 1)
#define INT_FAST32_MAX (__INT_FAST32_MAX__)
#define UINT_FAST32_MAX (__UINT_FAST32_MAX__)
# 310 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST64_MIN (-__INT_FAST64_MAX__ - 1)
#define INT_FAST64_MAX (__INT_FAST64_MAX__)
#define UINT_FAST64_MAX (__UINT_FAST64_MAX__)
# 326 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_MAX (__INTMAX_MAX__)
#define INTMAX_MIN (-INTMAX_MAX - 1)







#define UINTMAX_MAX (__UINTMAX_MAX__)







#define SIZE_MAX (__SIZE_MAX__)





#define SIG_ATOMIC_MIN (-__STDINT_EXP(INT_MAX) - 1)
#define SIG_ATOMIC_MAX (__STDINT_EXP(INT_MAX))



#define PTRDIFF_MAX (__PTRDIFF_MAX__)



#define PTRDIFF_MIN (-PTRDIFF_MAX - 1)




#define WCHAR_MIN (__WCHAR_MIN__)
# 374 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define WCHAR_MAX (__WCHAR_MAX__)
# 384 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define WINT_MAX (__WINT_MAX__)




#define WINT_MIN (__WINT_MIN__)






#define INT8_C(x) __INT8_C(x)
#define UINT8_C(x) __UINT8_C(x)
# 408 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT16_C(x) __INT16_C(x)
#define UINT16_C(x) __UINT16_C(x)
# 420 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT32_C(x) __INT32_C(x)
#define UINT32_C(x) __UINT32_C(x)
# 433 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT64_C(x) __INT64_C(x)
#define UINT64_C(x) __UINT64_C(x)
# 449 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_C(x) __INTMAX_C(x)
#define UINTMAX_C(x) __UINTMAX_C(x)
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 2 3 4



#define _GCC_WRAP_STDINT_H 
# 46 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacMessageTypes.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacMessageTypes.h"
#define __LORAMAC_MESSAGE_TYPES_H__ 







# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define __LORAMAC_HEADER_TYPES_H__ 
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_MHDR_FIELD_SIZE 1


#define LORAMAC_JOIN_TYPE_FIELD_SIZE 1


#define LORAMAC_JOIN_EUI_FIELD_SIZE 8


#define LORAMAC_DEV_EUI_FIELD_SIZE 8


#define LORAMAC_DEV_NONCE_FIELD_SIZE 2


#define LORAMAC_JOIN_NONCE_FIELD_SIZE 3


#define LORAMAC_RJCOUNT_0_FIELD_SIZE 2


#define LORAMAC_RJCOUNT_1_FIELD_SIZE 2


#define LORAMAC_NET_ID_FIELD_SIZE 3


#define LORAMAC_DEV_ADDR_FIELD_SIZE 4


#define LORAMAC_DL_SETTINGS_FIELD_SIZE 1


#define LORAMAC_RX_DELAY_FIELD_SIZE 1


#define LORAMAC_CF_LIST_FIELD_SIZE 16


#define LORAMAC_FHDR_DEV_ADDR_FIELD_SIZE LORAMAC_DEV_ADDR_FIELD_SIZE


#define LORAMAC_FHDR_F_CTRL_FIELD_SIZE 1


#define LORAMAC_FHDR_F_CNT_FIELD_SIZE 2


#define LORAMAC_FHDR_F_OPTS_MAX_FIELD_SIZE 15


#define LORAMAC_F_PORT_FIELD_SIZE 1


#define LORAMAC_MAC_PAYLOAD_FIELD_MAX_SIZE 242


#define LORAMAC_MIC_FIELD_SIZE 4






#define LORAMAC_JOIN_REQ_MSG_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_EUI_FIELD_SIZE + LORAMAC_DEV_EUI_FIELD_SIZE + LORAMAC_DEV_NONCE_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 121 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_RE_JOIN_1_MSG_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_TYPE_FIELD_SIZE + LORAMAC_JOIN_EUI_FIELD_SIZE + LORAMAC_DEV_EUI_FIELD_SIZE + LORAMAC_RJCOUNT_1_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 131 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_RE_JOIN_0_2_MSG_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_TYPE_FIELD_SIZE + LORAMAC_NET_ID_FIELD_SIZE + LORAMAC_DEV_EUI_FIELD_SIZE + LORAMAC_RJCOUNT_0_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 141 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_JOIN_ACCEPT_FRAME_MIN_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_NONCE_FIELD_SIZE + LORAMAC_NET_ID_FIELD_SIZE + LORAMAC_DEV_ADDR_FIELD_SIZE + LORAMAC_DL_SETTINGS_FIELD_SIZE + LORAMAC_RX_DELAY_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 151 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_JOIN_ACCEPT_FRAME_MAX_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_NONCE_FIELD_SIZE + LORAMAC_NET_ID_FIELD_SIZE + LORAMAC_DEV_ADDR_FIELD_SIZE + LORAMAC_DL_SETTINGS_FIELD_SIZE + LORAMAC_RX_DELAY_FIELD_SIZE + LORAMAC_CF_LIST_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 160 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define JOIN_ACCEPT_MIC_COMPUTATION_OFFSET ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_TYPE_FIELD_SIZE + LORAMAC_JOIN_EUI_FIELD_SIZE + LORAMAC_DEV_NONCE_FIELD_SIZE )
# 173 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_FRAME_PAYLOAD_OVERHEAD_SIZE ( LORAMAC_MHDR_FIELD_SIZE + ( LORAMAC_FHDR_DEV_ADDR_FIELD_SIZE + LORAMAC_FHDR_F_CTRL_FIELD_SIZE + LORAMAC_FHDR_F_CNT_FIELD_SIZE ) + LORAMAC_F_PORT_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 182 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_FRAME_PAYLOAD_MIN_SIZE ( LORAMAC_MHDR_FIELD_SIZE + ( LORAMAC_FHDR_DEV_ADDR_FIELD_SIZE + LORAMAC_FHDR_F_CTRL_FIELD_SIZE + LORAMAC_FHDR_F_CNT_FIELD_SIZE ) + LORAMAC_MIC_FIELD_SIZE )







#define LORAMAC_FRAME_PAYLOAD_MAX_SIZE ( LORAMAC_MHDR_FIELD_SIZE + ( LORAMAC_FHDR_DEV_ADDR_FIELD_SIZE + LORAMAC_FHDR_F_CTRL_FIELD_SIZE + LORAMAC_FHDR_F_CNT_FIELD_SIZE ) + LORAMAC_F_PORT_FIELD_SIZE + LORAMAC_MAC_PAYLOAD_FIELD_MAX_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 200 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"

# 200 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
typedef union uLoRaMacDLSettings
{



    uint8_t Value;



    struct sDLSettingsBits
    {



        uint8_t RX2DataRate : 4;



        uint8_t RX1DRoffset : 3;



        uint8_t OptNeg : 1;
    }Bits;
}LoRaMacDLSettings_t;






typedef union uLoRaMacHeader
{



    uint8_t Value;



    struct sMacHeaderBits
    {



        uint8_t Major : 2;



        uint8_t RFU : 3;



        uint8_t MType : 3;
    }Bits;
}LoRaMacHeader_t;






typedef union uLoRaMacFrameCtrl
{



    uint8_t Value;



    struct sCtrlBits
    {



        uint8_t FOptsLen : 4;



        uint8_t FPending : 1;



        uint8_t Ack : 1;



        uint8_t AdrAckReq : 1;



        uint8_t Adr : 1;
    }Bits;
}LoRaMacFrameCtrl_t;






typedef struct sLoRaMacFrameHeader
{



    uint32_t DevAddr;



    LoRaMacFrameCtrl_t FCtrl;



    uint16_t FCnt;



    uint8_t FOpts[15];
}LoRaMacFrameHeader_t;
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacMessageTypes.h" 2




typedef struct sLoRaMacMessageJoinRequest
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    uint8_t JoinEUI[8];



    uint8_t DevEUI[8];



    uint16_t DevNonce;



    uint32_t MIC;
}LoRaMacMessageJoinRequest_t;




typedef struct sLoRaMacMessageReJoinType1
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    uint8_t ReJoinType;



    uint8_t JoinEUI[8];



    uint8_t DevEUI[8];



    uint16_t RJcount1;



    uint32_t MIC;
}LoRaMacMessageReJoinType1_t;




typedef struct sLoRaMacMessageReJoinType0or2
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    uint8_t ReJoinType;



    uint8_t NetID[3];



    uint8_t DevEUI[8];



    uint16_t RJcount0;



    uint32_t MIC;
}LoRaMacMessageReJoinType0or2_t;




typedef struct sLoRaMacMessageJoinAccept
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    uint8_t JoinNonce[3];



    uint8_t NetID[3];



    uint32_t DevAddr;



    LoRaMacDLSettings_t DLSettings;



    uint8_t RxDelay;



    uint8_t CFList[16];



    uint32_t MIC;
}LoRaMacMessageJoinAccept_t;






typedef struct sLoRaMacMessageData
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    LoRaMacFrameHeader_t FHDR;



    uint8_t FPort;



    uint8_t* FRMPayload;



    uint8_t FRMPayloadSize;



    uint32_t MIC;
}LoRaMacMessageData_t;




typedef enum eLoRaMacMessageType
{



    LORAMAC_MSG_TYPE_JOIN_REQUEST,



    LORAMAC_MSG_TYPE_RE_JOIN_1,



    LORAMAC_MSG_TYPE_RE_JOIN_0_2,



    LORAMAC_MSG_TYPE_JOIN_ACCEPT,



    LORAMAC_MSG_TYPE_DATA,



    LORAMAC_MSG_TYPE_UNDEF,
}LoRaMacMessageType_t;




typedef struct sLoRaMacMessage
{
    LoRaMacMessageType_t Type;
    union uMessage
    {
        LoRaMacMessageJoinRequest_t JoinReq;
        LoRaMacMessageReJoinType1_t ReJoin1;
        LoRaMacMessageReJoinType0or2_t ReJoin0or2;
        LoRaMacMessageJoinAccept_t JoinAccept;
        LoRaMacMessageData_t Data;
    }Message;
}LoRaMacMessage_t;
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.h" 2




typedef enum eLoRaMacParserStatus
{



    LORAMAC_PARSER_SUCCESS = 0,



    LORAMAC_PARSER_FAIL,



    LORAMAC_PARSER_ERROR_NPE,



    LORAMAC_PARSER_ERROR,
}LoRaMacParserStatus_t;
# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.h"
LoRaMacParserStatus_t LoRaMacParserJoinAccept( LoRaMacMessageJoinAccept_t *macMsg );







LoRaMacParserStatus_t LoRaMacParserData( LoRaMacMessageData_t *macMsg );
# 22 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
#define __UTILITIES_H__ 
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
typedef enum LmnStatus_e
{
  LMN_STATUS_ERROR = 0,
  LMN_STATUS_OK = !LMN_STATUS_ERROR
} LmnStatus_t;






#define SUCCESS 1



#define FAIL 0
# 62 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
#define MIN(a,b) ( ( ( a ) < ( b ) ) ? ( a ) : ( b ) )
# 73 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
#define MAX(a,b) ( ( ( a ) > ( b ) ) ? ( a ) : ( b ) )
# 82 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
#define POW2(n) ( 1 << n )




typedef union Version_u
{
    struct Version_s
    {
        uint8_t Revision;
        uint8_t Patch;
        uint8_t Minor;
        uint8_t Major;
    }Fields;
    uint32_t Value;
}Version_t;






void srand1( uint32_t seed );
# 113 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
int32_t randr( int32_t min, int32_t max );
# 124 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
void memcpy1( uint8_t *dst, const uint8_t *src, uint16_t size );
# 133 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
void memcpyr( uint8_t *dst, const uint8_t *src, uint16_t size );
# 144 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
void memset1( uint8_t *dst, uint8_t value, uint16_t size );







int8_t Nibble2HexChar( uint8_t a );
# 162 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
uint32_t Crc32( uint8_t *buffer, uint16_t length );







uint32_t Crc32Init( void );
# 181 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
uint32_t Crc32Update( uint32_t crcInit, uint8_t *buffer, uint16_t length );
# 190 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
uint32_t Crc32Finalize( uint32_t crc );




#define CRITICAL_SECTION_BEGIN() uint32_t mask; BoardCriticalSectionBegin( &mask )




#define CRITICAL_SECTION_END() BoardCriticalSectionEnd( &mask )
# 213 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
void BoardCriticalSectionBegin( uint32_t *mask );






void BoardCriticalSectionEnd( uint32_t *mask );
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.c" 2

LoRaMacParserStatus_t LoRaMacParserJoinAccept( LoRaMacMessageJoinAccept_t* macMsg )
{
    if( ( macMsg == 0 ) || ( macMsg->Buffer == 0 ) )
    {
        return LORAMAC_PARSER_ERROR_NPE;
    }

    uint16_t bufItr = 0;

    macMsg->MHDR.Value = macMsg->Buffer[bufItr++];

    memcpy1( macMsg->JoinNonce, &macMsg->Buffer[bufItr], 3 );
    bufItr = bufItr + 3;

    memcpy1( macMsg->NetID, &macMsg->Buffer[bufItr], 3 );
    bufItr = bufItr + 3;

    macMsg->DevAddr = ( uint32_t ) macMsg->Buffer[bufItr++];
    macMsg->DevAddr |= ( ( uint32_t ) macMsg->Buffer[bufItr++] << 8 );
    macMsg->DevAddr |= ( ( uint32_t ) macMsg->Buffer[bufItr++] << 16 );
    macMsg->DevAddr |= ( ( uint32_t ) macMsg->Buffer[bufItr++] << 24 );

    macMsg->DLSettings.Value = macMsg->Buffer[bufItr++];

    macMsg->RxDelay = macMsg->Buffer[bufItr++];

    if( ( macMsg->BufSize - 4 - bufItr ) == 16 )
    {
        memcpy1( macMsg->CFList, &macMsg->Buffer[bufItr], 16 );
        bufItr = bufItr + 16;
    }
    else if( ( macMsg->BufSize - 4 - bufItr ) > 0 )
    {
        return LORAMAC_PARSER_FAIL;
    }

    macMsg->MIC = ( uint32_t ) macMsg->Buffer[bufItr++];
    macMsg->MIC |= ( ( uint32_t ) macMsg->Buffer[bufItr++] << 8 );
    macMsg->MIC |= ( ( uint32_t ) macMsg->Buffer[bufItr++] << 16 );
    macMsg->MIC |= ( ( uint32_t ) macMsg->Buffer[bufItr++] << 24 );

    return LORAMAC_PARSER_SUCCESS;
}

LoRaMacParserStatus_t LoRaMacParserData( LoRaMacMessageData_t* macMsg )
{
    if( ( macMsg == 0 ) || ( macMsg->Buffer == 0 ) )
    {
        return LORAMAC_PARSER_ERROR_NPE;
    }

    uint16_t bufItr = 0;

    macMsg->MHDR.Value = macMsg->Buffer[bufItr++];

    macMsg->FHDR.DevAddr = macMsg->Buffer[bufItr++];
    macMsg->FHDR.DevAddr |= ( ( uint32_t ) macMsg->Buffer[bufItr++] << 8 );
    macMsg->FHDR.DevAddr |= ( ( uint32_t ) macMsg->Buffer[bufItr++] << 16 );
    macMsg->FHDR.DevAddr |= ( ( uint32_t ) macMsg->Buffer[bufItr++] << 24 );

    macMsg->FHDR.FCtrl.Value = macMsg->Buffer[bufItr++];

    macMsg->FHDR.FCnt = macMsg->Buffer[bufItr++];
    macMsg->FHDR.FCnt |= macMsg->Buffer[bufItr++] << 8;

    memcpy1( macMsg->FHDR.FOpts, &macMsg->Buffer[bufItr], macMsg->FHDR.FCtrl.Bits.FOptsLen );
    bufItr = bufItr + macMsg->FHDR.FCtrl.Bits.FOptsLen;


    macMsg->FPort = 0;
    macMsg->FRMPayloadSize = 0;

    if( ( macMsg->BufSize - bufItr - 4 ) > 0 )
    {
        macMsg->FPort = macMsg->Buffer[bufItr++];

        macMsg->FRMPayloadSize = ( macMsg->BufSize - bufItr - 4 );
        memcpy1( macMsg->FRMPayload, &macMsg->Buffer[bufItr], macMsg->FRMPayloadSize );
        bufItr = bufItr + macMsg->FRMPayloadSize;
    }

    macMsg->MIC = ( uint32_t ) macMsg->Buffer[( macMsg->BufSize - 4 )];
    macMsg->MIC |= ( ( uint32_t ) macMsg->Buffer[( macMsg->BufSize - 4 ) + 1] << 8 );
    macMsg->MIC |= ( ( uint32_t ) macMsg->Buffer[( macMsg->BufSize - 4 ) + 2] << 16 );
    macMsg->MIC |= ( ( uint32_t ) macMsg->Buffer[( macMsg->BufSize - 4 ) + 3] << 24 );

    return LORAMAC_PARSER_SUCCESS;
}
