# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
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
#define LORA_STACK_VER 0x040407
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
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_types.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_types.h"
#define WSF_TYPES_H 






#define NULL 0



#define TRUE 1



#define FALSE 0
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_types.h"
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
# 49 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_types.h" 2
# 60 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_types.h"

# 60 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_types.h"
typedef uint8_t bool_t;
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_assert.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_assert.h"
#define WSF_ASSERT_H 
# 33 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_assert.h"
void WsfAssert(const char *pFile, uint16_t line);
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_assert.h"
#define WSF_ASSERT(expr) 
# 65 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_assert.h"
#define WSF_CT_ASSERT(expr) extern char wsf_ct_assert[(expr) ? 1 : -1]
# 27 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_trace.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_trace.h"
#define WSF_TRACE_H 






typedef void (*WsfTokenHandler_t)(void);





void WsfTrace(const char *pStr, ...);
void WsfToken(uint32_t tok, uint32_t var);
void WsfPacketTrace(uint8_t ui8Type, uint32_t ui32Len, uint8_t *pui8Buf);


bool_t WsfTokenService(void);
uint8_t WsfTokenIOWrite(uint8_t *pBuf, uint8_t len);
# 94 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_trace.h"
#define WSF_TRACE0(subsys,stat,msg) 
#define WSF_TRACE1(subsys,stat,msg,var1) 
#define WSF_TRACE2(subsys,stat,msg,var1,var2) 
#define WSF_TRACE3(subsys,stat,msg,var1,var2,var3) 
#define PACKET_TRACE(type,len,buf) 



#define WSF_TRACE_INFO0(msg) 
#define WSF_TRACE_INFO1(msg,var1) 
#define WSF_TRACE_INFO2(msg,var1,var2) 
#define WSF_TRACE_INFO3(msg,var1,var2,var3) 
#define WSF_TRACE_WARN0(msg) WSF_TRACE0("WSF", "WARN", msg)
#define WSF_TRACE_WARN1(msg,var1) WSF_TRACE1("WSF", "WARN", msg, var1)
#define WSF_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("WSF", "WARN", msg, var1, var2)
#define WSF_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("WSF", "WARN", msg, var1, var2, var3)
#define WSF_TRACE_ERR0(msg) WSF_TRACE0("WSF", "ERR", msg)
#define WSF_TRACE_ERR1(msg,var1) WSF_TRACE1("WSF", "ERR", msg, var1)
#define WSF_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("WSF", "ERR", msg, var1, var2)
#define WSF_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("WSF", "ERR", msg, var1, var2, var3)
#define WSF_TRACE_ALLOC0(msg) 
#define WSF_TRACE_ALLOC1(msg,var1) 
#define WSF_TRACE_ALLOC2(msg,var1,var2) 
#define WSF_TRACE_ALLOC3(msg,var1,var2,var3) 
#define WSF_TRACE_FREE0(msg) 
#define WSF_TRACE_FREE1(msg,var1) 
#define WSF_TRACE_FREE2(msg,var1,var2) 
#define WSF_TRACE_FREE3(msg,var1,var2,var3) 
#define WSF_TRACE_MSG0(msg) 
#define WSF_TRACE_MSG1(msg,var1) 
#define WSF_TRACE_MSG2(msg,var1,var2) 
#define WSF_TRACE_MSG3(msg,var1,var2,var3) 
# 146 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_trace.h"
#define HCI_TRACE_INFO0(msg) 
#define HCI_TRACE_INFO1(msg,var1) 
#define HCI_TRACE_INFO2(msg,var1,var2) 
#define HCI_TRACE_INFO3(msg,var1,var2,var3) 
#define HCI_TRACE_WARN0(msg) 
#define HCI_TRACE_WARN1(msg,var1) 
#define HCI_TRACE_WARN2(msg,var1,var2) 
#define HCI_TRACE_WARN3(msg,var1,var2,var3) 
#define HCI_TRACE_ERR0(msg) 
#define HCI_TRACE_ERR1(msg,var1) 
#define HCI_TRACE_ERR2(msg,var1,var2) 
#define HCI_TRACE_ERR3(msg,var1,var2,var3) 

#define HCI_PDUMP_CMD(len,pBuf) 
#define HCI_PDUMP_EVT(len,pBuf) 
#define HCI_PDUMP_TX_ACL(len,pBuf) 
#define HCI_PDUMP_RX_ACL(len,pBuf) 



#define DM_TRACE_INFO0(msg) WSF_TRACE0("DM", "INFO", msg)
#define DM_TRACE_INFO1(msg,var1) WSF_TRACE1("DM", "INFO", msg, var1)
#define DM_TRACE_INFO2(msg,var1,var2) WSF_TRACE2("DM", "INFO", msg, var1, var2)
#define DM_TRACE_INFO3(msg,var1,var2,var3) WSF_TRACE3("DM", "INFO", msg, var1, var2, var3)
#define DM_TRACE_WARN0(msg) WSF_TRACE0("DM", "WARN", msg)
#define DM_TRACE_WARN1(msg,var1) WSF_TRACE1("DM", "WARN", msg, var1)
#define DM_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("DM", "WARN", msg, var1, var2)
#define DM_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("DM", "WARN", msg, var1, var2, var3)
#define DM_TRACE_ERR0(msg) WSF_TRACE0("DM", "ERR", msg)
#define DM_TRACE_ERR1(msg,var1) WSF_TRACE1("DM", "ERR", msg, var1)
#define DM_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("DM", "ERR", msg, var1, var2)
#define DM_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("DM", "ERR", msg, var1, var2, var3)
#define DM_TRACE_ALLOC0(msg) WSF_TRACE0("DM", "ALLOC", msg)
#define DM_TRACE_ALLOC1(msg,var1) WSF_TRACE1("DM", "ALLOC", msg, var1)
#define DM_TRACE_ALLOC2(msg,var1,var2) WSF_TRACE2("DM", "ALLOC", msg, var1, var2)
#define DM_TRACE_ALLOC3(msg,var1,var2,var3) WSF_TRACE3("DM", "ALLOC", msg, var1, var2, var3)
#define DM_TRACE_FREE0(msg) WSF_TRACE0("DM", "FREE", msg)
#define DM_TRACE_FREE1(msg,var1) WSF_TRACE1("DM", "FREE", msg, var1)
#define DM_TRACE_FREE2(msg,var1,var2) WSF_TRACE2("DM", "FREE", msg, var1, var2)
#define DM_TRACE_FREE3(msg,var1,var2,var3) WSF_TRACE3("DM", "FREE", msg, var1, var2, var3)

#define L2C_TRACE_INFO0(msg) WSF_TRACE0("L2C", "INFO", msg)
#define L2C_TRACE_INFO1(msg,var1) WSF_TRACE1("L2C", "INFO", msg, var1)
#define L2C_TRACE_INFO2(msg,var1,var2) WSF_TRACE2("L2C", "INFO", msg, var1, var2)
#define L2C_TRACE_INFO3(msg,var1,var2,var3) WSF_TRACE3("L2C", "INFO", msg, var1, var2, var3)
#define L2C_TRACE_WARN0(msg) WSF_TRACE0("L2C", "WARN", msg)
#define L2C_TRACE_WARN1(msg,var1) WSF_TRACE1("L2C", "WARN", msg, var1)
#define L2C_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("L2C", "WARN", msg, var1, var2)
#define L2C_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("L2C", "WARN", msg, var1, var2, var3)
#define L2C_TRACE_ERR0(msg) WSF_TRACE0("L2C", "ERR", msg)
#define L2C_TRACE_ERR1(msg,var1) WSF_TRACE1("L2C", "ERR", msg, var1)
#define L2C_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("L2C", "ERR", msg, var1, var2)
#define L2C_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("L2C", "ERR", msg, var1, var2, var3)

#define ATT_TRACE_INFO0(msg) WSF_TRACE0("ATT", "INFO", msg)
#define ATT_TRACE_INFO1(msg,var1) WSF_TRACE1("ATT", "INFO", msg, var1)
#define ATT_TRACE_INFO2(msg,var1,var2) WSF_TRACE2("ATT", "INFO", msg, var1, var2)
#define ATT_TRACE_INFO3(msg,var1,var2,var3) WSF_TRACE3("ATT", "INFO", msg, var1, var2, var3)
#define ATT_TRACE_WARN0(msg) WSF_TRACE0("ATT", "WARN", msg)
#define ATT_TRACE_WARN1(msg,var1) WSF_TRACE1("ATT", "WARN", msg, var1)
#define ATT_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("ATT", "WARN", msg, var1, var2)
#define ATT_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("ATT", "WARN", msg, var1, var2, var3)
#define ATT_TRACE_ERR0(msg) WSF_TRACE0("ATT", "ERR", msg)
#define ATT_TRACE_ERR1(msg,var1) WSF_TRACE1("ATT", "ERR", msg, var1)
#define ATT_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("ATT", "ERR", msg, var1, var2)
#define ATT_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("ATT", "ERR", msg, var1, var2, var3)

#define SMP_TRACE_INFO0(msg) WSF_TRACE0("SMP", "INFO", msg)
#define SMP_TRACE_INFO1(msg,var1) WSF_TRACE1("SMP", "INFO", msg, var1)
#define SMP_TRACE_INFO2(msg,var1,var2) WSF_TRACE2("SMP", "INFO", msg, var1, var2)
#define SMP_TRACE_INFO3(msg,var1,var2,var3) WSF_TRACE3("SMP", "INFO", msg, var1, var2, var3)
#define SMP_TRACE_WARN0(msg) WSF_TRACE0("SMP", "WARN", msg)
#define SMP_TRACE_WARN1(msg,var1) WSF_TRACE1("SMP", "WARN", msg, var1)
#define SMP_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("SMP", "WARN", msg, var1, var2)
#define SMP_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("SMP", "WARN", msg, var1, var2, var3)
#define SMP_TRACE_ERR0(msg) WSF_TRACE0("SMP", "ERR", msg)
#define SMP_TRACE_ERR1(msg,var1) WSF_TRACE1("SMP", "ERR", msg, var1)
#define SMP_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("SMP", "ERR", msg, var1, var2)
#define SMP_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("SMP", "ERR", msg, var1, var2, var3)

#define APP_TRACE_INFO0(msg) WSF_TRACE0("APP", "INFO", msg)
#define APP_TRACE_INFO1(msg,var1) WSF_TRACE1("APP", "INFO", msg, var1)
#define APP_TRACE_INFO2(msg,var1,var2) WSF_TRACE2("APP", "INFO", msg, var1, var2)
#define APP_TRACE_INFO3(msg,var1,var2,var3) WSF_TRACE3("APP", "INFO", msg, var1, var2, var3)
#define APP_TRACE_WARN0(msg) WSF_TRACE0("APP", "WARN", msg)
#define APP_TRACE_WARN1(msg,var1) WSF_TRACE1("APP", "WARN", msg, var1)
#define APP_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("APP", "WARN", msg, var1, var2)
#define APP_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("APP", "WARN", msg, var1, var2, var3)
#define APP_TRACE_ERR0(msg) WSF_TRACE0("APP", "ERR", msg)
#define APP_TRACE_ERR1(msg,var1) WSF_TRACE1("APP", "ERR", msg, var1)
#define APP_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("APP", "ERR", msg, var1, var2)
#define APP_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("APP", "ERR", msg, var1, var2, var3)

#define LL_TRACE_INFO0(msg) WSF_TRACE0("LL", "INFO", msg)
#define LL_TRACE_INFO1(msg,var1) WSF_TRACE1("LL", "INFO", msg, var1)
#define LL_TRACE_INFO2(msg,var1,var2) WSF_TRACE2("LL", "INFO", msg, var1, var2)
#define LL_TRACE_INFO3(msg,var1,var2,var3) WSF_TRACE3("LL", "INFO", msg, var1, var2, var3)
#define LL_TRACE_WARN0(msg) WSF_TRACE0("LL", "WARN", msg)
#define LL_TRACE_WARN1(msg,var1) WSF_TRACE1("LL", "WARN", msg, var1)
#define LL_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("LL", "WARN", msg, var1, var2)
#define LL_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("LL", "WARN", msg, var1, var2, var3)
#define LL_TRACE_ERR0(msg) WSF_TRACE0("LL", "ERR", msg)
#define LL_TRACE_ERR1(msg,var1) WSF_TRACE1("LL", "ERR", msg, var1)
#define LL_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("LL", "ERR", msg, var1, var2)
#define LL_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("LL", "ERR", msg, var1, var2, var3)
# 28 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
#define WSF_MSG_H 

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
#define WSF_QUEUE_H 
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
#define WSF_QUEUE_INIT(pQueue) {(pQueue)->pHead = NULL; (pQueue)->pTail = NULL;}






typedef struct
{
  void *pHead;
  void *pTail;
} wsfQueue_t;
# 63 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
void WsfQueueEnq(wsfQueue_t *pQueue, void *pElem);
# 76 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
void *WsfQueueDeq(wsfQueue_t *pQueue);
# 90 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
void WsfQueuePush(wsfQueue_t *pQueue, void *pElem);
# 106 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
void WsfQueueInsert(wsfQueue_t *pQueue, void *pElem, void *pPrev);
# 122 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
void WsfQueueRemove(wsfQueue_t *pQueue, void *pElem, void *pPrev);
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
uint16_t WsfQueueCount(wsfQueue_t *pQueue);
# 148 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
bool_t WsfQueueEmpty(wsfQueue_t *pQueue);
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
#define WSF_OS_H 

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h"
#define WSF_OS_INT_H 
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h"
#define WSF_MSG_QUEUE_EVENT 0x01
#define WSF_TIMER_EVENT 0x02
#define WSF_HANDLER_EVENT 0x04


#define WSF_TASK_FROM_ID(handlerID) (((handlerID) >> 4) & 0x0F)


#define WSF_HANDLER_FROM_ID(handlerID) ((handlerID) & 0x0F)






typedef uint8_t wsfHandlerId_t;


typedef uint8_t wsfEventMask_t;


typedef wsfHandlerId_t wsfTaskId_t;


typedef uint8_t wsfTaskEvent_t;
# 75 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h"
bool_t wsfOsReadyToSleep(void);
# 88 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h"
void WsfOsInit(void);
# 101 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h"
void wsfOsDispatcher(void);
# 112 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h"
void WsfOsShutdown(void);
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h" 2
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
#define WSF_OS_DIAG FALSE







#define WSF_INVALID_TASK_ID 0xFF




#define WSF_OS_GET_ACTIVE_HANDLER_ID() WSF_INVALID_TASK_ID







extern wsfHandlerId_t WsfActiveHandler;






typedef struct
{
  uint16_t param;
  uint8_t event;
  uint8_t status;
} wsfMsgHdr_t;
# 89 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
typedef void (*wsfEventHandler_t)(wsfEventMask_t event, wsfMsgHdr_t *pMsg);
# 107 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
void WsfSetEvent(wsfHandlerId_t handlerId, wsfEventMask_t event);
# 118 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
void WsfTaskLock(void);
# 129 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
void WsfTaskUnlock(void);
# 143 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
void WsfTaskSetReady(wsfHandlerId_t handlerId, wsfTaskEvent_t event);
# 156 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
wsfQueue_t *WsfTaskMsgQueue(wsfHandlerId_t handlerId);
# 170 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
wsfHandlerId_t WsfOsSetNextHandler(wsfEventHandler_t handler);
# 184 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
void wsfOsSetEventObject(void *event_object);
# 27 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h" 2
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void *WsfMsgDataAlloc(uint16_t len, uint8_t tailroom);
# 61 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void *WsfMsgAlloc(uint16_t len);
# 74 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void WsfMsgFree(void *pMsg);
# 88 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void WsfMsgSend(wsfHandlerId_t handlerId, void *pMsg);
# 103 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void WsfMsgEnq(wsfQueue_t *pQueue, wsfHandlerId_t handlerId, void *pMsg);
# 117 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void *WsfMsgDeq(wsfQueue_t *pQueue, wsfHandlerId_t *pHandlerId);
# 131 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void *WsfMsgPeek(wsfQueue_t *pQueue, wsfHandlerId_t *pHandlerId);
# 29 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bstream.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bstream.h"
#define BSTREAM_H 

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
#define BDA_H 
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
#define BDA_ADDR_LEN 6


#define BDA_ADDR_STR_LEN (BDA_ADDR_LEN * 2)


#define BDA_ADDR_IS_RPA(bda) (((bda)[5] & 0xC0) == 0x40)


#define BDA_ADDR_IS_NRPA(bda) (((bda)[5] & 0xC0) == 0x00)


#define BDA_ADDR_IS_STATIC(bda) (((bda)[5] & 0xC0) == 0xC0)


#define BDA64_ADDR_IS_RPA(bda64) ((((bda64) >> 40) & 0xC0) == 0x40)


#define BDA64_ADDR_IS_NRPA(bda64) ((((bda64) >> 40) & 0xC0) == 0x00)


#define BDA64_ADDR_IS_STATIC(bda64) ((((bda64) >> 40) & 0xC0) == 0xC0)






typedef uint8_t bdAddr_t[6];
# 80 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
void BdaCpy(uint8_t *pDst, const uint8_t *pSrc);
# 95 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
bool_t BdaCmp(const uint8_t *pAddr1, const uint8_t *pAddr2);
# 108 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
uint8_t *BdaClr(uint8_t *pDst);
# 121 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
bool_t BdaIsZeros(const uint8_t *pAddr);
# 134 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
char *Bda2Str(const uint8_t *pAddr);
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bstream.h" 2
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bstream.h"
#define BYTES_TO_UINT16(n,p) {n = ((uint16_t)(p)[0] + ((uint16_t)(p)[1] << 8));}

#define BYTES_TO_UINT24(n,p) {n = ((uint16_t)(p)[0] + ((uint16_t)(p)[1] << 8) + ((uint16_t)(p)[2] << 16));}


#define BYTES_TO_UINT32(n,p) {n = ((uint32_t)(p)[0] + ((uint32_t)(p)[1] << 8) + ((uint32_t)(p)[2] << 16) + ((uint32_t)(p)[3] << 24));}


#define BYTES_TO_UINT40(n,p) {n = ((uint64_t)(p)[0] + ((uint64_t)(p)[1] << 8) + ((uint64_t)(p)[2] << 16) + ((uint64_t)(p)[3] << 24) + ((uint64_t)(p)[4] << 32));}



#define BYTES_TO_UINT64(n,p) {n = ((uint64_t)(p)[0] + ((uint64_t)(p)[1] << 8) + ((uint64_t)(p)[2] << 16) + ((uint64_t)(p)[3] << 24) + ((uint64_t)(p)[4] << 32) + ((uint64_t)(p)[5] << 40) + ((uint64_t)(p)[6] << 48) + ((uint64_t)(p)[7] << 56));}







#define UINT16_TO_BYTES(n) ((uint8_t) (n)), ((uint8_t)((n) >> 8))
#define UINT32_TO_BYTES(n) ((uint8_t) (n)), ((uint8_t)((n) >> 8)), ((uint8_t)((n) >> 16)), ((uint8_t)((n) >> 24))




#define UINT16_TO_BYTE0(n) ((uint8_t) (n))
#define UINT16_TO_BYTE1(n) ((uint8_t) ((n) >> 8))

#define UINT32_TO_BYTE0(n) ((uint8_t) (n))
#define UINT32_TO_BYTE1(n) ((uint8_t) ((n) >> 8))
#define UINT32_TO_BYTE2(n) ((uint8_t) ((n) >> 16))
#define UINT32_TO_BYTE3(n) ((uint8_t) ((n) >> 24))




#define BSTREAM_TO_INT8(n,p) {n = (int8_t)(*(p)++);}
#define BSTREAM_TO_UINT8(n,p) {n = (uint8_t)(*(p)++);}
#define BSTREAM_TO_UINT16(n,p) {BYTES_TO_UINT16(n, p); p += 2;}
#define BSTREAM_TO_UINT24(n,p) {BYTES_TO_UINT24(n, p); p += 3;}
#define BSTREAM_TO_UINT32(n,p) {BYTES_TO_UINT32(n, p); p += 4;}
#define BSTREAM_TO_UINT40(n,p) {BYTES_TO_UINT40(n, p); p += 5;}
#define BSTREAM_TO_UINT64(n,p) {n = BstreamToUint64(p); p += 8;}
#define BSTREAM_TO_BDA(bda,p) {BdaCpy(bda, p); p += BDA_ADDR_LEN;}
#define BSTREAM_TO_BDA64(bda,p) {bda = BstreamToBda64(p); p += BDA_ADDR_LEN;}




#define UINT8_TO_BSTREAM(p,n) {*(p)++ = (uint8_t)(n);}
#define UINT16_TO_BSTREAM(p,n) {*(p)++ = (uint8_t)(n); *(p)++ = (uint8_t)((n) >> 8);}
#define UINT24_TO_BSTREAM(p,n) {*(p)++ = (uint8_t)(n); *(p)++ = (uint8_t)((n) >> 8); *(p)++ = (uint8_t)((n) >> 16);}

#define UINT32_TO_BSTREAM(p,n) {*(p)++ = (uint8_t)(n); *(p)++ = (uint8_t)((n) >> 8); *(p)++ = (uint8_t)((n) >> 16); *(p)++ = (uint8_t)((n) >> 24);}

#define UINT40_TO_BSTREAM(p,n) {*(p)++ = (uint8_t)(n); *(p)++ = (uint8_t)((n) >> 8); *(p)++ = (uint8_t)((n) >> 16); *(p)++ = (uint8_t)((n) >> 24); *(p)++ = (uint8_t)((n) >> 32);}


#define UINT64_TO_BSTREAM(p,n) {Uint64ToBstream(p, n); p += sizeof(uint64_t);}
#define BDA_TO_BSTREAM(p,bda) {BdaCpy(p, bda); p += BDA_ADDR_LEN;}
#define BDA64_TO_BSTREAM(p,bda) {Bda64ToBstream(p, bda); p += BDA_ADDR_LEN;}




#define UINT16_TO_BUF(p,n) {(p)[0] = (uint8_t)(n); (p)[1] = (uint8_t)((n) >> 8);}
#define UINT24_TO_BUF(p,n) {(p)[0] = (uint8_t)(n); (p)[1] = (uint8_t)((n) >> 8); (p)[2] = (uint8_t)((n) >> 16);}

#define UINT32_TO_BUF(p,n) {(p)[0] = (uint8_t)(n); (p)[1] = (uint8_t)((n) >> 8); (p)[2] = (uint8_t)((n) >> 16); (p)[3] = (uint8_t)((n) >> 24);}

#define UINT40_TO_BUF(p,n) {(p)[0] = (uint8_t)(n); (p)[1] = (uint8_t)((n) >> 8); (p)[2] = (uint8_t)((n) >> 16); (p)[3] = (uint8_t)((n) >> 24); (p)[4] = (uint8_t)((n) >> 32);}






#define BYTES_UINT16_CMP(p,n) ((p)[1] == UINT16_TO_BYTE1(n) && (p)[0] == UINT16_TO_BYTE0(n))




#define FLT_TO_UINT32(m,e) ((m) | ((int32_t)(e) << 24))
#define UINT32_TO_FLT(m,e,n) {m = UINT32_TO_FLT_M(n); e = UINT32_TO_FLT_E(n);}
#define UINT32_TO_FLT_M(n) ((((n) & 0x00FFFFFF) >= 0x00800000) ? ((int32_t)(((n) | 0xFF000000))) : ((int32_t)((n) & 0x00FFFFFF)))

#define UINT32_TO_FLT_E(n) ((int8_t)(n >> 24))



#define SFLT_TO_UINT16(m,e) ((m) | ((int16_t)(e) << 12))
#define UINT16_TO_SFLT(m,e,n) {m = UINT16_TO_SFLT_M(n); e = UINT16_TO_SFLT_E(n);}
#define UINT16_TO_SFLT_M(n) ((((n) & 0x0FFF) >= 0x0800) ? ((int16_t)(((n) | 0xF000))) : ((int16_t)((n) & 0x0FFF)))

#define UINT16_TO_SFLT_E(n) (((n >> 12) >= 0x0008) ? ((int8_t)(((n >> 12) | 0xF0))) : ((int8_t)(n >> 12)))






uint64_t BstreamToBda64(const uint8_t *p);
uint64_t BstreamToUint64(const uint8_t *p);
void Bda64ToBstream(uint8_t *p, uint64_t bda);
void Uint64ToBstream(uint8_t *p, uint64_t n);
# 30 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
#define L2C_API_H 

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
#define DM_API_H 

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
#define HCI_API_H 


# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/hci_defs.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/hci_defs.h"
#define HCI_DEFS_H 
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/hci_defs.h"
#define HCI_CMD_HDR_LEN 3
#define HCI_ACL_HDR_LEN 4
#define HCI_ISO_HDR_LEN 4
#define HCI_EVT_HDR_LEN 2
#define HCI_EVT_PARAM_MAX_LEN 255
#define HCI_ACL_DEFAULT_LEN 27
#define HCI_PB_FLAG_MASK 0x3000
#define HCI_PB_START_H2C 0x0000
#define HCI_PB_CONTINUE 0x1000
#define HCI_PB_START_C2H 0x2000
#define HCI_HANDLE_MASK 0x0FFF
#define HCI_HANDLE_NONE 0xFFFF





#define HCI_CMD_TYPE 1
#define HCI_ACL_TYPE 2
#define HCI_EVT_TYPE 4
#define HCI_ISO_TYPE 5






#define HCI_SUCCESS 0x00
#define HCI_ERR_UNKNOWN_CMD 0x01
#define HCI_ERR_UNKNOWN_HANDLE 0x02
#define HCI_ERR_HARDWARE_FAILURE 0x03
#define HCI_ERR_PAGE_TIMEOUT 0x04
#define HCI_ERR_AUTH_FAILURE 0x05
#define HCI_ERR_KEY_MISSING 0x06
#define HCI_ERR_MEMORY_EXCEEDED 0x07
#define HCI_ERR_CONN_TIMEOUT 0x08
#define HCI_ERR_CONN_LIMIT 0x09
#define HCI_ERR_SYNCH_CONN_LIMIT 0x0A
#define HCI_ERR_ACL_CONN_EXISTS 0x0B
#define HCI_ERR_CMD_DISALLOWED 0x0C
#define HCI_ERR_REJ_RESOURCES 0x0D
#define HCI_ERR_REJ_SECURITY 0x0E
#define HCI_ERR_REJ_BD_ADDR 0x0F
#define HCI_ERR_ACCEPT_TIMEOUT 0x10
#define HCI_ERR_UNSUP_FEAT 0x11
#define HCI_ERR_INVALID_PARAM 0x12
#define HCI_ERR_REMOTE_TERMINATED 0x13
#define HCI_ERR_REMOTE_RESOURCES 0x14
#define HCI_ERR_REMOTE_POWER_OFF 0x15
#define HCI_ERR_LOCAL_TERMINATED 0x16
#define HCI_ERR_REPEATED_ATTEMPTS 0x17
#define HCI_ERR_PAIRING_NOT_ALLOWED 0x18
#define HCI_ERR_UNKNOWN_LMP_PDU 0x19
#define HCI_ERR_UNSUP_REMOTE_FEAT 0x1A
#define HCI_ERR_SCO_OFFSET 0x1B
#define HCI_ERR_SCO_INTERVAL 0x1C
#define HCI_ERR_SCO_MODE 0x1D
#define HCI_ERR_LMP_PARAM 0x1E
#define HCI_ERR_UNSPECIFIED 0x1F
#define HCI_ERR_UNSUP_LMP_PARAM 0x20
#define HCI_ERR_ROLE_CHANGE 0x21
#define HCI_ERR_LL_RESP_TIMEOUT 0x22
#define HCI_ERR_LMP_COLLISION 0x23
#define HCI_ERR_LMP_PDU 0x24
#define HCI_ERR_ENCRYPT_MODE 0x25
#define HCI_ERR_LINK_KEY 0x26
#define HCI_ERR_UNSUP_QOS 0x27
#define HCI_ERR_INSTANT_PASSED 0x28
#define HCI_ERR_UNSUP_UNIT_KEY 0x29
#define HCI_ERR_TRANSACT_COLLISION 0x2A
#define HCI_ERR_CHANNEL_CLASS 0x2E
#define HCI_ERR_MEMORY 0x2F
#define HCI_ERR_PARAMETER_RANGE 0x30
#define HCI_ERR_ROLE_SWITCH_PEND 0x32
#define HCI_ERR_RESERVED_SLOT 0x34
#define HCI_ERR_ROLE_SWITCH 0x35
#define HCI_ERR_INQ_TOO_LARGE 0x36
#define HCI_ERR_UNSUP_SSP 0x37
#define HCI_ERR_HOST_BUSY_PAIRING 0x38
#define HCI_ERR_NO_CHANNEL 0x39
#define HCI_ERR_CONTROLLER_BUSY 0x3A
#define HCI_ERR_CONN_INTERVAL 0x3B
#define HCI_ERR_ADV_TIMEOUT 0x3C
#define HCI_ERR_MIC_FAILURE 0x3D
#define HCI_ERR_CONN_FAIL 0x3E
#define HCI_ERR_MAC_CONN_FAIL 0x3F
#define HCI_ERR_COARSE_CLK_ADJ_REJ 0x40
#define HCI_ERR_TYPE0_SUBMAP_NOT_DEF 0x41
#define HCI_ERR_UNKNOWN_ADV_ID 0x42
#define HCI_ERR_LIMIT_REACHED 0x43
#define HCI_ERR_OP_CANCELLED_BY_HOST 0x44

#define HCI_ERR_PKT_TOO_LONG 0x45






#define HCI_OGF_NOP 0x00
#define HCI_OGF_LINK_CONTROL 0x01
#define HCI_OGF_LINK_POLICY 0x02
#define HCI_OGF_CONTROLLER 0x03
#define HCI_OGF_INFORMATIONAL 0x04
#define HCI_OGF_STATUS 0x05
#define HCI_OGF_TESTING 0x06
#define HCI_OGF_LE_CONTROLLER 0x08
#define HCI_OGF_VENDOR_SPEC 0x3F






#define HCI_OCF_NOP 0x00






#define HCI_OCF_DISCONNECT 0x06
#define HCI_OCF_READ_REMOTE_VER_INFO 0x1D
# 167 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/hci_defs.h"
#define HCI_OCF_SET_EVENT_MASK 0x01
#define HCI_OCF_RESET 0x03
#define HCI_OCF_READ_TX_PWR_LVL 0x2D
#define HCI_OCF_SET_CONTROLLER_TO_HOST_FC 0x31
#define HCI_OCF_HOST_BUFFER_SIZE 0x33
#define HCI_OCF_HOST_NUM_CMPL_PKTS 0x35
#define HCI_OCF_SET_EVENT_MASK_PAGE2 0x63
#define HCI_OCF_READ_AUTH_PAYLOAD_TO 0x7B
#define HCI_OCF_WRITE_AUTH_PAYLOAD_TO 0x7C






#define HCI_OCF_READ_LOCAL_VER_INFO 0x01
#define HCI_OCF_READ_LOCAL_SUP_CMDS 0x02
#define HCI_OCF_READ_LOCAL_SUP_FEAT 0x03
#define HCI_OCF_READ_BUF_SIZE 0x05
#define HCI_OCF_READ_BD_ADDR 0x09






#define HCI_OCF_READ_RSSI 0x05






#define HCI_OCF_LE_SET_EVENT_MASK 0x01
#define HCI_OCF_LE_READ_BUF_SIZE 0x02
#define HCI_OCF_LE_READ_LOCAL_SUP_FEAT 0x03
#define HCI_OCF_LE_SET_RAND_ADDR 0x05
#define HCI_OCF_LE_SET_ADV_PARAM 0x06
#define HCI_OCF_LE_READ_ADV_TX_POWER 0x07
#define HCI_OCF_LE_SET_ADV_DATA 0x08
#define HCI_OCF_LE_SET_SCAN_RESP_DATA 0x09
#define HCI_OCF_LE_SET_ADV_ENABLE 0x0A
#define HCI_OCF_LE_SET_SCAN_PARAM 0x0B
#define HCI_OCF_LE_SET_SCAN_ENABLE 0x0C
#define HCI_OCF_LE_CREATE_CONN 0x0D
#define HCI_OCF_LE_CREATE_CONN_CANCEL 0x0E
#define HCI_OCF_LE_READ_WHITE_LIST_SIZE 0x0F
#define HCI_OCF_LE_CLEAR_WHITE_LIST 0x10
#define HCI_OCF_LE_ADD_DEV_WHITE_LIST 0x11
#define HCI_OCF_LE_REMOVE_DEV_WHITE_LIST 0x12
#define HCI_OCF_LE_CONN_UPDATE 0x13
#define HCI_OCF_LE_SET_HOST_CHAN_CLASS 0x14
#define HCI_OCF_LE_READ_CHAN_MAP 0x15
#define HCI_OCF_LE_READ_REMOTE_FEAT 0x16
#define HCI_OCF_LE_ENCRYPT 0x17
#define HCI_OCF_LE_RAND 0x18
#define HCI_OCF_LE_START_ENCRYPTION 0x19
#define HCI_OCF_LE_LTK_REQ_REPL 0x1A
#define HCI_OCF_LE_LTK_REQ_NEG_REPL 0x1B
#define HCI_OCF_LE_READ_SUP_STATES 0x1C
#define HCI_OCF_LE_RECEIVER_TEST 0x1D
#define HCI_OCF_LE_TRANSMITTER_TEST 0x1E
#define HCI_OCF_LE_TEST_END 0x1F

#define HCI_OCF_LE_REM_CONN_PARAM_REP 0x20
#define HCI_OCF_LE_REM_CONN_PARAM_NEG_REP 0x21

#define HCI_OCF_LE_SET_DATA_LEN 0x22
#define HCI_OCF_LE_READ_DEF_DATA_LEN 0x23
#define HCI_OCF_LE_WRITE_DEF_DATA_LEN 0x24
#define HCI_OCF_LE_READ_LOCAL_P256_PUB_KEY 0x25
#define HCI_OCF_LE_GENERATE_DHKEY 0x26
#define HCI_OCF_LE_ADD_DEV_RES_LIST 0x27
#define HCI_OCF_LE_REMOVE_DEV_RES_LIST 0x28
#define HCI_OCF_LE_CLEAR_RES_LIST 0x29
#define HCI_OCF_LE_READ_RES_LIST_SIZE 0x2A
#define HCI_OCF_LE_READ_PEER_RES_ADDR 0x2B
#define HCI_OCF_LE_READ_LOCAL_RES_ADDR 0x2C
#define HCI_OCF_LE_SET_ADDR_RES_ENABLE 0x2D
#define HCI_OCF_LE_SET_RES_PRIV_ADDR_TO 0x2E
#define HCI_OCF_LE_READ_MAX_DATA_LEN 0x2F

#define HCI_OCF_LE_READ_PHY 0x30
#define HCI_OCF_LE_SET_DEF_PHY 0x31
#define HCI_OCF_LE_SET_PHY 0x32
#define HCI_OCF_LE_ENHANCED_RECEIVER_TEST 0x33
#define HCI_OCF_LE_ENHANCED_TRANSMITTER_TEST 0x34
#define HCI_OCF_LE_SET_ADV_SET_RAND_ADDR 0x35
#define HCI_OCF_LE_SET_EXT_ADV_PARAM 0x36
#define HCI_OCF_LE_SET_EXT_ADV_DATA 0x37
#define HCI_OCF_LE_SET_EXT_SCAN_RESP_DATA 0x38
#define HCI_OCF_LE_SET_EXT_ADV_ENABLE 0x39
#define HCI_OCF_LE_READ_MAX_ADV_DATA_LEN 0x3A
#define HCI_OCF_LE_READ_NUM_SUP_ADV_SETS 0x3B
#define HCI_OCF_LE_REMOVE_ADV_SET 0x3C
#define HCI_OCF_LE_CLEAR_ADV_SETS 0x3D
#define HCI_OCF_LE_SET_PER_ADV_PARAM 0x3E
#define HCI_OCF_LE_SET_PER_ADV_DATA 0x3F
#define HCI_OCF_LE_SET_PER_ADV_ENABLE 0x40
#define HCI_OCF_LE_SET_EXT_SCAN_PARAM 0x41
#define HCI_OCF_LE_SET_EXT_SCAN_ENABLE 0x42
#define HCI_OCF_LE_EXT_CREATE_CONN 0x43
#define HCI_OCF_LE_PER_ADV_CREATE_SYNC 0x44
#define HCI_OCF_LE_PER_ADV_CREATE_SYNC_CANCEL 0x45
#define HCI_OCF_LE_PER_ADV_TERM_SYNC 0x46
#define HCI_OCF_LE_ADD_DEV_PER_ADV_LIST 0x47
#define HCI_OCF_LE_REMOVE_DEV_PER_ADV_LIST 0x48
#define HCI_OCF_LE_CLEAR_PER_ADV_LIST 0x49
#define HCI_OCF_LE_READ_PER_ADV_LIST_SIZE 0x4A
#define HCI_OCF_LE_READ_TX_POWER 0x4B
#define HCI_OCF_LE_READ_RF_PATH_COMP 0x4C
#define HCI_OCF_LE_WRITE_RF_PATH_COMP 0x4D
#define HCI_OCF_LE_SET_PRIVACY_MODE 0x4E

#define HCI_OCF_LE_RECEIVER_TEST_V3 0x4F
#define HCI_OCF_LE_TRANSMITTER_TEST_V3 0x50
#define HCI_OCF_LE_SET_CONNLESS_CTE_TX_PARAMS 0x51
#define HCI_OCF_LE_SET_CONNLESS_CTE_TX_ENABLE 0x52
#define HCI_OCF_LE_SET_CONNLESS_IQ_SAMP_ENABLE 0x53
#define HCI_OCF_LE_SET_CONN_CTE_RX_PARAMS 0x54
#define HCI_OCF_LE_SET_CONN_CTE_TX_PARAMS 0x55
#define HCI_OCF_LE_CONN_CTE_REQ_ENABLE 0x56
#define HCI_OCF_LE_CONN_CTE_RSP_ENABLE 0x57
#define HCI_OCF_LE_READ_ANTENNA_INFO 0x58
#define HCI_OCF_LE_SET_PER_ADV_RCV_ENABLE 0x59
#define HCI_OCF_LE_PER_ADV_SYNC_TRANSFER 0x5A
#define HCI_OCF_LE_PER_ADV_SET_INFO_TRANSFER 0x5B
#define HCI_OCF_LE_SET_PAST_PARAM 0x5C
#define HCI_OCF_LE_SET_DEFAULT_PAST_PARAM 0x5D
#define HCI_OCF_LE_GENERATE_DHKEY_V2 0x5E
#define HCI_OCF_LE_MODIFY_SLEEP_CLK_ACC 0x5F

#define HCI_OCF_LE_READ_ISO_BUFFER_SIZE 0x60
#define HCI_OCF_LE_READ_ISO_TX_SYNC 0x61
#define HCI_OCF_LE_SET_CIG_PARAMS 0x62
#define HCI_OCF_LE_SET_CIG_PARAMS_TEST 0x63
#define HCI_OCF_LE_CREATE_CIS 0x64
#define HCI_OCF_LE_REMOVE_CIG 0x65
#define HCI_OCF_LE_ACCEPT_CIS_REQ 0x66
#define HCI_OCF_LE_REJECT_CIS_REQ 0x67
#define HCI_OCF_LE_CREATE_BIG 0x68
#define HCI_OCF_LE_CREATE_BIG_TEST 0x69
#define HCI_OCF_LE_BIG_CREATE_SYNC 0x6A
#define HCI_OCF_LE_TERMINATE_BIG 0x6B
#define HCI_OCF_LE_BIG_TERMINATE_SYNC 0x6C
#define HCI_OCF_LE_REQUEST_PEER_SCA 0x6D
#define HCI_OCF_LE_SETUP_ISO_DATA_PATH 0x6E
#define HCI_OCF_LE_REMOVE_ISO_DATA_PATH 0x6F
#define HCI_OCF_LE_ISO_TX_TEST 0x70
#define HCI_OCF_LE_ISO_RX_TEST 0x71
#define HCI_OCF_LE_ISO_READ_TEST_COUNTER 0x72
#define HCI_OCF_LE_ISO_TERMINATE_TEST 0x73






#define HCI_OPCODE(ogf,ocf) (((ogf) << 10) + (ocf))
#define HCI_OGF(opcode) ((opcode) >> 10)
#define HCI_OCF(opcode) ((opcode) & 0x03FF)






#define HCI_OPCODE_NOP HCI_OPCODE(HCI_OGF_NOP, HCI_OCF_NOP)

#define HCI_OPCODE_DISCONNECT HCI_OPCODE(HCI_OGF_LINK_CONTROL, HCI_OCF_DISCONNECT)
#define HCI_OPCODE_READ_REMOTE_VER_INFO HCI_OPCODE(HCI_OGF_LINK_CONTROL, HCI_OCF_READ_REMOTE_VER_INFO)

#define HCI_OPCODE_SET_EVENT_MASK HCI_OPCODE(HCI_OGF_CONTROLLER, HCI_OCF_SET_EVENT_MASK)
#define HCI_OPCODE_RESET HCI_OPCODE(HCI_OGF_CONTROLLER, HCI_OCF_RESET)
#define HCI_OPCODE_READ_TX_PWR_LVL HCI_OPCODE(HCI_OGF_CONTROLLER, HCI_OCF_READ_TX_PWR_LVL)
#define HCI_OPCODE_SET_EVENT_MASK_PAGE2 HCI_OPCODE(HCI_OGF_CONTROLLER, HCI_OCF_SET_EVENT_MASK_PAGE2)
#define HCI_OPCODE_READ_AUTH_PAYLOAD_TO HCI_OPCODE(HCI_OGF_CONTROLLER, HCI_OCF_READ_AUTH_PAYLOAD_TO)
#define HCI_OPCODE_WRITE_AUTH_PAYLOAD_TO HCI_OPCODE(HCI_OGF_CONTROLLER, HCI_OCF_WRITE_AUTH_PAYLOAD_TO)

#define HCI_OPCODE_READ_LOCAL_VER_INFO HCI_OPCODE(HCI_OGF_INFORMATIONAL, HCI_OCF_READ_LOCAL_VER_INFO)
#define HCI_OPCODE_READ_LOCAL_SUP_CMDS HCI_OPCODE(HCI_OGF_INFORMATIONAL, HCI_OCF_READ_LOCAL_SUP_CMDS)
#define HCI_OPCODE_READ_LOCAL_SUP_FEAT HCI_OPCODE(HCI_OGF_INFORMATIONAL, HCI_OCF_READ_LOCAL_SUP_FEAT)
#define HCI_OPCODE_READ_BUF_SIZE HCI_OPCODE(HCI_OGF_INFORMATIONAL, HCI_OCF_READ_BUF_SIZE)
#define HCI_OPCODE_READ_BD_ADDR HCI_OPCODE(HCI_OGF_INFORMATIONAL, HCI_OCF_READ_BD_ADDR)

#define HCI_OPCODE_READ_RSSI HCI_OPCODE(HCI_OGF_STATUS, HCI_OCF_READ_RSSI)

#define HCI_OPCODE_LE_SET_EVENT_MASK HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EVENT_MASK)
#define HCI_OPCODE_LE_READ_BUF_SIZE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_BUF_SIZE)
#define HCI_OPCODE_LE_READ_LOCAL_SUP_FEAT HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_LOCAL_SUP_FEAT)
#define HCI_OPCODE_LE_SET_RAND_ADDR HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_RAND_ADDR)
#define HCI_OPCODE_LE_SET_ADV_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_ADV_PARAM)
#define HCI_OPCODE_LE_READ_ADV_TX_POWER HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_ADV_TX_POWER)
#define HCI_OPCODE_LE_SET_ADV_DATA HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_ADV_DATA)
#define HCI_OPCODE_LE_SET_SCAN_RESP_DATA HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_SCAN_RESP_DATA)
#define HCI_OPCODE_LE_SET_ADV_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_ADV_ENABLE)
#define HCI_OPCODE_LE_SET_SCAN_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_SCAN_PARAM)
#define HCI_OPCODE_LE_SET_SCAN_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_SCAN_ENABLE)
#define HCI_OPCODE_LE_CREATE_CONN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CREATE_CONN)
#define HCI_OPCODE_LE_CREATE_CONN_CANCEL HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CREATE_CONN_CANCEL)
#define HCI_OPCODE_LE_READ_WHITE_LIST_SIZE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_WHITE_LIST_SIZE)
#define HCI_OPCODE_LE_CLEAR_WHITE_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CLEAR_WHITE_LIST)
#define HCI_OPCODE_LE_ADD_DEV_WHITE_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ADD_DEV_WHITE_LIST)
#define HCI_OPCODE_LE_REMOVE_DEV_WHITE_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REMOVE_DEV_WHITE_LIST)
#define HCI_OPCODE_LE_CONN_UPDATE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CONN_UPDATE)
#define HCI_OPCODE_LE_SET_HOST_CHAN_CLASS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_HOST_CHAN_CLASS)
#define HCI_OPCODE_LE_READ_CHAN_MAP HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_CHAN_MAP)
#define HCI_OPCODE_LE_READ_REMOTE_FEAT HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_REMOTE_FEAT)
#define HCI_OPCODE_LE_ENCRYPT HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ENCRYPT)
#define HCI_OPCODE_LE_RAND HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_RAND)
#define HCI_OPCODE_LE_START_ENCRYPTION HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_START_ENCRYPTION)
#define HCI_OPCODE_LE_LTK_REQ_REPL HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_LTK_REQ_REPL)
#define HCI_OPCODE_LE_LTK_REQ_NEG_REPL HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_LTK_REQ_NEG_REPL)
#define HCI_OPCODE_LE_READ_SUP_STATES HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_SUP_STATES)
#define HCI_OPCODE_LE_RECEIVER_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_RECEIVER_TEST)
#define HCI_OPCODE_LE_TRANSMITTER_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_TRANSMITTER_TEST)
#define HCI_OPCODE_LE_TEST_END HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_TEST_END)

#define HCI_OPCODE_LE_REM_CONN_PARAM_REP HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REM_CONN_PARAM_REP)
#define HCI_OPCODE_LE_REM_CONN_PARAM_NEG_REP HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REM_CONN_PARAM_NEG_REP)

#define HCI_OPCODE_LE_SET_DATA_LEN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_DATA_LEN)
#define HCI_OPCODE_LE_READ_DEF_DATA_LEN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_DEF_DATA_LEN)
#define HCI_OPCODE_LE_WRITE_DEF_DATA_LEN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_WRITE_DEF_DATA_LEN)
#define HCI_OPCODE_LE_READ_LOCAL_P256_PUB_KEY HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_LOCAL_P256_PUB_KEY)
#define HCI_OPCODE_LE_GENERATE_DHKEY HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_GENERATE_DHKEY)
#define HCI_OPCODE_LE_ADD_DEV_RES_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ADD_DEV_RES_LIST)
#define HCI_OPCODE_LE_REMOVE_DEV_RES_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REMOVE_DEV_RES_LIST)
#define HCI_OPCODE_LE_CLEAR_RES_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CLEAR_RES_LIST)
#define HCI_OPCODE_LE_READ_RES_LIST_SIZE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_RES_LIST_SIZE)
#define HCI_OPCODE_LE_READ_PEER_RES_ADDR HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_PEER_RES_ADDR)
#define HCI_OPCODE_LE_READ_LOCAL_RES_ADDR HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_LOCAL_RES_ADDR)
#define HCI_OPCODE_LE_SET_ADDR_RES_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_ADDR_RES_ENABLE)
#define HCI_OPCODE_LE_SET_RES_PRIV_ADDR_TO HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_RES_PRIV_ADDR_TO)
#define HCI_OPCODE_LE_READ_MAX_DATA_LEN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_MAX_DATA_LEN)

#define HCI_OPCODE_LE_READ_PHY HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_PHY)
#define HCI_OPCODE_LE_SET_DEF_PHY HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_DEF_PHY)
#define HCI_OPCODE_LE_SET_PHY HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PHY)
#define HCI_OPCODE_LE_ENHANCED_RECEIVER_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ENHANCED_RECEIVER_TEST)
#define HCI_OPCODE_LE_ENHANCED_TRANSMITTER_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ENHANCED_TRANSMITTER_TEST)
#define HCI_OPCODE_LE_SET_ADV_SET_RAND_ADDR HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_ADV_SET_RAND_ADDR)
#define HCI_OPCODE_LE_SET_EXT_ADV_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EXT_ADV_PARAM)
#define HCI_OPCODE_LE_SET_EXT_ADV_DATA HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EXT_ADV_DATA)
#define HCI_OPCODE_LE_SET_EXT_SCAN_RESP_DATA HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EXT_SCAN_RESP_DATA)
#define HCI_OPCODE_LE_SET_EXT_ADV_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EXT_ADV_ENABLE)
#define HCI_OPCODE_LE_READ_MAX_ADV_DATA_LEN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_MAX_ADV_DATA_LEN)
#define HCI_OPCODE_LE_READ_NUM_SUP_ADV_SETS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_NUM_SUP_ADV_SETS)
#define HCI_OPCODE_LE_REMOVE_ADV_SET HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REMOVE_ADV_SET)
#define HCI_OPCODE_LE_CLEAR_ADV_SETS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CLEAR_ADV_SETS)
#define HCI_OPCODE_LE_SET_PER_ADV_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PER_ADV_PARAM)
#define HCI_OPCODE_LE_SET_PER_ADV_DATA HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PER_ADV_DATA)
#define HCI_OPCODE_LE_SET_PER_ADV_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PER_ADV_ENABLE)
#define HCI_OPCODE_LE_SET_EXT_SCAN_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EXT_SCAN_PARAM)
#define HCI_OPCODE_LE_SET_EXT_SCAN_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EXT_SCAN_ENABLE)
#define HCI_OPCODE_LE_EXT_CREATE_CONN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_EXT_CREATE_CONN)
#define HCI_OPCODE_LE_PER_ADV_CREATE_SYNC HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_PER_ADV_CREATE_SYNC)
#define HCI_OPCODE_LE_PER_ADV_CREATE_SYNC_CANCEL HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_PER_ADV_CREATE_SYNC_CANCEL)
#define HCI_OPCODE_LE_PER_ADV_TERMINATE_SYNC HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_PER_ADV_TERM_SYNC)
#define HCI_OPCODE_LE_ADD_DEV_PER_ADV_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ADD_DEV_PER_ADV_LIST)
#define HCI_OPCODE_LE_REMOVE_DEV_PER_ADV_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REMOVE_DEV_PER_ADV_LIST)
#define HCI_OPCODE_LE_CLEAR_PER_ADV_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CLEAR_PER_ADV_LIST)
#define HCI_OPCODE_LE_READ_PER_ADV_LIST_SIZE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_PER_ADV_LIST_SIZE)
#define HCI_OPCODE_LE_READ_TX_POWER HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_TX_POWER)
#define HCI_OPCODE_LE_WRITE_RF_PATH_COMP HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_WRITE_RF_PATH_COMP)
#define HCI_OPCODE_LE_READ_RF_PATH_COMP HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_RF_PATH_COMP)
#define HCI_OPCODE_LE_SET_PRIVACY_MODE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PRIVACY_MODE)

#define HCI_OPCODE_LE_RECEIVER_TEST_V3 HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_RECEIVER_TEST_V3)
#define HCI_OPCODE_LE_TRANSMITTER_TEST_V3 HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_TRANSMITTER_TEST_V3)
#define HCI_OPCODE_LE_SET_CONNLESS_CTE_TX_PARAMS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CONNLESS_CTE_TX_PARAMS)
#define HCI_OPCODE_LE_SET_CONNLESS_CTE_TX_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CONNLESS_CTE_TX_ENABLE)
#define HCI_OPCODE_LE_SET_CONNLESS_IQ_SAMP_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CONNLESS_IQ_SAMP_ENABLE)
#define HCI_OPCODE_LE_SET_CONN_CTE_RX_PARAMS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CONN_CTE_RX_PARAMS)
#define HCI_OPCODE_LE_SET_CONN_CTE_TX_PARAMS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CONN_CTE_TX_PARAMS)
#define HCI_OPCODE_LE_CONN_CTE_REQ_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CONN_CTE_REQ_ENABLE)
#define HCI_OPCODE_LE_CONN_CTE_RSP_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CONN_CTE_RSP_ENABLE)
#define HCI_OPCODE_LE_READ_ANTENNA_INFO HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_ANTENNA_INFO)
#define HCI_OPCODE_LE_SET_PER_ADV_RCV_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PER_ADV_RCV_ENABLE)
#define HCI_OPCODE_LE_PER_ADV_SYNC_TRANSFER HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_PER_ADV_SYNC_TRANSFER)
#define HCI_OPCODE_LE_PER_ADV_SET_INFO_TRANSFER HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_PER_ADV_SET_INFO_TRANSFER)
#define HCI_OPCODE_LE_SET_PAST_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PAST_PARAM)
#define HCI_OPCODE_LE_SET_DEFAULT_PAST_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_DEFAULT_PAST_PARAM)
#define HCI_OPCODE_LE_GENERATE_DHKEY_V2 HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_GENERATE_DHKEY_V2)
#define HCI_OPCODE_LE_MODIFY_SLEEP_CLK_ACC HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_MODIFY_SLEEP_CLK_ACC)

#define HCI_OPCODE_LE_READ_ISO_BUFFER_SIZE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_ISO_BUFFER_SIZE)
#define HCI_OPCODE_LE_READ_ISO_TX_SYNC HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_ISO_TX_SYNC)
#define HCI_OPCODE_LE_SET_CIG_PARAMS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CIG_PARAMS)
#define HCI_OPCODE_LE_SET_CIG_PARAMS_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CIG_PARAMS_TEST)
#define HCI_OPCODE_LE_CREATE_CIS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CREATE_CIS)
#define HCI_OPCODE_LE_REMOVE_CIG HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REMOVE_CIG)
#define HCI_OPCODE_LE_ACCEPT_CIS_REQ HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ACCEPT_CIS_REQ)
#define HCI_OPCODE_LE_REJECT_CIS_REQ HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REJECT_CIS_REQ)
#define HCI_OPCODE_LE_CREATE_BIG HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CREATE_BIG)
#define HCI_OPCODE_LE_CREATE_BIG_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CREATE_BIG_TEST)
#define HCI_OPCODE_LE_BIG_CREATE_SYNC HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_BIG_CREATE_SYNC)
#define HCI_OPCODE_LE_TERMINATE_BIG HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_TERMINATE_BIG)
#define HCI_OPCODE_LE_BIG_TERMINATE_SYNC HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_BIG_TERMINATE_SYNC)
#define HCI_OPCODE_LE_REQUEST_PEER_SCA HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REQUEST_PEER_SCA)
#define HCI_OPCODE_LE_SETUP_ISO_DATA_PATH HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SETUP_ISO_DATA_PATH)
#define HCI_OPCODE_LE_REMOVE_ISO_DATA_PATH HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REMOVE_ISO_DATA_PATH)
#define HCI_OPCODE_LE_ISO_TX_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ISO_TX_TEST)
#define HCI_OPCODE_LE_ISO_RX_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ISO_RX_TEST)
#define HCI_OPCODE_LE_ISO_READ_TEST_COUNTER HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ISO_READ_TEST_COUNTER)
#define HCI_OPCODE_LE_ISO_TERMINATE_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ISO_TERMINATE_TEST)






#define HCI_OPCODE_LE_VS_ENABLE_READ_FEAT_ON_CONN ((uint16_t)(0xfff3))






#define HCI_LEN_NOP 0

#define HCI_LEN_DISCONNECT 3
#define HCI_LEN_READ_REMOTE_VER_INFO 2

#define HCI_LEN_SET_EVENT_MASK 8
#define HCI_LEN_SET_EVENT_MASK_PAGE2 8
#define HCI_LEN_RESET 0
#define HCI_LEN_READ_TX_PWR_LVL 3
#define HCI_LEN_SET_CONTROLLER_TO_HOST_FC 1
#define HCI_LEN_HOST_BUFFER_SIZE 8
#define HCI_LEN_HOST_NUM_CMPL_PKTS 1

#define HCI_LEN_READ_LOCAL_VER_INFO 0
#define HCI_LEN_READ_LOCAL_SUP_CMDS 0
#define HCI_LEN_READ_LOCAL_SUP_FEAT 0
#define HCI_LEN_READ_BUF_SIZE 0
#define HCI_LEN_READ_BD_ADDR 0

#define HCI_LEN_READ_RSSI 2
#define HCI_LEN_READ_AUTH_PAYLOAD_TO 2
#define HCI_LEN_WRITE_AUTH_PAYLOAD_TO 4

#define HCI_LEN_LE_SET_EVENT_MASK 8
#define HCI_LEN_LE_READ_BUF_SIZE 0
#define HCI_LEN_LE_READ_LOCAL_SUP_FEAT 0
#define HCI_LEN_LE_SET_RAND_ADDR 6
#define HCI_LEN_LE_SET_ADV_PARAM 15
#define HCI_LEN_LE_READ_ADV_TX_POWER 0
#define HCI_LEN_LE_SET_ADV_DATA 32
#define HCI_LEN_LE_SET_SCAN_RESP_DATA 32
#define HCI_LEN_LE_SET_ADV_ENABLE 1
#define HCI_LEN_LE_SET_SCAN_PARAM 7
#define HCI_LEN_LE_SET_SCAN_ENABLE 2
#define HCI_LEN_LE_CREATE_CONN 25
#define HCI_LEN_LE_CREATE_CONN_CANCEL 0
#define HCI_LEN_LE_READ_WHITE_LIST_SIZE 0
#define HCI_LEN_LE_CLEAR_WHITE_LIST 0
#define HCI_LEN_LE_ADD_DEV_WHITE_LIST 7
#define HCI_LEN_LE_REMOVE_DEV_WHITE_LIST 7
#define HCI_LEN_LE_CONN_UPDATE 14
#define HCI_LEN_LE_SET_HOST_CHAN_CLASS 5
#define HCI_LEN_LE_READ_CHAN_MAP 2
#define HCI_LEN_LE_READ_REMOTE_FEAT 2
#define HCI_LEN_LE_ENCRYPT 32
#define HCI_LEN_LE_RAND 0
#define HCI_LEN_LE_START_ENCRYPTION 28
#define HCI_LEN_LE_LTK_REQ_REPL 18
#define HCI_LEN_LE_LTK_REQ_NEG_REPL 2
#define HCI_LEN_LE_READ_SUP_STATES 0
#define HCI_LEN_LE_RECEIVER_TEST 1
#define HCI_LEN_LE_TRANSMITTER_TEST 3

#define HCI_LEN_LE_TRANSMITTER_TEST_V3 82
#define HCI_LEN_LE_RECEIVER_TEST_V3 82

#define HCI_LEN_LE_TEST_END 0

#define HCI_LEN_LE_REM_CONN_PARAM_REP 14
#define HCI_LEN_LE_REM_CONN_PARAM_NEG_REP 3

#define HCI_LEN_LE_SET_DATA_LEN 6
#define HCI_LEN_LE_READ_DEF_DATA_LEN 0
#define HCI_LEN_LE_WRITE_DEF_DATA_LEN 4
#define HCI_LEN_LE_READ_LOCAL_P256_PUB_KEY 0
#define HCI_LEN_LE_GENERATE_DHKEY 64
#define HCI_LEN_LE_ADD_DEV_RES_LIST 39
#define HCI_LEN_LE_REMOVE_DEV_RES_LIST 7
#define HCI_LEN_LE_CLEAR_RES_LIST 0
#define HCI_LEN_LE_READ_RES_LIST_SIZE 0
#define HCI_LEN_LE_READ_PEER_RES_ADDR 7
#define HCI_LEN_LE_READ_LOCAL_RES_ADDR 7
#define HCI_LEN_LE_SET_ADDR_RES_ENABLE 1
#define HCI_LEN_LE_SET_RES_PRIV_ADDR_TO 2
#define HCI_LEN_LE_READ_MAX_DATA_LEN 0

#define HCI_LEN_LE_READ_PHY 2
#define HCI_LEN_LE_SET_DEF_PHY 3
#define HCI_LEN_LE_SET_PHY 7
#define HCI_LEN_LE_ENHANCED_RECEIVER_TEST 3
#define HCI_LEN_LE_ENHANCED_TRANSMITTER_TEST 4
#define HCI_LEN_LE_SET_ADV_SET_RAND_ADDR 7
#define HCI_LEN_LE_SET_EXT_ADV_PARAM 25
#define HCI_LEN_LE_SET_EXT_ADV_DATA(len) (4 + (len))
#define HCI_LEN_LE_SET_EXT_SCAN_RESP_DATA(len) (4 + (len))
#define HCI_LEN_LE_EXT_ADV_ENABLE(numSets) (2 + (4 * (numSets)))
#define HCI_LEN_LE_READ_MAX_ADV_DATA_LEN 0
#define HCI_LEN_LE_READ_NUM_OF_SUP_ADV_SETS 0
#define HCI_LEN_LE_REMOVE_ADV_SET 1
#define HCI_LEN_LE_CLEAR_ADV_SETS 0
#define HCI_LEN_LE_SET_PER_ADV_PARAM 7
#define HCI_LEN_LE_SET_PER_ADV_DATA(len) (3 + (len))
#define HCI_LEN_LE_SET_PER_ADV_ENABLE 2
#define HCI_LEN_LE_SET_EXT_SCAN_PARAM(numPhys) (3 + (5 * (numPhys)))
#define HCI_LEN_LE_SET_EXT_SCAN_ENABLE 6
#define HCI_LEN_LE_EXT_CREATE_CONN(numPhys) (10 + (16 * (numPhys)))
#define HCI_LEN_LE_PER_ADV_CREATE_SYNC 14
#define HCI_LEN_LE_PER_ADV_CREATE_SYNC_CANCEL 0
#define HCI_LEN_LE_PER_ADV_TERMINATE_SYNC 2
#define HCI_LEN_LE_ADD_DEV_PER_ADV_LIST 8
#define HCI_LEN_LE_REMOVE_DEV_PER_ADV_LIST 8
#define HCI_LEN_LE_CLEAR_PER_ADV_LIST 0
#define HCI_LEN_LE_READ_PER_ADV_LIST_SIZE 0
#define HCI_LEN_LE_READ_TX_POWER 0
#define HCI_LEN_LE_READ_RF_PATH_COMP 0
#define HCI_LEN_LE_WRITE_RF_PATH_COMP 4
#define HCI_LEN_LE_SET_PRIVACY_MODE 8

#define HCI_LEN_LE_SET_CONN_CTE_RX_PARAMS(spLen) (5 + (spLen))
#define HCI_LEN_LE_SET_CONN_CTE_TX_PARAMS(spLen) (4 + (spLen))
#define HCI_LEN_LE_SET_CONLESS_CTE_TX_PARAMS(spLen) (5 + (spLen))
#define HCI_LEN_LE_SET_CONLESS_IQ_SAMPLE_EN(spLen) (6 + (spLen))
#define HCI_LEN_LE_SET_CONLESS_CTE_TX_ENABLE 2
#define HCI_LEN_LE_CONN_CTE_REQ_ENABLE 7
#define HCI_LEN_LE_CONN_CTE_RSP_ENABLE 3
#define HCI_LEN_LE_READ_ANTENNA_INFO 0
#define HCI_LEN_LE_SET_PER_ADV_RCV_ENABLE 3
#define HCI_LEN_LE_PER_ADV_SYNC_TRANSFER 6
#define HCI_LEN_LE_PER_ADV_SET_INFO_TRANSFER 5
#define HCI_LEN_LE_SET_PAST_PARAM 8
#define HCI_LEN_LE_SET_DEFAULT_PAST_PARAM 6
#define HCI_LEN_LE_GENERATE_DHKEY_V2 65






#define HCI_DISCONNECT_CMPL_EVT 0x05
#define HCI_ENC_CHANGE_EVT 0x08
#define HCI_READ_REMOTE_VER_INFO_CMPL_EVT 0x0C
#define HCI_CMD_CMPL_EVT 0x0E
#define HCI_CMD_STATUS_EVT 0x0F
#define HCI_HW_ERROR_EVT 0x10
#define HCI_NUM_CMPL_PKTS_EVT 0x13
#define HCI_DATA_BUF_OVERFLOW_EVT 0x1A
#define HCI_ENC_KEY_REFRESH_CMPL_EVT 0x30
#define HCI_LE_META_EVT 0x3E
#define HCI_AUTH_PAYLOAD_TIMEOUT_EVT 0x57
#define HCI_VENDOR_SPEC_EVT 0xFF






#define HCI_LE_CONN_CMPL_EVT 0x01
#define HCI_LE_ADV_REPORT_EVT 0x02
#define HCI_LE_CONN_UPDATE_CMPL_EVT 0x03
#define HCI_LE_READ_REMOTE_FEAT_CMPL_EVT 0x04
#define HCI_LE_LTK_REQ_EVT 0x05

#define HCI_LE_REM_CONN_PARAM_REQ_EVT 0x06

#define HCI_LE_DATA_LEN_CHANGE_EVT 0x07
#define HCI_LE_READ_LOCAL_P256_PUB_KEY_CMPL_EVT 0x08
#define HCI_LE_GENERATE_DHKEY_CMPL_EVT 0x09
#define HCI_LE_ENHANCED_CONN_CMPL_EVT 0x0A
#define HCI_LE_DIRECT_ADV_REPORT_EVT 0x0B

#define HCI_LE_PHY_UPDATE_CMPL_EVT 0x0C
#define HCI_LE_EXT_ADV_REPORT_EVT 0x0D
#define HCI_LE_PER_ADV_SYNC_EST_EVT 0x0E
#define HCI_LE_PER_ADV_REPORT_EVT 0x0F
#define HCI_LE_PER_ADV_SYNC_LOST_EVT 0x10
#define HCI_LE_SCAN_TIMEOUT_EVT 0x11
#define HCI_LE_ADV_SET_TERM_EVT 0x12
#define HCI_LE_SCAN_REQ_RCVD_EVT 0x13
#define HCI_LE_CH_SEL_ALGO_EVT 0x14

#define HCI_LE_CONNLESS_IQ_REPORT_EVT 0x15
#define HCI_LE_CONN_IQ_REPORT_EVT 0x16
#define HCI_LE_CTE_REQ_FAILED_EVT 0x17
#define HCI_LE_PER_SYNC_TRSF_RCVD_EVT 0x18

#define HCI_LE_CIS_EST_EVT 0x19
#define HCI_LE_CIS_REQ_EVT 0x1A
#define HCI_LE_BIG_CMPL_EVT 0x1B
#define HCI_LE_BIG_SYNC_LOST_EVT 0x1C
#define HCI_LE_REQ_PEER_SCA_CMPLT_EVT 0x1D






#define HCI_LEN_DISCONNECT_CMPL 4
#define HCI_LEN_READ_REMOTE_VER_INFO_CMPL 8
#define HCI_LEN_CMD_CMPL 3
#define HCI_LEN_CMD_STATUS 4
#define HCI_LEN_HW_ERR 1
#define HCI_LEN_NUM_CMPL_PKTS 5
#define HCI_LEN_ENC_CHANGE 4
#define HCI_LEN_ENC_KEY_REFRESH_CMPL 3
#define HCI_LEN_LE_CONN_CMPL 19
#define HCI_LEN_LE_ADV_RPT_MIN 12
#define HCI_LEN_LE_CONN_UPDATE_CMPL 10
#define HCI_LEN_LE_READ_REMOTE_FEAT_CMPL 12
#define HCI_LEN_LE_LTK_REQ 13

#define HCI_LEN_LE_REM_CONN_PARAM_REQ 11
#define HCI_LEN_LE_DATA_LEN_CHANGE 11
#define HCI_LEN_LE_READ_PUB_KEY_CMPL 66
#define HCI_LEN_LE_GEN_DHKEY_CMPL 34
#define HCI_LEN_LE_ENHANCED_CONN_CMPL 31
#define HCI_LEN_LE_DIRECT_ADV_REPORT 18
#define HCI_LEN_AUTH_PAYLOAD_TIMEOUT 2

#define HCI_LEN_LE_PHY_UPDATE_CMPL 6
#define HCI_LEN_LE_CH_SEL_ALGO 4
#define HCI_LEN_LE_PHY_UPDATE_CMPL 6
#define HCI_LEN_LE_EXT_ADV_REPORT_MIN 26
#define HCI_LEN_LE_PER_ADV_SYNC_EST 16
#define HCI_LEN_LE_PER_ADV_REPORT 8
#define HCI_LEN_LE_PER_ADV_SYNC_LOST 3
#define HCI_LEN_LE_SCAN_TIMEOUT 1
#define HCI_LEN_LE_ADV_SET_TERM 6
#define HCI_LEN_LE_SCAN_REQ_RCVD 9

#define HCI_LEN_LE_PER_SYNC_TRSF_RCVT 20

#define HCI_LEN_LE_CIS_EST 12
#define HCI_LEN_LE_CIS_REQ 7
#define HCI_LEN_LE_PEER_SCA_CMPL 5






#define HCI_SUP_DISCONNECT 0x20
#define HCI_SUP_READ_REMOTE_VER_INFO 0x80
#define HCI_SUP_SET_EVENT_MASK 0x40
#define HCI_SUP_RESET 0x80
#define HCI_SUP_READ_TX_PWR_LVL 0x04
#define HCI_SUP_READ_LOCAL_VER_INFO 0x08
#define HCI_SUP_READ_LOCAL_SUP_FEAT 0x20
#define HCI_SUP_READ_BD_ADDR 0x02
#define HCI_SUP_READ_RSSI 0x20
#define HCI_SUP_SET_EVENT_MASK_PAGE2 0x04
#define HCI_SUP_LE_SET_EVENT_MASK 0x01
#define HCI_SUP_LE_READ_BUF_SIZE 0x02
#define HCI_SUP_LE_READ_LOCAL_SUP_FEAT 0x04
#define HCI_SUP_LE_SET_RAND_ADDR 0x10
#define HCI_SUP_LE_SET_ADV_PARAM 0x20
#define HCI_SUP_LE_READ_ADV_TX_POWER 0x40
#define HCI_SUP_LE_SET_ADV_DATA 0x80
#define HCI_SUP_LE_SET_SCAN_RESP_DATA 0x01
#define HCI_SUP_LE_SET_ADV_ENABLE 0x02
#define HCI_SUP_LE_SET_SCAN_PARAM 0x04
#define HCI_SUP_LE_SET_SCAN_ENABLE 0x08
#define HCI_SUP_LE_CREATE_CONN 0x10
#define HCI_SUP_LE_CREATE_CONN_CANCEL 0x20
#define HCI_SUP_LE_READ_WHITE_LIST_SIZE 0x40
#define HCI_SUP_LE_CLEAR_WHITE_LIST 0x80
#define HCI_SUP_LE_ADD_DEV_WHITE_LIST 0x01
#define HCI_SUP_LE_REMOVE_DEV_WHITE_LIST 0x02
#define HCI_SUP_LE_CONN_UPDATE 0x04
#define HCI_SUP_LE_SET_HOST_CHAN_CLASS 0x08
#define HCI_SUP_LE_READ_CHAN_MAP 0x10
#define HCI_SUP_LE_READ_REMOTE_FEAT 0x20
#define HCI_SUP_LE_ENCRYPT 0x40
#define HCI_SUP_LE_RAND 0x80
#define HCI_SUP_LE_START_ENCRYPTION 0x01
#define HCI_SUP_LE_LTK_REQ_REPL 0x02
#define HCI_SUP_LE_LTK_REQ_NEG_REPL 0x04
#define HCI_SUP_LE_READ_SUP_STATES 0x08
#define HCI_SUP_LE_RECEIVER_TEST 0x10
#define HCI_SUP_LE_TRANSMITTER_TEST 0x20
#define HCI_SUP_LE_TEST_END 0x40
#define HCI_SUP_READ_AUTH_PAYLOAD_TO 0x10
#define HCI_SUP_WRITE_AUTH_PAYLOAD_TO 0x20

#define HCI_SUP_LE_REM_CONN_PARAM_REQ_REPL 0x10
#define HCI_SUP_LE_REM_CONN_PARAM_REQ_NEG_REPL 0x20

#define HCI_SUP_LE_SET_DATA_LEN 0x40
#define HCI_SUP_LE_READ_DEF_DATA_LEN 0x80
#define HCI_SUP_LE_WRITE_DEF_DATA_LEN 0x01
#define HCI_SUP_LE_READ_LOCAL_P256_PUB_KEY 0x02
#define HCI_SUP_LE_GENERATE_DHKEY 0x04
#define HCI_SUP_LE_ADD_DEV_RES_LIST_EVT 0x08
#define HCI_SUP_LE_REMOVE_DEV_RES_LIST 0x10
#define HCI_SUP_LE_CLEAR_RES_LIST 0x20
#define HCI_SUP_LE_READ_RES_LIST_SIZE 0x40
#define HCI_SUP_LE_READ_PEER_RES_ADDR 0x80
#define HCI_SUP_LE_READ_LOCAL_RES_ADDR 0x01
#define HCI_SUP_LE_SET_ADDR_RES_ENABLE 0x02
#define HCI_SUP_LE_SET_RES_PRIV_ADDR_TO 0x04
#define HCI_SUP_LE_READ_MAX_DATA_LEN 0x08

#define HCI_SUP_LE_READ_PHY 0x10
#define HCI_SUP_LE_SET_DEF_PHY 0x20
#define HCI_SUP_LE_SET_PHY 0x40
#define HCI_SUP_LE_ENHANCED_RECEIVER_TEST 0x80
#define HCI_SUP_LE_ENHANCED_TRANSMITTER_TEST 0x01
#define HCI_SUP_LE_SET_ADV_SET_RAND_ADDR 0x02
#define HCI_SUP_LE_SET_EXT_ADV_PARAM 0x04
#define HCI_SUP_LE_SET_EXT_ADV_DATA 0x08
#define HCI_SUP_LE_SET_EXT_SCAN_RESP_DATA 0x10
#define HCI_SUP_LE_SET_EXT_ADV_ENABLE 0x20
#define HCI_SUP_LE_READ_MAX_ADV_DATA_LEN 0x40
#define HCI_SUP_LE_READ_NUM_OF_SUP_ADV_SETS 0x80
#define HCI_SUP_LE_REMOVE_ADV_SET 0x01
#define HCI_SUP_LE_CLEAR_ADV_SETS 0x02
#define HCI_SUP_LE_SET_PER_ADV_PARAM 0x04
#define HCI_SUP_LE_SET_PER_ADV_DATA 0x08
#define HCI_SUP_LE_SET_PER_ADV_ENABLE 0x10
#define HCI_SUP_LE_SET_EXT_SCAN_PARAM 0x20
#define HCI_SUP_LE_SET_EXT_SCAN_ENABLE 0x40
#define HCI_SUP_LE_EXT_CREATE_CONN 0x80
#define HCI_SUP_LE_PER_ADV_CREATE_SYNC 0x01
#define HCI_SUP_LE_PER_ADV_CREATE_SYNC_CANCEL 0x02
#define HCI_SUP_LE_PER_ADV_TERMINATE_SYNC 0x04
#define HCI_SUP_LE_ADD_DEV_PER_ADV_LIST 0x08
#define HCI_SUP_LE_REMOVE_DEV_PER_ADV_LIST 0x10
#define HCI_SUP_LE_CLEAR_PER_ADV_LIST 0x20
#define HCI_SUP_LE_READ_PER_ADV_LIST_SIZE 0x40
#define HCI_SUP_LE_READ_TX_POWER 0x80
#define HCI_SUP_LE_READ_RF_PATH_COMP 0x01
#define HCI_SUP_LE_WRITE_RF_PATH_COMP 0x02
#define HCI_SUP_LE_SET_PRIVACY_MODE 0x04

#define HCI_SUP_LE_RECEIVER_TEST_V3 0x08
#define HCI_SUP_LE_TRANSMITTER_TEST_V3 0x10
#define HCI_SUP_LE_SET_CONNLESS_CTE_TX_PARAMS 0x20
#define HCI_SUP_LE_SET_CONNLESS_CTE_TX_ENABLE 0x40
#define HCI_SUP_LE_SET_CONNLESS_IQ_SAMP_ENABLE 0x80
#define HCI_SUP_LE_SET_CONN_CTE_RX_PARAMS 0x01
#define HCI_SUP_LE_SET_CONN_CTE_TX_PARAMS 0x02
#define HCI_SUP_LE_CONN_CTE_REQ_ENABLE 0x04
#define HCI_SUP_LE_CONN_CTE_RSP_ENABLE 0x08
#define HCI_SUP_LE_READ_ANTENNA_INFO 0x10
#define HCI_SUP_LE_SET_PER_ADV_RCV_ENABLE 0x20
#define HCI_SUP_LE_PER_ADV_SYNC_TRANSFER 0x40
#define HCI_SUP_LE_PER_ADV_SET_INFO_TRANSFER 0x80
#define HCI_SUP_LE_SET_PAST_PARAM 0x01
#define HCI_SUP_LE_SET_DEFAULT_PAST_PARAM 0x02
#define HCI_SUP_LE_GENERATE_DHKEY_V2 0x04
#define HCI_SUP_LE_MODIFY_SLEEP_CLK_ACCURACY 0x10

#define HCI_SUP_LE_READ_BUF_SIZE_V2 0x01
#define HCI_SUP_LE_SET_CIG_PARAM 0x02
#define HCI_SUP_LE_CREATE_CIS 0x04
#define HCI_SUP_LE_REMOVE_CIG 0x08
#define HCI_SUP_LE_ACCEPT_CIS_REQ 0x01
#define HCI_SUP_LE_REJECT_CIS_REQ 0x02
#define HCI_SUP_LE_CREATE_BIG 0x04
#define HCI_SUP_LE_BIG_CREATE_SYNC 0x08
#define HCI_SUP_LE_TERMINATE_BIG 0x01
#define HCI_SUP_LE_SETUP_ISO_DATA_PATH 0x02
#define HCI_SUP_LE_REMOVE_ISO_DATA_PATH 0x04
#define HCI_SUP_LE_REQ_PEER_SCA 0x08

#define HCI_SUP_CMD_LEN 64







#define HCI_EVT_MASK_DISCONNECT_CMPL 0x10
#define HCI_EVT_MASK_ENC_CHANGE 0x80
#define HCI_EVT_MASK_READ_REMOTE_VER_INFO_CMPL 0x08
#define HCI_EVT_MASK_HW_ERROR 0x80
#define HCI_EVT_MASK_DATA_BUF_OVERFLOW 0x02
#define HCI_EVT_MASK_ENC_KEY_REFRESH_CMPL 0x80
#define HCI_EVT_MASK_LE_META 0x20






#define HCI_EVT_MASK_AUTH_PAYLOAD_TIMEOUT 0x80






#define HCI_EVT_MASK_LE_CONN_CMPL_EVT 0x01
#define HCI_EVT_MASK_LE_ADV_REPORT_EVT 0x02
#define HCI_EVT_MASK_LE_CONN_UPDATE_CMPL_EVT 0x04
#define HCI_EVT_MASK_LE_READ_REMOTE_FEAT_CMPL_EVT 0x08
#define HCI_EVT_MASK_LE_LTK_REQ_EVT 0x10

#define HCI_EVT_MASK_LE_REMOTE_CONN_PARAM_REQ_EVT 0x20

#define HCI_EVT_MASK_LE_DATA_LEN_CHANGE_EVT 0x40
#define HCI_EVT_MASK_LE_READ_LOCAL_P256_PUB_KEY_CMPL 0x80
#define HCI_EVT_MASK_LE_GENERATE_DHKEY_CMPL 0x01
#define HCI_EVT_MASK_LE_ENHANCED_CONN_CMPL_EVT 0x02
#define HCI_EVT_MASK_LE_DIRECT_ADV_REPORT_EVT 0x04

#define HCI_EVT_MASK_LE_PHY_UPDATE_CMPL_EVT 0x08
#define HCI_EVT_MASK_LE_EXT_ADV_REPORT_EVT 0x10
#define HCI_EVT_MASK_LE_PER_ADV_SYNC_EST_EVT 0x20
#define HCI_EVT_MASK_LE_PER_ADV_REPORT_EVT 0x40
#define HCI_EVT_MASK_LE_PER_ADV_SYNC_LOST_EVT 0x80
#define HCI_EVT_MASK_LE_SCAN_TIMEOUT_EVT 0x01
#define HCI_EVT_MASK_LE_ADV_SET_TERM_EVT 0x02
#define HCI_EVT_MASK_LE_SCAN_REQ_RCVD_EVT 0x04
#define HCI_EVT_MASK_LE_CH_SEL_ALGO_EVT 0x08

#define HCI_EVT_MASK_LE_CONNLESS_IQ_REPORT_EVT 0x10
#define HCI_EVT_MASK_LE_CONN_IQ_REPORT_EVT 0x20
#define HCI_EVT_MASK_LE_CTE_REQ_FAILED_EVT 0x40
#define HCI_EVT_MASK_LE_PER_SYNC_TRSF_RCVT_EVT 0x80

#define HCI_EVT_MASK_LE_CIS_EST_EVT 0x01
#define HCI_EVT_MASK_LE_CIS_REQ_EVT 0x02
#define HCI_EVT_MASK_LE_BIG_CMPL_EVT 0x04
#define HCI_EVT_MASK_LE_BIG_SYNC_LOST_EVT 0x08
#define HCI_EVT_MASK_LE_PEER_SCA_CMPL_EVT 0x10







#define HCI_LE_SUP_FEAT_ENCRYPTION 0x00000001

#define HCI_LE_SUP_FEAT_CONN_PARAM_REQ_PROC 0x00000002
#define HCI_LE_SUP_FEAT_EXT_REJECT_IND 0x00000004
#define HCI_LE_SUP_FEAT_SLV_INIT_FEAT_EXCH 0x00000008
#define HCI_LE_SUP_FEAT_LE_PING 0x00000010

#define HCI_LE_SUP_FEAT_DATA_LEN_EXT 0x00000020
#define HCI_LE_SUP_FEAT_PRIVACY 0x00000040
#define HCI_LE_SUP_FEAT_EXT_SCAN_FILT_POLICY 0x00000080

#define HCI_LE_SUP_FEAT_LE_2M_PHY 0x00000100
#define HCI_LE_SUP_FEAT_STABLE_MOD_IDX_TRANSMITTER 0x00000200
#define HCI_LE_SUP_FEAT_STABLE_MOD_IDX_RECEIVER 0x00000400
#define HCI_LE_SUP_FEAT_LE_CODED_PHY 0x00000800
#define HCI_LE_SUP_FEAT_LE_EXT_ADV 0x00001000
#define HCI_LE_SUP_FEAT_LE_PER_ADV 0x00002000
#define HCI_LE_SUP_FEAT_CH_SEL_2 0x00004000
#define HCI_LE_SUP_FEAT_LE_POWER_CLASS_1 0x00008000
#define HCI_LE_SUP_FEAT_MIN_NUN_USED_CHAN 0x00010000

#define HCI_LE_SUP_FEAT_CONN_CTE_REQ 0x00020000
#define HCI_LE_SUP_FEAT_CONN_CTE_RSP 0x00040000
#define HCI_LE_SUP_FEAT_CONNLESS_CTE_TRANS 0x00080000
#define HCI_LE_SUP_FEAT_CONNLESS_CTE_RECV 0x00100000
#define HCI_LE_SUP_FEAT_ANTENNA_SWITCH_AOD 0x00200000
#define HCI_LE_SUP_FEAT_ANTENNA_SWITCH_AOA 0x00400000
#define HCI_LE_SUP_FEAT_RECV_CTE 0x00800000
#define HCI_LE_SUP_FEAT_PAST_SENDER 0x01000000
#define HCI_LE_SUP_FEAT_PAST_RECIPIENT 0x02000000
#define HCI_LE_SUP_FEAT_SCA_UPDATE 0x04000000
#define HCI_LE_SUP_FEAT_REMOTE_PUB_KEY_VALIDATION 0x08000000

#define HCI_LE_SUP_FEAT_CIS_MASTER 0x10000000
#define HCI_LE_SUP_FEAT_CIS_SLAVE 0x20000000
#define HCI_LE_SUP_FEAT_ISO_BROADCASTER 0x40000000
#define HCI_LE_SUP_FEAT_ISO_SYNC 0x80000000






#define HCI_ADV_MIN_INTERVAL 0x0020
#define HCI_ADV_MAX_INTERVAL 0x4000
#define HCI_ADV_DIRECTED_MAX_DURATION 0x0500
#define HCI_ADV_TYPE_CONN_UNDIRECT 0x00
#define HCI_ADV_TYPE_CONN_DIRECT 0x01
#define HCI_ADV_TYPE_DISC_UNDIRECT 0x02
#define HCI_ADV_TYPE_NONCONN_UNDIRECT 0x03
#define HCI_ADV_TYPE_CONN_DIRECT_LO_DUTY 0x04
#define HCI_ADV_CHAN_37 0x01
#define HCI_ADV_CHAN_38 0x02
#define HCI_ADV_CHAN_39 0x04
#define HCI_ADV_FILT_NONE 0x00
#define HCI_ADV_FILT_SCAN 0x01
#define HCI_ADV_FILT_CONN 0x02
#define HCI_ADV_FILT_ALL 0x03






#define HCI_SCAN_TYPE_PASSIVE 0
#define HCI_SCAN_TYPE_ACTIVE 1
#define HCI_SCAN_INTERVAL_MIN 0x0004
#define HCI_SCAN_INTERVAL_MAX 0x4000
#define HCI_SCAN_INTERVAL_DEFAULT 0x0010
#define HCI_SCAN_WINDOW_MIN 0x0004
#define HCI_SCAN_WINDOW_MAX 0x4000
#define HCI_SCAN_WINDOW_DEFAULT 0x0010






#define HCI_CONN_INTERVAL_MIN 0x0006
#define HCI_CONN_INTERVAL_MAX 0x0C80
#define HCI_CONN_LATENCY_MAX 0x01F3
#define HCI_SUP_TIMEOUT_MIN 0x000A
#define HCI_SUP_TIMEOUT_MAX 0x0C80






#define HCI_ROLE_MASTER 0
#define HCI_ROLE_SLAVE 1
#define HCI_CLOCK_500PPM 0x00
#define HCI_CLOCK_250PPM 0x01
#define HCI_CLOCK_150PPM 0x02
#define HCI_CLOCK_100PPM 0x03
#define HCI_CLOCK_75PPM 0x04
#define HCI_CLOCK_50PPM 0x05
#define HCI_CLOCK_30PPM 0x06
#define HCI_CLOCK_20PPM 0x07






#define HCI_ADV_CONN_UNDIRECT 0x00
#define HCI_ADV_CONN_DIRECT 0x01
#define HCI_ADV_DISC_UNDIRECT 0x02
#define HCI_ADV_NONCONN_UNDIRECT 0x03
#define HCI_ADV_SCAN_RESPONSE 0x04






#define HCI_ADV_DATA_OP_FRAG_INTER 0x00
#define HCI_ADV_DATA_OP_FRAG_FIRST 0x01
#define HCI_ADV_DATA_OP_FRAG_LAST 0x02
#define HCI_ADV_DATA_OP_COMP_FRAG 0x03
#define HCI_ADV_DATA_OP_UNCHANGED_DATA 0x04






#define HCI_ADV_DATA_FRAG_PREF_FRAG 0x00
#define HCI_ADV_DATA_FRAG_PREF_NO_FRAG 0x01






#define HCI_ADV_NUM_SETS_ALL_DISABLE 0x00






#define HCI_MAX_NUM_PHYS 3






#define HCI_ADV_PHY_LE_1M 0x01
#define HCI_ADV_PHY_LE_2M 0x02
#define HCI_ADV_PHY_LE_CODED 0x03






#define HCI_SCAN_PHY_LE_1M_BIT (1<<0)
#define HCI_SCAN_PHY_LE_2M_BIT (1<<1)
#define HCI_SCAN_PHY_LE_CODED_BIT (1<<2)






#define HCI_INIT_PHY_LE_1M_BIT (1<<0)
#define HCI_INIT_PHY_LE_2M_BIT (1<<1)
#define HCI_INIT_PHY_LE_CODED_BIT (1<<2)






#define HCI_ADV_PROP_CONN_ADV_BIT (1<<0)
#define HCI_ADV_PROP_SCAN_ADV_BIT (1<<1)
#define HCI_ADV_PROP_DIRECT_ADV_BIT (1<<2)
#define HCI_ADV_PROP_CONN_DIRECT_ADV_BIT (1<<3)
#define HCI_ADV_PROP_USE_LEG_PDU_BIT (1<<4)
#define HCI_ADV_PROP_OMIT_ADV_ADDR_BIT (1<<5)
#define HCI_ADV_PROP_INC_TX_PWR_BIT (1<<6)






#define HCI_ADV_PROP_LEG_CONN_UNDIRECT 0x13
#define HCI_ADV_PROP_LEG_CONN_DIRECT 0x1D
#define HCI_ADV_PROP_LEG_SCAN_UNDIRECT 0x12
#define HCI_ADV_PROP_LEG_NONCONN_UNDIRECT 0x10
#define HCI_ADV_PROP_LEG_CONN_DIRECT_LO_DUTY 0x15






#define HCI_ADV_RPT_CONN_ADV_BIT (1<<0)
#define HCI_ADV_RPT_SCAN_ADV_BIT (1<<1)
#define HCI_ADV_RPT_DIRECT_ADV_BIT (1<<2)
#define HCI_ADV_RPT_SCAN_RSP_BIT (1<<3)
#define HCI_ADV_RPT_LEG_ADV_BIT (1<<4)
#define HCI_ADV_RPT_DATA_STATUS_BITS (3<<5)






#define HCI_ADV_RPT_LEG_CONN_UNDIRECT 0x13
#define HCI_ADV_RPT_LEG_CONN_DIRECT 0x15
#define HCI_ADV_RPT_LEG_SCAN_UNDIRECT 0x12
#define HCI_ADV_RPT_LEG_NONCONN_UNDIRECT 0x10
#define HCI_ADV_RPT_LEG_CONN_UNDIRECT_SCAN_RSP 0x1B
#define HCI_ADV_RPT_LEG_SCAN_UNDIRECT_SCAN_RSP 0x1A






#define HCI_ADV_RPT_DATA_CMPL 0x00
#define HCI_ADV_RPT_DATA_INCMPL_MORE 0x01
#define HCI_ADV_RPT_DATA_INCMPL_TRUNC 0x02






#define HCI_ADV_RPT_PHY_PRIM_LE_1M 0x01
#define HCI_ADV_RPT_PHY_PRIM_LE_CODED 0x03






#define HCI_ADV_RPT_PHY_SEC_NONE 0x00
#define HCI_ADV_RPT_PHY_SEC_LE_1M 0x01
#define HCI_ADV_RPT_PHY_SEC_LE_2M 0x02
#define HCI_ADV_RPT_PHY_SEC_LE_CODED 0x03






#define HCI_CH_SEL_ALGO_1 0x00
#define HCI_CH_SEL_ALGO_2 0x01






#define HCI_PRIVATE_KEY_GENERATED 0x00
#define HCI_PRIVATE_KEY_DEBUG 0x01







#define HCI_MIN_NUM_OF_USED_CHAN 8






#define HCI_SYNC_MIN_TIMEOUT 0x000A
#define HCI_SYNC_MAX_TIMEOUT 0x4000






#define HCI_SYNC_MAX_SKIP 0x01F3






#define HCI_SYNC_MAX_HANDLE 0x0EFF






#define HCI_SYNC_TRSF_MODE_OFF 0x00
#define HCI_SYNC_TRSF_MODE_REP_DISABLED 0x01,
#define HCI_SYNC_TRSF_MODE_REP_ENABLED 0x02,






#define HCI_OPTIONS_FILT_POLICY_BIT (1<<0)
#define HCI_OPTIONS_INIT_RPT_ENABLE_BIT (1<<1)






#define HCI_READ_TX_PWR_CURRENT 0
#define HCI_READ_TX_PWR_MAX 1
#define HCI_TX_PWR_MIN -30
#define HCI_TX_PWR_MAX 20
#define HCI_TX_PWR_NO_PREFERENCE 127
#define HCI_VERSION 6
#define HCI_RSSI_MIN -127
#define HCI_RSSI_MAX 20
#define HCI_ADDR_TYPE_PUBLIC 0
#define HCI_ADDR_TYPE_RANDOM 1
#define HCI_ADDR_TYPE_PUBLIC_IDENTITY 2
#define HCI_ADDR_TYPE_RANDOM_IDENTITY 3
#define HCI_ADDR_TYPE_ANONYMOUS 0xFF
#define HCI_FILT_NONE 0
#define HCI_FILT_WHITE_LIST 1
#define HCI_FILT_RES_INIT 2
#define HCI_FILT_WHITE_LIST_RES_INIT 3
#define HCI_FILT_PER_ADV_PARAM 0
#define HCI_FILT_PER_ADV_LIST 1
#define HCI_ROLE_MASTER 0
#define HCI_ROLE_SLAVE 1
#define HCI_PRIV_MODE_NETWORK 0x00
#define HCI_PRIV_MODE_DEVICE 0x01






#define HCI_PHY_NONE 0x00
#define HCI_PHY_LE_1M_BIT (1<<0)
#define HCI_PHY_LE_2M_BIT (1<<1)
#define HCI_PHY_LE_CODED_BIT (1<<2)






#define HCI_ALL_PHY_ALL_PREFERENCES 0x00
#define HCI_ALL_PHY_TX_PREFERENCE_BIT (1<<0)
#define HCI_ALL_PHY_RX_PREFERENCE_BIT (1<<1)






#define HCI_PHY_OPTIONS_NONE 0x00
#define HCI_PHY_OPTIONS_S2_PREFERRED 0x01
#define HCI_PHY_OPTIONS_S8_PREFERRED 0x02






#define HCI_CTE_SLOT_DURATION_NONE 0x00
#define HCI_CTE_SLOT_DURATION_1_US 0x01
#define HCI_CTE_SLOT_DURATION_2_US 0x02






#define HCI_CTE_TYPE_PERMIT_AOA_RSP_BIT (1<<0)
#define HCI_CTE_TYPE_PERMIT_AOD_RSP_1_US_BIT (1<<1)
#define HCI_CTE_TYPE_PERMIT_AOD_RSP_2_US_BIT (1<<2)






#define HCI_CTE_TYPE_REQ_AOA 0x00
#define HCI_CTE_TYPE_REQ_AOD_1_US 0x01
#define HCI_CTE_TYPE_REQ_AOD_2_US 0x02






#define HCI_VER_BT_CORE_SPEC_4_0 0x06
#define HCI_VER_BT_CORE_SPEC_4_1 0x07
#define HCI_VER_BT_CORE_SPEC_4_2 0x08
#define HCI_VER_BT_CORE_SPEC_5_0 0x09
#define HCI_VER_BT_CORE_SPEC_5_1 0x0A






#define HCI_EVT_MASK_LEN 8
#define HCI_EVT_MASK_PAGE_2_LEN 8
#define HCI_LE_EVT_MASK_LEN 8
#define HCI_FEAT_LEN 8
#define HCI_ADV_DATA_LEN 31
#define HCI_SCAN_DATA_LEN 31
#define HCI_EXT_ADV_DATA_LEN 251
#define HCI_EXT_ADV_CONN_DATA_LEN 191

#define HCI_PER_ADV_DATA_LEN 252
#define HCI_EXT_ADV_RPT_DATA_LEN 229
#define HCI_PER_ADV_RPT_DATA_LEN 247
#define HCI_CHAN_MAP_LEN 5
#define HCI_KEY_LEN 16
#define HCI_ENCRYPT_DATA_LEN 16
#define HCI_RAND_LEN 8
#define HCI_LE_STATES_LEN 8
#define HCI_P256_KEY_LEN 64
#define HCI_DH_KEY_LEN 32

#define HCI_EXT_ADV_RPT_DATA_LEN_OFFSET 23
#define HCI_PER_ADV_RPT_DATA_LEN_OFFSET 6






#define HCI_MIN_NUM_ANTENNA_IDS 2
#define HCI_MAX_NUM_ANTENNA_IDS 75






#define HCI_IQ_RPT_SAMPLE_CNT_MIN 9
#define HCI_IQ_RPT_SAMPLE_CNT_MAX 82

#define HCI_CONN_IQ_RPT_SAMPLE_CNT_OFFSET 12






#define HCI_ID_ARM 0x005F






#define HCI_LOCAL_VER_MANUFACTURER_POS 4
# 29 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h" 1
# 30 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h" 1
# 31 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h" 2
# 49 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
#define HCI_RESET_SEQ_CMPL_CBACK_EVT 0
#define HCI_LE_CONN_CMPL_CBACK_EVT 1
#define HCI_LE_ENHANCED_CONN_CMPL_CBACK_EVT 2
#define HCI_DISCONNECT_CMPL_CBACK_EVT 3
#define HCI_LE_CONN_UPDATE_CMPL_CBACK_EVT 4
#define HCI_LE_CREATE_CONN_CANCEL_CMD_CMPL_CBACK_EVT 5
#define HCI_LE_ADV_REPORT_CBACK_EVT 6
#define HCI_READ_RSSI_CMD_CMPL_CBACK_EVT 7
#define HCI_LE_READ_CHAN_MAP_CMD_CMPL_CBACK_EVT 8
#define HCI_READ_TX_PWR_LVL_CMD_CMPL_CBACK_EVT 9
#define HCI_READ_REMOTE_VER_INFO_CMPL_CBACK_EVT 10
#define HCI_LE_READ_REMOTE_FEAT_CMPL_CBACK_EVT 11
#define HCI_LE_LTK_REQ_REPL_CMD_CMPL_CBACK_EVT 12
#define HCI_LE_LTK_REQ_NEG_REPL_CMD_CMPL_CBACK_EVT 13
#define HCI_ENC_KEY_REFRESH_CMPL_CBACK_EVT 14
#define HCI_ENC_CHANGE_CBACK_EVT 15
#define HCI_LE_LTK_REQ_CBACK_EVT 16
#define HCI_VENDOR_SPEC_CMD_STATUS_CBACK_EVT 17
#define HCI_VENDOR_SPEC_CMD_CMPL_CBACK_EVT 18
#define HCI_VENDOR_SPEC_CBACK_EVT 19
#define HCI_HW_ERROR_CBACK_EVT 20
#define HCI_LE_ADD_DEV_TO_RES_LIST_CMD_CMPL_CBACK_EVT 21
#define HCI_LE_REM_DEV_FROM_RES_LIST_CMD_CMPL_CBACK_EVT 22
#define HCI_LE_CLEAR_RES_LIST_CMD_CMPL_CBACK_EVT 23
#define HCI_LE_READ_PEER_RES_ADDR_CMD_CMPL_CBACK_EVT 24
#define HCI_LE_READ_LOCAL_RES_ADDR_CMD_CMPL_CBACK_EVT 25
#define HCI_LE_SET_ADDR_RES_ENABLE_CMD_CMPL_CBACK_EVT 26
#define HCI_LE_ENCRYPT_CMD_CMPL_CBACK_EVT 27
#define HCI_LE_RAND_CMD_CMPL_CBACK_EVT 28
#define HCI_LE_REM_CONN_PARAM_REP_CMD_CMPL_CBACK_EVT 29
#define HCI_LE_REM_CONN_PARAM_NEG_REP_CMD_CMPL_CBACK_EVT 30
#define HCI_LE_READ_DEF_DATA_LEN_CMD_CMPL_CBACK_EVT 31
#define HCI_LE_WRITE_DEF_DATA_LEN_CMD_CMPL_CBACK_EVT 32
#define HCI_LE_SET_DATA_LEN_CMD_CMPL_CBACK_EVT 33
#define HCI_LE_READ_MAX_DATA_LEN_CMD_CMPL_CBACK_EVT 34
#define HCI_LE_REM_CONN_PARAM_REQ_CBACK_EVT 35
#define HCI_LE_DATA_LEN_CHANGE_CBACK_EVT 36
#define HCI_LE_READ_LOCAL_P256_PUB_KEY_CMPL_CBACK_EVT 37
#define HCI_LE_GENERATE_DHKEY_CMPL_CBACK_EVT 38
#define HCI_WRITE_AUTH_PAYLOAD_TO_CMD_CMPL_CBACK_EVT 39
#define HCI_AUTH_PAYLOAD_TO_EXPIRED_CBACK_EVT 40
#define HCI_LE_READ_PHY_CMD_CMPL_CBACK_EVT 41
#define HCI_LE_SET_DEF_PHY_CMD_CMPL_CBACK_EVT 42
#define HCI_LE_PHY_UPDATE_CMPL_CBACK_EVT 43
#define HCI_LE_EXT_ADV_REPORT_CBACK_EVT 44
#define HCI_LE_SCAN_TIMEOUT_CBACK_EVT 45
#define HCI_LE_ADV_SET_TERM_CBACK_EVT 46
#define HCI_LE_SCAN_REQ_RCVD_CBACK_EVT 47
#define HCI_LE_PER_ADV_SYNC_EST_CBACK_EVT 48
#define HCI_LE_PER_ADV_REPORT_CBACK_EVT 49
#define HCI_LE_PER_ADV_SYNC_LOST_CBACK_EVT 50
#define HCI_LE_CH_SEL_ALGO_CBACK_EVT 51
#define HCI_LE_SCAN_ENABLE_CMD_CMPL_CBACK_EVT 52
#define HCI_LE_ADV_ENABLE_CMD_CMPL_CBACK_EVT 53
#define HCI_LE_EXT_SCAN_ENABLE_CMD_CMPL_CBACK_EVT 54
#define HCI_LE_EXT_ADV_ENABLE_CMD_CMPL_CBACK_EVT 55
#define HCI_LE_PER_ADV_ENABLE_CMD_CMPL_CBACK_EVT 56
#define HCI_LE_SET_RAND_ADDR_CMD_CMPL_CBACK_EVT 57
#define HCI_LE_PER_SYNC_TRSF_RCVD_CBACK_EVT 58
#define HCI_LE_PER_ADV_SYNC_TRSF_CMD_CMPL_CBACK_EVT 59
#define HCI_LE_PER_ADV_SET_INFO_TRSF_CMD_CMPL_CBACK_EVT 60
#define HCI_LE_CONN_IQ_REPORT_CBACK_EVT 61
#define HCI_LE_CTE_REQ_FAILED_CBACK_EVT 62
#define HCI_LE_SET_CONN_CTE_RX_PARAMS_CMD_CMPL_CBACK_EVT 63
#define HCI_LE_SET_CONN_CTE_TX_PARAMS_CMD_CMPL_CBACK_EVT 64
#define HCI_LE_CONN_CTE_REQ_ENABLE_CMD_CMPL_CBACK_EVT 65
#define HCI_LE_CONN_CTE_RSP_ENABLE_CMD_CMPL_CBACK_EVT 66
#define HCI_LE_READ_ANTENNA_INFO_CMD_CMPL_CBACK_EVT 67
#define HCI_CIS_EST_CBACK_EVT 68
#define HCI_CIS_REQ_CBACK_EVT 69
#define HCI_REQ_PEER_SCA_CBACK_EVT 70
#define HCI_LE_CONNLESS_IQ_REPORT_CBACK_EVT 71







typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t role;
  uint8_t addrType;
  bdAddr_t peerAddr;
  uint16_t connInterval;
  uint16_t connLatency;
  uint16_t supTimeout;
  uint8_t clockAccuracy;


  bdAddr_t localRpa;
  bdAddr_t peerRpa;
} hciLeConnCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t reason;
} hciDisconnectCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint16_t connInterval;
  uint16_t connLatency;
  uint16_t supTimeout;
} hciLeConnUpdateCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeCreateConnCancelCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t *pData;
  uint8_t len;
  int8_t rssi;
  uint8_t eventType;
  uint8_t addrType;
  bdAddr_t addr;


  uint8_t directAddrType;
  bdAddr_t directAddr;
} hciLeAdvReportEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t eventType;
  uint8_t addrType;
  bdAddr_t addr;
  uint8_t priPhy;
  uint8_t secPhy;
  uint8_t advSid;
  int8_t txPower;
  int8_t rssi;
  int16_t perAdvInter;
  uint8_t directAddrType;
  bdAddr_t directAddr;
  uint16_t len;
  uint8_t *pData;
} hciLeExtAdvReportEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
} hciLeScanTimeoutEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t advHandle;
  uint16_t handle;
  uint8_t numComplEvts;
} hciLeAdvSetTermEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t advHandle;
  uint8_t scanAddrType;
  bdAddr_t scanAddr;
} hciLeScanReqRcvdEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t syncHandle;
  uint8_t advSid;
  uint8_t advAddrType;
  bdAddr_t advAddr;
  uint8_t advPhy;
  uint16_t perAdvInterval;
  uint8_t clockAccuracy;
} hciLePerAdvSyncEstEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t syncHandle;
  uint8_t txPower;
  uint8_t rssi;
  uint8_t unused;
  uint8_t status;
  uint16_t len;
  uint8_t *pData;
} hciLePerAdvReportEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t syncHandle;
} hciLePerAdvSyncLostEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t connHandle;
  uint16_t serviceData;
  uint16_t syncHandle;
  uint8_t advSid;
  uint8_t advAddrType;
  bdAddr_t advAddr;
  uint8_t advPhy;
  uint16_t perAdvInterval;
  uint8_t clockAccuracy;
} HciLePerAdvSyncTrsfRcvdEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t handle;
  uint8_t chSelAlgo;
} hciLeChSelAlgoEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  int8_t rssi;
} hciReadRssiCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t chanMap[5];
} hciReadChanMapCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t handle;
  int8_t pwrLvl;
} hciReadTxPwrLvlCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t version;
  uint16_t mfrName;
  uint16_t subversion;
} hciReadRemoteVerInfoCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t features[8];
} hciLeReadRemoteFeatCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeLtkReqReplCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeLtkReqNegReplCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciEncKeyRefreshCmpl_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t enabled;
} hciEncChangeEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t handle;
  uint8_t randNum[8];
  uint16_t encDiversifier;
} hciLeLtkReqEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t opcode;
} hciVendorSpecCmdStatusEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t opcode;
  uint8_t param[1];
} hciVendorSpecCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t param[1];
} hciVendorSpecEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t code;
} hciHwErrorEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t data[16];
} hciLeEncryptCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t randNum[8];
} hciLeRandCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeRemConnParamRepEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeRemConnParamNegRepEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t suggestedMaxTxOctets;
  uint16_t suggestedMaxTxTime;
} hciLeReadDefDataLenEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeWriteDefDataLenEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeSetDataLenEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t supportedMaxTxOctets;
  uint16_t supportedMaxTxTime;
  uint16_t supportedMaxRxOctets;
  uint16_t supportedMaxRxTime;
} hciLeReadMaxDataLenEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t handle;
  uint16_t intervalMin;
  uint16_t intervalMax;
  uint16_t latency;
  uint16_t timeout;
} hciLeRemConnParamReqEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t handle;
  uint16_t maxTxOctets;
  uint16_t maxTxTime;
  uint16_t maxRxOctets;
  uint16_t maxRxTime;
} hciLeDataLenChangeEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t key[64];
} hciLeP256CmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t key[32];
} hciLeGenDhKeyEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t peerRpa[6];
} hciLeReadPeerResAddrCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t localRpa[6];
} hciLeReadLocalResAddrCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeSetAddrResEnableCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeAddDevToResListCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeRemDevFromResListCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeClearResListCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciWriteAuthPayloadToCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t handle;
} hciAuthPayloadToExpiredEvt_t;


  typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t txPhy;
  uint8_t rxPhy;
} hciLeReadPhyCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeSetDefPhyCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t txPhy;
  uint8_t rxPhy;
} hciLePhyUpdateEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLePerAdvSyncTrsfCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLePerAdvSetInfoTrsfCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t handle;
  uint8_t rxPhy;
  uint8_t dataChIdx;
  int16_t rssi;
  uint8_t rssiAntennaId;
  uint8_t cteType;
  uint8_t slotDurations;
  uint8_t pktStatus;
  uint16_t connEvtCnt;
  uint8_t sampleCnt;
  int8_t *pISample;
  int8_t *pQSample;
} hciLeConnIQReportEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t synHdl;
  uint8_t chIdx;
  int16_t rssi;
  uint8_t rssiAntennaId;
  uint8_t cteType;
  uint8_t slotDurations;
  uint8_t pktStatus;
  uint16_t paEvtCnt;
  uint8_t sampleCnt;
  int8_t *pISample;
  int8_t *pQSample;
} hciLeConlessIQReportEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeCteReqFailedEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeSetConnCteRxParamsCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeSetConnCteTxParamsCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeConnCteReqEnableCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeConnCteRspEnableCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t switchSampleRates;
  uint8_t numAntennae;
  uint8_t switchPatternMaxLen;
  uint8_t cteMaxLen;
} hciLeReadAntennaInfoCmdCmplEvt_t;


typedef struct
{
  uint8_t hciVersion;
  uint16_t hciRevision;
  uint8_t lmpVersion;
  uint16_t manufacturerName;
  uint16_t lmpSubversion;
} hciLocalVerInfo_t;


typedef union
{
  wsfMsgHdr_t hdr;
  wsfMsgHdr_t resetSeqCmpl;
  hciLeConnCmplEvt_t leConnCmpl;
  hciDisconnectCmplEvt_t disconnectCmpl;
  hciLeConnUpdateCmplEvt_t leConnUpdateCmpl;
  hciLeCreateConnCancelCmdCmplEvt_t leCreateConnCancelCmdCmpl;
  hciLeAdvReportEvt_t leAdvReport;
  hciReadRssiCmdCmplEvt_t readRssiCmdCmpl;
  hciReadChanMapCmdCmplEvt_t readChanMapCmdCmpl;
  hciReadTxPwrLvlCmdCmplEvt_t readTxPwrLvlCmdCmpl;
  hciReadRemoteVerInfoCmplEvt_t readRemoteVerInfoCmpl;
  hciLeReadRemoteFeatCmplEvt_t leReadRemoteFeatCmpl;
  hciLeLtkReqReplCmdCmplEvt_t leLtkReqReplCmdCmpl;
  hciLeLtkReqNegReplCmdCmplEvt_t leLtkReqNegReplCmdCmpl;
  hciEncKeyRefreshCmpl_t encKeyRefreshCmpl;
  hciEncChangeEvt_t encChange;
  hciLeLtkReqEvt_t leLtkReq;
  hciVendorSpecCmdStatusEvt_t vendorSpecCmdStatus;
  hciVendorSpecCmdCmplEvt_t vendorSpecCmdCmpl;
  hciVendorSpecEvt_t vendorSpec;
  hciHwErrorEvt_t hwError;
  hciLeEncryptCmdCmplEvt_t leEncryptCmdCmpl;
  hciLeRandCmdCmplEvt_t leRandCmdCmpl;
  hciLeReadPeerResAddrCmdCmplEvt_t leReadPeerResAddrCmdCmpl;
  hciLeReadLocalResAddrCmdCmplEvt_t leReadLocalResAddrCmdCmpl;
  hciLeSetAddrResEnableCmdCmplEvt_t leSetAddrResEnableCmdCmpl;
  hciLeAddDevToResListCmdCmplEvt_t leAddDevToResListCmdCmpl;
  hciLeRemDevFromResListCmdCmplEvt_t leRemDevFromResListCmdCmpl;
  hciLeClearResListCmdCmplEvt_t leClearResListCmdCmpl;
  hciLeRemConnParamRepEvt_t leRemConnParamRepCmdCmpl;
  hciLeRemConnParamNegRepEvt_t leRemConnParamNegRepCmdCmpl;
  hciLeReadDefDataLenEvt_t leReadDefDataLenCmdCmpl;
  hciLeWriteDefDataLenEvt_t leWriteDefDataLenCmdCmpl;
  hciLeSetDataLenEvt_t leSetDataLenCmdCmpl;
  hciLeReadMaxDataLenEvt_t leReadMaxDataLenCmdCmpl;
  hciLeRemConnParamReqEvt_t leRemConnParamReq;
  hciLeDataLenChangeEvt_t leDataLenChange;
  hciLeP256CmplEvt_t leP256;
  hciLeGenDhKeyEvt_t leGenDHKey;
  hciWriteAuthPayloadToCmdCmplEvt_t writeAuthPayloadToCmdCmpl;
  hciAuthPayloadToExpiredEvt_t authPayloadToExpired;
  hciLeReadPhyCmdCmplEvt_t leReadPhyCmdCmpl;
  hciLeSetDefPhyCmdCmplEvt_t leSetDefPhyCmdCmpl;
  hciLePhyUpdateEvt_t lePhyUpdate;
  hciLeExtAdvReportEvt_t leExtAdvReport;
  hciLeScanTimeoutEvt_t leScanTimeout;
  hciLeAdvSetTermEvt_t leAdvSetTerm;
  hciLeScanReqRcvdEvt_t leScanReqRcvd;
  hciLePerAdvSyncEstEvt_t lePerAdvSyncEst;
  hciLePerAdvReportEvt_t lePerAdvReport;
  hciLePerAdvSyncLostEvt_t lePerAdvSyncLost;
  hciLeChSelAlgoEvt_t leChSelAlgo;
  HciLePerAdvSyncTrsfRcvdEvt_t lePerAdvSyncTrsfRcvd;
  hciLePerAdvSyncTrsfCmdCmplEvt_t lePerAdvSyncTrsfCmdCmpl;
  hciLePerAdvSetInfoTrsfCmdCmplEvt_t lePerAdvSetInfoTrsfCmdCmpl;
  hciLeConnIQReportEvt_t leConnIQReport;
  hciLeCteReqFailedEvt_t leCteReqFailed;
  hciLeSetConnCteRxParamsCmdCmplEvt_t leSetConnCteRxParamsCmdCmpl;
  hciLeSetConnCteTxParamsCmdCmplEvt_t leSetConnCteTxParamsCmdCmpl;
  hciLeConnCteReqEnableCmdCmplEvt_t leConnCteReqEnableCmdCmpl;
  hciLeConnCteRspEnableCmdCmplEvt_t leConnCteRspEnableCmdCmpl;
  hciLeReadAntennaInfoCmdCmplEvt_t leReadAntennaInfoCmdCmpl;
} hciEvt_t;







typedef struct
{
  uint16_t connIntervalMin;
  uint16_t connIntervalMax;
  uint16_t connLatency;
  uint16_t supTimeout;
  uint16_t minCeLen;
  uint16_t maxCeLen;
} hciConnSpec_t;


typedef struct
{
  uint8_t filterPolicy;
  uint8_t ownAddrType;
  uint8_t peerAddrType;
  const uint8_t *pPeerAddr;
  uint8_t initPhys;
} hciExtInitParam_t;


typedef struct
{
  uint16_t scanInterval;
  uint16_t scanWindow;
} hciExtInitScanParam_t;


typedef struct
{
  uint16_t advEventProp;
  uint32_t priAdvInterMin;
  uint32_t priAdvInterMax;
  uint8_t priAdvChanMap;
  uint8_t ownAddrType;
  uint8_t peerAddrType;
  uint8_t *pPeerAddr;
  uint8_t advFiltPolicy;
  int8_t advTxPwr;
  uint8_t priAdvPhy;
  uint8_t secAdvMaxSkip;
  uint8_t secAdvPhy;
  uint8_t advSetId;
  uint8_t scanReqNotifEna;
} hciExtAdvParam_t;


typedef struct
{
  uint8_t advHandle;
  uint16_t duration;
  uint8_t maxEaEvents;
} hciExtAdvEnableParam_t;


typedef struct
{
  uint16_t scanInterval;
  uint16_t scanWindow;
  uint8_t scanType;
} hciExtScanParam_t;


#define MAX_SWITCHING_PATTERN_LEN (0x4B)


typedef struct
{

    uint8_t rx_channel;

    uint8_t phy;

    uint8_t mod_idx;

    uint8_t exp_cte_len;

    uint8_t exp_cte_type;

    uint8_t slot_dur;

    uint8_t switching_pattern_len;

    uint8_t antenna_id[(0x4B)];
}hciLeRxTestV3Cmd_t;


typedef struct
{

    uint8_t tx_channel;

    uint8_t test_data_len;

    uint8_t pkt_payl;

    uint8_t phy;

    uint8_t cte_len;

    uint8_t cte_type;

    uint8_t switching_pattern_len;

    uint8_t antenna_id[(0x4B)];
}hciLeTxTestV3Cmd_t;
# 909 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
typedef void (*hciEvtCback_t)(hciEvt_t *pEvent);
# 921 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
typedef void (*hciSecCback_t)(hciEvt_t *pEvent);
# 936 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
typedef void (*hciAclCback_t)(uint8_t *pData);
# 947 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
typedef void (*hciFlowCback_t)(uint16_t handle, bool_t flowDisabled);
# 971 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciEvtRegister(hciEvtCback_t evtCback);
# 982 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSecRegister(hciSecCback_t secCback);
# 994 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciAclRegister(hciAclCback_t aclCback, hciFlowCback_t flowCback);
# 1003 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciResetSequence(void);
# 1014 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciVsInit(uint8_t param);
# 1023 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciCoreInit(void);
# 1035 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciCoreHandler(wsfEventMask_t event, wsfMsgHdr_t *pMsg);
# 1046 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSetMaxRxAclLen(uint16_t len);
# 1058 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSetAclQueueWatermarks(uint8_t queueHi, uint8_t queueLo);
# 1070 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSetLeSupFeat(uint32_t feat, bool_t flag);
# 1082 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciVsAeInit(uint8_t param);
# 1103 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t *HciGetBdAddr(void);
# 1112 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t HciGetWhiteListSize(void);
# 1121 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
int8_t HciGetAdvTxPwr(void);
# 1130 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint16_t HciGetBufSize(void);
# 1139 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t HciGetNumBufs(void);
# 1148 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t *HciGetSupStates(void);
# 1157 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint32_t HciGetLeSupFeat(void);
# 1166 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint16_t HciGetMaxRxAclLen(void);
# 1175 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t HciGetResolvingListSize(void);
# 1184 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
bool_t HciLlPrivacySupported(void);
# 1193 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint16_t HciGetMaxAdvDataLen(void);
# 1202 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t HciGetNumSupAdvSets(void);
# 1211 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
bool_t HciLeAdvExtSupported(void);
# 1220 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t HciGetPerAdvListSize(void);
# 1229 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
hciLocalVerInfo_t *HciGetLocalVerInfo(void);
# 1251 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSendAclData(uint8_t *pAclData);
# 1273 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciDisconnectCmd(uint16_t handle, uint8_t reason);
# 1285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeAddDevWhiteListCmd(uint8_t addrType, uint8_t *pAddr);
# 1294 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeClearWhiteListCmd(void);
# 1306 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeConnUpdateCmd(uint16_t handle, hciConnSpec_t *pConnSpec);
# 1323 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeCreateConnCmd(uint16_t scanInterval, uint16_t scanWindow, uint8_t filterPolicy,
                        uint8_t peerAddrType, uint8_t *pPeerAddr, uint8_t ownAddrType,
                        hciConnSpec_t *pConnSpec);
# 1334 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeCreateConnCancelCmd(void);
# 1346 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeEncryptCmd(uint8_t *pKey, uint8_t *pData);
# 1357 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeLtkReqNegReplCmd(uint16_t handle);
# 1369 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeLtkReqReplCmd(uint16_t handle, uint8_t *pKey);
# 1378 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRandCmd(void);
# 1387 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadAdvTXPowerCmd(void);
# 1396 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadBufSizeCmd(void);
# 1407 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadChanMapCmd(uint16_t handle);
# 1416 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadLocalSupFeatCmd(void);
# 1427 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadRemoteFeatCmd(uint16_t handle);
# 1436 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadSupStatesCmd(void);
# 1445 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadWhiteListSizeCmd(void);
# 1457 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRemoveDevWhiteListCmd(uint8_t addrType, uint8_t *pAddr);
# 1468 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetAdvEnableCmd(uint8_t enable);
# 1480 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetAdvDataCmd(uint8_t len, uint8_t *pData);
# 1498 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetAdvParamCmd(uint16_t advIntervalMin, uint16_t advIntervalMax, uint8_t advType,
                         uint8_t ownAddrType, uint8_t peerAddrType, uint8_t *pPeerAddr,
                         uint8_t advChanMap, uint8_t advFiltPolicy);
# 1511 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetEventMaskCmd(uint8_t *pLeEventMask);
# 1522 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetHostChanClassCmd(uint8_t *pChanMap);
# 1533 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetRandAddrCmd(uint8_t *pAddr);
# 1545 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetScanEnableCmd(uint8_t enable, uint8_t filterDup);
# 1560 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetScanParamCmd(uint8_t scanType, uint16_t scanInterval, uint16_t scanWindow,
                          uint8_t ownAddrType, uint8_t scanFiltPolicy);
# 1573 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetScanRespDataCmd(uint8_t len, uint8_t *pData);
# 1587 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeStartEncryptionCmd(uint16_t handle, uint8_t *pRand, uint16_t diversifier, uint8_t *pKey);
# 1596 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadBdAddrCmd(void);
# 1605 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadBufSizeCmd(void);
# 1614 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadLocalSupFeatCmd(void);
# 1623 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadLocalVerInfoCmd(void);
# 1634 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadRemoteVerInfoCmd(uint16_t handle);
# 1645 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadRssiCmd(uint16_t handle);
# 1657 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadTxPwrLvlCmd(uint16_t handle, uint8_t type);
# 1666 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciResetCmd(void);
# 1677 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSetEventMaskCmd(uint8_t *pEventMask);
# 1687 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSetEventMaskPage2Cmd(uint8_t *pEventMask);
# 1698 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadAuthPayloadTimeout(uint16_t handle);
# 1710 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciWriteAuthPayloadTimeout(uint16_t handle, uint16_t timeout);
# 1724 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeAddDeviceToResolvingListCmd(uint8_t peerAddrType, const uint8_t *pPeerIdentityAddr,
                                      const uint8_t *pPeerIrk, const uint8_t *pLocalIrk);
# 1737 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRemoveDeviceFromResolvingList(uint8_t peerAddrType, const uint8_t *pPeerIdentityAddr);
# 1746 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeClearResolvingList(void);
# 1755 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadResolvingListSize(void);
# 1767 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadPeerResolvableAddr(uint8_t addrType, const uint8_t *pIdentityAddr);
# 1779 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadLocalResolvableAddr(uint8_t addrType, const uint8_t *pIdentityAddr);
# 1791 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetAddrResolutionEnable(uint8_t enable);
# 1802 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetResolvablePrivateAddrTimeout(uint16_t rpaTimeout);
# 1815 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPrivacyModeCmd(uint8_t addrType, uint8_t *pAddr, uint8_t mode);
# 1826 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadPhyCmd(uint16_t handle);
# 1839 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetDefaultPhyCmd(uint8_t allPhys, uint8_t txPhys, uint8_t rxPhys);
# 1854 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPhyCmd(uint16_t handle, uint8_t allPhys, uint8_t txPhys, uint8_t rxPhys, uint16_t phyOptions);
# 1867 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciVendorSpecificCmd(uint16_t opcode, uint8_t len, uint8_t *pData);
# 1884 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRemoteConnParamReqReply(uint16_t handle, uint16_t intervalMin, uint16_t intervalMax, uint16_t latency,
                                  uint16_t timeout, uint16_t minCeLen, uint16_t maxCeLen);
# 1897 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRemoteConnParamReqNegReply(uint16_t handle, uint8_t reason);
# 1910 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetDataLen(uint16_t handle, uint16_t txOctets, uint16_t txTime);
# 1919 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadDefDataLen(void);
# 1932 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeWriteDefDataLen(uint16_t suggestedMaxTxOctets, uint16_t suggestedMaxTxTime);
# 1941 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadLocalP256PubKey(void);
# 1953 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeGenerateDHKey(uint8_t *pPubKeyX, uint8_t *pPubKeyY);
# 1966 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeGenerateDHKeyV2(uint8_t *pPubKeyX, uint8_t *pPubKeyY, uint8_t keyType);
# 1975 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadMaxDataLen(void);
# 1987 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciWriteAuthPayloadTimeout(uint16_t handle, uint16_t timeout);
# 1996 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadTxPower(void);
# 2005 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadRfPathComp(void);
# 2017 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeWriteRfPathComp(int16_t txPathComp, int16_t rxPathComp);
# 2034 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetAdvSetRandAddrCmd(uint8_t advHandle, const uint8_t *pAddr);
# 2046 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetExtAdvParamCmd(uint8_t advHandle, hciExtAdvParam_t *pExtAdvParam);
# 2061 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetExtAdvDataCmd(uint8_t advHandle, uint8_t op, uint8_t fragPref, uint8_t len,
                           const uint8_t *pData);
# 2077 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetExtScanRespDataCmd(uint8_t advHandle, uint8_t op, uint8_t fragPref, uint8_t len,
                                const uint8_t *pData);
# 2091 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetExtAdvEnableCmd(uint8_t enable, uint8_t numSets, hciExtAdvEnableParam_t *pEnableParam);
# 2100 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadMaxAdvDataLen(void);
# 2109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadNumSupAdvSets(void);
# 2120 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRemoveAdvSet(uint8_t advHandle);
# 2129 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeClearAdvSets(void);
# 2143 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPerAdvParamCmd(uint8_t advHandle, uint16_t advIntervalMin, uint16_t advIntervalMax,
                            uint16_t advProps);
# 2158 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPerAdvDataCmd(uint8_t advHandle, uint8_t op, uint8_t len, const uint8_t *pData);
# 2170 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPerAdvEnableCmd(uint8_t enable, uint8_t advHandle);
# 2189 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetExtScanParamCmd(uint8_t ownAddrType, uint8_t scanFiltPolicy, uint8_t scanPhys,
                             hciExtScanParam_t *pScanParam);
# 2204 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeExtScanEnableCmd(uint8_t enable, uint8_t filterDup, uint16_t duration, uint16_t period);
# 2217 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeExtCreateConnCmd(hciExtInitParam_t *pInitParam, hciExtInitScanParam_t *pScanParam,
                           hciConnSpec_t *pConnSpec);
# 2236 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLePerAdvCreateSyncCmd(uint8_t options, uint8_t advSid, uint8_t advAddrType,
                              uint8_t *pAdvAddr, uint16_t skip, uint16_t syncTimeout, uint8_t unused);
# 2246 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLePerAdvCreateSyncCancelCmd(void);
# 2257 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLePerAdvTerminateSyncCmd(uint16_t syncHandle);
# 2270 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeAddDeviceToPerAdvListCmd(uint8_t advAddrType, uint8_t *pAdvAddr, uint8_t advSid);
# 2283 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRemoveDeviceFromPerAdvListCmd(uint8_t advAddrType, uint8_t *pAdvAddr, uint8_t advSid);
# 2292 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeClearPerAdvListCmd(void);
# 2301 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadPerAdvListSizeCmd(void);
# 2313 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPerAdvRcvEnableCmd(uint16_t syncHandle, uint8_t enable);
# 2326 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLePerAdvSyncTrsfCmd(uint16_t connHandle, uint16_t serviceData, uint16_t syncHandle);
# 2339 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLePerAdvSetInfoTrsfCmd(uint16_t connHandle, uint16_t serviceData, uint8_t advHandle);
# 2355 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPerAdvSyncTrsfParamsCmd(uint16_t connHandle, uint8_t mode, uint16_t skip,
                                     uint16_t syncTimeout, uint8_t cteType);
# 2371 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetDefaultPerAdvSyncTrsfParamsCmd(uint8_t mode, uint16_t skip, uint16_t syncTimeout,
                                            uint8_t cteType);
# 2387 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetConnCteRxParamsCmd(uint16_t connHandle, uint8_t samplingEnable, uint8_t slotDurations,
                                uint8_t switchPatternLen, uint8_t *pAntennaIDs);
# 2402 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetConnCteTxParamsCmd(uint16_t connHandle, uint8_t cteTypeBits, uint8_t switchPatternLen,
                                uint8_t *pAntennaIDs);
# 2418 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeConnCteReqEnableCmd(uint16_t connHandle, uint8_t enable, uint16_t cteReqInt,
                              uint8_t reqCteLen, uint8_t reqCteType);
# 2431 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeConnCteRspEnableCmd(uint16_t connHandle, uint8_t enable);
# 2448 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetConlessIQSampleEnCmd(uint16_t syncHandle, uint8_t samplingEnable, uint8_t slotDurations,
                                uint8_t maxSampleCte,uint8_t switchPatternLen, uint8_t *pAntennaIDs);
# 2458 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadAntennaInfoCmd(void);
# 2470 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReceiverTestCmd(uint8_t RX_Channel);
# 2483 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeTransmitterTestCmd(uint8_t TX_Channel, uint8_t len_of_test_data, uint8_t packet_payload);
# 2494 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeTestEndCmd(void);
void HciLeReceiverTestCmdV3(hciLeRxTestV3Cmd_t *rx_test_v3);
void HciLeTransmitterTestCmdV3(hciLeTxTestV3Cmd_t *tx_test_v3);
# 2509 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciVendorSpecificCmd(uint16_t opcode, uint8_t len, uint8_t *pData);
# 28 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define CFG_STACK_H 
# 40 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define STACK_VERSION ((const char *)"r19.02\n")

#define STACK_VER_NUM 0x1302
# 52 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define HCI_VS_GENERIC 0
#define HCI_VS_EMM 1



#define HCI_VS_TARGET HCI_VS_GENERIC
# 67 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define HCI_TX_DATA_TAILROOM 0
# 81 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define DM_CONN_MAX 3




#define DM_SYNC_MAX 1




#define DM_NUM_ADV_SETS 2




#define DM_NUM_PHYS 2
# 110 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define L2C_COC_CHAN_MAX 8




#define L2C_COC_REG_MAX 4
# 129 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define ATT_NUM_SIMUL_WRITE_CMD 1




#define ATT_NUM_SIMUL_NTF 1
# 148 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define SMP_DB_MAX_DEVICES 3
# 161 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
void StackGetVersionNumber(const char **pVersion);
# 29 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_defs.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_defs.h"
#define SMP_DEFS_H 
# 39 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_defs.h"
#define SMP_HDR_LEN 1


#define SMP_TIMEOUT 30





#define SMP_KEY_SIZE_MAX 16
#define SMP_KEY_SIZE_MIN 7


#define SMP_OOB_LEN 16
#define SMP_PIN_LEN 3





#define SMP_ERR_PASSKEY_ENTRY 0x01
#define SMP_ERR_OOB 0x02
#define SMP_ERR_AUTH_REQ 0x03
#define SMP_ERR_CONFIRM_VALUE 0x04
#define SMP_ERR_PAIRING_NOT_SUP 0x05
#define SMP_ERR_ENC_KEY_SIZE 0x06
#define SMP_ERR_COMMAND_NOT_SUP 0x07
#define SMP_ERR_UNSPECIFIED 0x08
#define SMP_ERR_ATTEMPTS 0x09
#define SMP_ERR_INVALID_PARAM 0x0A
#define SMP_ERR_DH_KEY_CHECK 0x0B
#define SMP_ERR_NUMERIC_COMPARISON 0x0C
#define SMP_ERR_BR_EDR_IN_PROGRESS 0x0D
#define SMP_ERR_CROSS_TRANSPORT 0x0E






#define SMP_ERR_MEMORY 0xE0
#define SMP_ERR_TIMEOUT 0xE1






#define SMP_CMD_PAIR_REQ 0x01
#define SMP_CMD_PAIR_RSP 0x02
#define SMP_CMD_PAIR_CNF 0x03
#define SMP_CMD_PAIR_RAND 0x04
#define SMP_CMD_PAIR_FAIL 0x05
#define SMP_CMD_ENC_INFO 0x06
#define SMP_CMD_MASTER_ID 0x07
#define SMP_CMD_ID_INFO 0x08
#define SMP_CMD_ID_ADDR_INFO 0x09
#define SMP_CMD_SIGN_INFO 0x0A
#define SMP_CMD_SECURITY_REQ 0x0B
#define SMP_CMD_PUBLIC_KEY 0x0C
#define SMP_CMD_DHKEY_CHECK 0x0D
#define SMP_CMD_KEYPRESS 0x0E
#define SMP_CMD_MAX 0x0F






#define SMP_PAIR_REQ_LEN 7
#define SMP_PAIR_RSP_LEN 7
#define SMP_PAIR_CNF_LEN 17
#define SMP_PAIR_RAND_LEN 17
#define SMP_PAIR_FAIL_LEN 2
#define SMP_ENC_INFO_LEN 17
#define SMP_MASTER_ID_LEN 11
#define SMP_ID_INFO_LEN 17
#define SMP_ID_ADDR_INFO_LEN 8
#define SMP_SIGN_INFO_LEN 17
#define SMP_SECURITY_REQ_LEN 2
#define SMP_PUB_KEY_MSG_LEN (1 + 2*SMP_PUB_KEY_LEN)
#define SMP_DHKEY_CHECK_MSG_LEN (1 + SMP_DHKEY_CHECK_LEN)
#define SMP_KEYPRESS_MSG_LEN 2






#define SMP_IO_DISP_ONLY 0x00
#define SMP_IO_DISP_YES_NO 0x01
#define SMP_IO_KEY_ONLY 0x02
#define SMP_IO_NO_IN_NO_OUT 0x03
#define SMP_IO_KEY_DISP 0x04






#define SMP_OOB_DATA_NONE 0x00
#define SMP_OOB_DATA_PRESENT 0x01






#define SMP_AUTH_BOND_MASK 0x03
#define SMP_AUTH_BOND_FLAG 0x01
#define SMP_AUTH_MITM_FLAG 0x04
#define SMP_AUTH_SC_FLAG 0x08
#define SMP_AUTH_KP_FLAG 0x10






#define SMP_KEY_DIST_ENC 0x01
#define SMP_KEY_DIST_ID 0x02
#define SMP_KEY_DIST_SIGN 0x04

#define SMP_KEY_DIST_MASK (SMP_KEY_DIST_ENC | SMP_KEY_DIST_ID | SMP_KEY_DIST_SIGN)







#define SMP_PASSKEY_ENTRY_STARTED 0x00
#define SMP_PASSKEY_DIGIT_ENTERED 0x01
#define SMP_PASSKEY_DIGIT_ERASED 0x02
#define SMP_PASSKEY_CLEARED 0x03
#define SMP_PASSKEY_ENTRY_COMPLETED 0x04






#define SMP_RAND_LEN 16
#define SMP_CONFIRM_LEN 16
#define SMP_KEY_LEN 16
#define SMP_RAND8_LEN 8
#define SMP_PRIVATE_KEY_LEN 32
#define SMP_PUB_KEY_LEN 32
#define SMP_DHKEY_LEN 32
#define SMP_DHKEY_CHECK_LEN 16






#define SMP_F4_TEXT_LEN (SMP_PUB_KEY_LEN * 2 + 1)
#define SMP_G2_TEXT_LEN (SMP_PUB_KEY_LEN * 2 + SMP_RAND_LEN)
#define SMP_F5_TKEY_TEXT_LEN (SMP_DHKEY_LEN)
#define SMP_F5_TEXT_LEN (9 + 2*BDA_ADDR_LEN + 2*SMP_RAND_LEN)
#define SMP_F6_TEXT_LEN (2*BDA_ADDR_LEN + 3*SMP_RAND_LEN + 5)
# 30 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
#define SEC_API_H 
# 41 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
#define SEC_CMAC_KEY_LEN 16


#define SEC_CMAC_HASH_LEN 16


#define SEC_ECC_KEY_LEN 32





#define SEC_CCM_KEY_LEN 16
#define SEC_CCM_MAX_ADDITIONAL_LEN ((1<<16) - (1<<8))
#define SEC_CCM_L 2
#define SEC_CCM_NONCE_LEN (15-SEC_CCM_L)



#define SEC_TOKEN_INVALID 0xFF






typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t *pCiphertext;
} secAes_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t *pCiphertext;
  uint8_t *pPlainText;
} secCmacMsg_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t *pCiphertext;
  uint16_t textLen;
} secCcmEncMsg_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t *pText;
  uint8_t *pResult;
  uint16_t textLen;
  bool_t success;
} secCcmDecMsg_t;


typedef union
{
  wsfMsgHdr_t hdr;
  secAes_t aes;
  secCmacMsg_t cmac;
  secCcmEncMsg_t ccmEnc;
  secCcmDecMsg_t ccmDec;
} secMsg_t;


typedef struct
{
  uint8_t pubKey_x[32];
  uint8_t pubKey_y[32];
  uint8_t privKey[32];
} secEccKey_t;


typedef struct
{
  uint8_t secret[32];
} secEccSharedSec_t;



typedef struct
{
  wsfMsgHdr_t hdr;
  union
  {
    secEccSharedSec_t sharedSecret;
    secEccKey_t key;
    bool_t keyValid;
  } data;
} secEccMsg_t;


typedef void (*SecBlkEncFunc_t)(uint8_t *pKey, uint8_t *pMessage, void *pParam);
# 156 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecInit(void);
# 166 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecRandInit(void);
# 176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecAesInit(void);
# 186 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecAesRevInit(void);
# 196 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecCmacInit(void);
# 205 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecCcmInit(void);
# 215 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecEccInit(void);
# 239 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
uint8_t SecAes(uint8_t *pKey, uint8_t *pPlaintext, wsfHandlerId_t handlerId,
               uint16_t param, uint8_t event);
# 258 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
uint8_t SecAesRev(uint8_t *pKey, uint8_t *pPlaintext, wsfHandlerId_t handlerId,
                  uint16_t param, uint8_t event);
# 275 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
bool_t SecCmac(const uint8_t *pKey, uint8_t *pPlaintext, uint16_t textLen, wsfHandlerId_t handlerId,
               uint16_t param, uint8_t event);
# 297 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
bool_t SecCcmEnc(const uint8_t *pKey, uint8_t *pNonce, uint8_t *pPlainText, uint16_t textLen,
                 uint8_t *pClear, uint16_t clearLen, uint8_t micLen, uint8_t *pResult,
                 wsfHandlerId_t handlerId, uint16_t param, uint8_t event);
# 321 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
bool_t SecCcmDec(const uint8_t *pKey, uint8_t *pNonce, uint8_t *pCypherText, uint16_t textLen,
                 uint8_t *pClear, uint16_t clearLen, uint8_t *pMic, uint8_t micLen,
                 uint8_t *pResult, wsfHandlerId_t handlerId, uint16_t param, uint8_t event);
# 343 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
bool_t SecEccGenKey(wsfHandlerId_t handlerId, uint16_t param, uint8_t event);
# 357 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
bool_t SecEccGenSharedSecret(secEccKey_t *pKey, wsfHandlerId_t handlerId, uint16_t param, uint8_t event);
# 377 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecRand(uint8_t *pRand, uint8_t randLen);
# 31 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h" 2
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
#define DM_ROLE_MASTER HCI_ROLE_MASTER
#define DM_ROLE_SLAVE HCI_ROLE_SLAVE






#define DM_DISC_MODE_NONE 0
#define DM_DISC_MODE_LIMITED 1
#define DM_DISC_MODE_GENERAL 2






#define DM_ADV_CONN_UNDIRECT 0
#define DM_ADV_CONN_DIRECT 1
#define DM_ADV_SCAN_UNDIRECT 2
#define DM_ADV_NONCONN_UNDIRECT 3
#define DM_ADV_CONN_DIRECT_LO_DUTY 4






#define DM_EXT_ADV_CONN_UNDIRECT 5
#define DM_EXT_ADV_NONCONN_DIRECT 6
#define DM_EXT_ADV_SCAN_DIRECT 7
#define DM_ADV_NONE 255






#define DM_RPT_CONN_UNDIRECT 0
#define DM_RPT_CONN_DIRECT 1
#define DM_RPT_SCAN_UNDIRECT 2
#define DM_RPT_NONCONN_UNDIRECT 3
#define DM_RPT_SCAN_RESPONSE 4






#define DM_DATA_LOC_ADV 0
#define DM_DATA_LOC_SCAN 1






#define DM_SCAN_TYPE_PASSIVE 0
#define DM_SCAN_TYPE_ACTIVE 1






#define DM_ADV_CHAN_37 HCI_ADV_CHAN_37
#define DM_ADV_CHAN_38 HCI_ADV_CHAN_38
#define DM_ADV_CHAN_39 HCI_ADV_CHAN_39

#define DM_ADV_CHAN_ALL (HCI_ADV_CHAN_37 | HCI_ADV_CHAN_38 | HCI_ADV_CHAN_39)






#define DM_CLIENT_ID_ATT 0
#define DM_CLIENT_ID_SMP 1
#define DM_CLIENT_ID_DM 2
#define DM_CLIENT_ID_APP 3
#define DM_CLIENT_ID_L2C 4
#define DM_CLIENT_ID_MAX 5







#define DM_CONN_ID_NONE 0


#define DM_SYNC_ID_NONE 0






#define DM_ADDR_PUBLIC 0x00
#define DM_ADDR_RANDOM 0x01
#define DM_ADDR_PUBLIC_IDENTITY 0x02
#define DM_ADDR_RANDOM_IDENTITY 0x03
#define DM_ADDR_RANDOM_UNRESOLVED 0xFE
#define DM_ADDR_NONE 0xFF






#define DM_ADV_TYPE_FLAGS 0x01
#define DM_ADV_TYPE_16_UUID_PART 0x02
#define DM_ADV_TYPE_16_UUID 0x03
#define DM_ADV_TYPE_32_UUID_PART 0x04
#define DM_ADV_TYPE_32_UUID 0x05
#define DM_ADV_TYPE_128_UUID_PART 0x06
#define DM_ADV_TYPE_128_UUID 0x07
#define DM_ADV_TYPE_SHORT_NAME 0x08
#define DM_ADV_TYPE_LOCAL_NAME 0x09
#define DM_ADV_TYPE_TX_POWER 0x0A
#define DM_ADV_TYPE_SM_TK_VALUE 0x10
#define DM_ADV_TYPE_SM_OOB_FLAGS 0x11
#define DM_ADV_TYPE_CONN_INTERVAL 0x12
#define DM_ADV_TYPE_SIGNED_DATA 0x13
#define DM_ADV_TYPE_16_SOLICIT 0x14
#define DM_ADV_TYPE_128_SOLICIT 0x15
#define DM_ADV_TYPE_SERVICE_DATA 0x16
#define DM_ADV_TYPE_PUBLIC_TARGET 0x17
#define DM_ADV_TYPE_RANDOM_TARGET 0x18
#define DM_ADV_TYPE_APPEARANCE 0x19
#define DM_ADV_TYPE_ADV_INTERVAL 0x1A
#define DM_ADV_TYPE_BD_ADDR 0x1B
#define DM_ADV_TYPE_ROLE 0x1C
#define DM_ADV_TYPE_32_SOLICIT 0x1F
#define DM_ADV_TYPE_SVC_DATA_32 0x20
#define DM_ADV_TYPE_SVC_DATA_128 0x21
#define DM_ADV_TYPE_LESC_CONFIRM 0x22
#define DM_ADV_TYPE_LESC_RANDOM 0x23
#define DM_ADV_TYPE_URI 0x24
#define DM_ADV_TYPE_MANUFACTURER 0xFF






#define DM_FLAG_LE_LIMITED_DISC 0x01
#define DM_FLAG_LE_GENERAL_DISC 0x02
#define DM_FLAG_LE_BREDR_NOT_SUP 0x04






#define DM_AD_LEN_IDX 0
#define DM_AD_TYPE_IDX 1
#define DM_AD_DATA_IDX 2






#define DM_URI_SCHEME_HTTP 0x16
#define DM_URI_SCHEME_HTTPS 0x17






#define DM_GAP_LIM_ADV_TIMEOUT 180000
#define DM_GAP_GEN_DISC_SCAN_MIN 10240
#define DM_GAP_LIM_DISC_SCAN_MIN 10240
#define DM_GAP_CONN_PARAM_TIMEOUT 30000
#define DM_GAP_SCAN_FAST_PERIOD 30720
#define DM_GAP_ADV_FAST_PERIOD 30000







#define DM_GAP_SCAN_FAST_INT_MIN 48
#define DM_GAP_SCAN_FAST_INT_MAX 96
#define DM_GAP_SCAN_FAST_WINDOW 48
#define DM_GAP_SCAN_SLOW_INT_1 2048
#define DM_GAP_SCAN_SLOW_WINDOW_1 18
#define DM_GAP_SCAN_SLOW_INT_2 4096
#define DM_GAP_SCAN_SLOW_WINDOW_2 36
#define DM_GAP_ADV_FAST_INT_MIN_1 48
#define DM_GAP_ADV_FAST_INT_MAX_1 96
#define DM_GAP_ADV_FAST_INT_MIN_2 160
#define DM_GAP_ADV_FAST_INT_MAX_2 240
#define DM_GAP_ADV_SLOW_INT_MIN 1600
#define DM_GAP_ADV_SLOW_INT_MAX 1920







#define DM_GAP_SCAN_CODED_FAST_INT_MIN 144
#define DM_GAP_SCAN_CODED_FAST_INT_MAX 288
#define DM_GAP_SCAN_CODED_FAST_WINDOW 144
#define DM_GAP_SCAN_CODED_SLOW_INT_1 6144
#define DM_GAP_SCAN_CODED_SLOW_WINDOW_1 54
#define DM_GAP_SCAN_CODED_SLOW_INT_2 12288
#define DM_GAP_SCAN_CODED_SLOW_WINDOW_2 108
#define DM_GAP_ADV_CODED_FAST_INT_MIN_1 144
#define DM_GAP_ADV_CODED_FAST_INT_MAX_1 288
#define DM_GAP_ADV_CODED_FAST_INT_MIN_2 480
#define DM_GAP_ADV_CODED_FAST_INT_MAX_2 720
#define DM_GAP_ADV_CODED_SLOW_INT_MIN 4800
#define DM_GAP_ADV_CODED_SLOW_INT_MAX 5760







#define DM_GAP_CONN_EST_LATENCY 0






#define DM_GAP_INITIAL_CONN_INT_MIN 24
#define DM_GAP_INITIAL_CONN_INT_MAX 40






#define DM_GAP_CONN_EST_MIN_CE_LEN 0
#define DM_GAP_CONN_EST_MAX_CE_LEN 0






#define DM_GAP_PRIV_DISABLED 0
#define DM_GAP_PRIV_ENABLED 1







#define DM_DEFAULT_EST_SUP_TIMEOUT 2000






#define DM_AUTH_BOND_FLAG SMP_AUTH_BOND_FLAG
#define DM_AUTH_MITM_FLAG SMP_AUTH_MITM_FLAG
#define DM_AUTH_SC_FLAG SMP_AUTH_SC_FLAG
#define DM_AUTH_KP_FLAG SMP_AUTH_KP_FLAG






#define DM_KEY_DIST_LTK SMP_KEY_DIST_ENC
#define DM_KEY_DIST_IRK SMP_KEY_DIST_ID
#define DM_KEY_DIST_CSRK SMP_KEY_DIST_SIGN






#define DM_KEY_LOCAL_LTK 0x01
#define DM_KEY_PEER_LTK 0x02
#define DM_KEY_IRK 0x04
#define DM_KEY_CSRK 0x08



#define DM_SEC_HCI_ERR_BASE 0x20





#define DM_SEC_LEVEL_NONE 0
#define DM_SEC_LEVEL_ENC 1
#define DM_SEC_LEVEL_ENC_AUTH 2
#define DM_SEC_LEVEL_ENC_LESC 3






#define DM_RAND_ADDR_STATIC 0xC0
#define DM_RAND_ADDR_RESOLV 0x40
#define DM_RAND_ADDR_NONRESOLV 0x00







#define DM_RAND_ADDR_GET(addr) ((addr)[5] & 0xC0)


#define DM_RAND_ADDR_SET(addr,type) {(addr)[5] = ((addr)[5] & 0x3F) | (type);}


#define DM_RAND_ADDR_SA(addr,type) (((type) == DM_ADDR_RANDOM) && (DM_RAND_ADDR_GET((addr)) == DM_RAND_ADDR_STATIC))



#define DM_RAND_ADDR_RPA(addr,type) (((type) == DM_ADDR_RANDOM) && (DM_RAND_ADDR_GET((addr)) == DM_RAND_ADDR_RESOLV))







#define DM_PRIV_MODE_NETWORK 0x00
#define DM_PRIV_MODE_DEVICE 0x01






#define DM_CONN_IDLE 0
#define DM_CONN_BUSY 1






#define DM_IDLE_SMP_PAIR 0x0001
#define DM_IDLE_DM_ENC 0x0002
#define DM_IDLE_ATTS_DISC 0x0004
#define DM_IDLE_APP_DISC 0x0008
#define DM_IDLE_USER_1 0x0010
#define DM_IDLE_USER_2 0x0020
#define DM_IDLE_USER_3 0x0040
#define DM_IDLE_USER_4 0x0080






#define DM_FILT_POLICY_MODE_ADV 0
#define DM_FILT_POLICY_MODE_SCAN 1
#define DM_FILT_POLICY_MODE_INIT 2
#define DM_FILT_POLICY_MODE_SYNC 3






#define DM_ERR_SMP_RX_PDU_LEN_EXCEEDED 0x01
#define DM_ERR_ATT_RX_PDU_LEN_EXCEEDED 0x02
#define DM_ERR_L2C_RX_PDU_LEN_EXCEEDED 0x03
# 433 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
#define DM_ADV_HANDLE_DEFAULT 0






#define DM_CBACK_START 0x20


enum
{
  DM_RESET_CMPL_IND = 0x20,
  DM_ADV_START_IND,
  DM_ADV_STOP_IND,
  DM_ADV_NEW_ADDR_IND,
  DM_SCAN_START_IND,
  DM_SCAN_STOP_IND,
  DM_SCAN_REPORT_IND,
  DM_CONN_OPEN_IND,
  DM_CONN_CLOSE_IND,
  DM_CONN_UPDATE_IND,
  DM_SEC_PAIR_CMPL_IND,
  DM_SEC_PAIR_FAIL_IND,
  DM_SEC_ENCRYPT_IND,
  DM_SEC_ENCRYPT_FAIL_IND,
  DM_SEC_AUTH_REQ_IND,
  DM_SEC_KEY_IND,
  DM_SEC_LTK_REQ_IND,
  DM_SEC_PAIR_IND,
  DM_SEC_SLAVE_REQ_IND,
  DM_SEC_CALC_OOB_IND,
  DM_SEC_ECC_KEY_IND,
  DM_SEC_COMPARE_IND,
  DM_SEC_KEYPRESS_IND,
  DM_PRIV_RESOLVED_ADDR_IND,
  DM_PRIV_GENERATE_ADDR_IND,
  DM_CONN_READ_RSSI_IND,
  DM_PRIV_ADD_DEV_TO_RES_LIST_IND,
  DM_PRIV_REM_DEV_FROM_RES_LIST_IND,
  DM_PRIV_CLEAR_RES_LIST_IND,
  DM_PRIV_READ_PEER_RES_ADDR_IND,
  DM_PRIV_READ_LOCAL_RES_ADDR_IND,
  DM_PRIV_SET_ADDR_RES_ENABLE_IND,
  DM_REM_CONN_PARAM_REQ_IND,
  DM_CONN_DATA_LEN_CHANGE_IND,
  DM_CONN_WRITE_AUTH_TO_IND,
  DM_CONN_AUTH_TO_EXPIRED_IND,
  DM_PHY_READ_IND,
  DM_PHY_SET_DEF_IND,
  DM_PHY_UPDATE_IND,
  DM_ADV_SET_START_IND,
  DM_ADV_SET_STOP_IND,
  DM_SCAN_REQ_RCVD_IND,
  DM_EXT_SCAN_START_IND,
  DM_EXT_SCAN_STOP_IND,
  DM_EXT_SCAN_REPORT_IND,
  DM_PER_ADV_SET_START_IND,
  DM_PER_ADV_SET_STOP_IND,
  DM_PER_ADV_SYNC_EST_IND,
  DM_PER_ADV_SYNC_EST_FAIL_IND,
  DM_PER_ADV_SYNC_LOST_IND,
  DM_PER_ADV_SYNC_TRSF_EST_IND,
  DM_PER_ADV_SYNC_TRSF_EST_FAIL_IND,
  DM_PER_ADV_SYNC_TRSF_IND,
  DM_PER_ADV_SET_INFO_TRSF_IND,
  DM_PER_ADV_REPORT_IND,
  DM_REMOTE_FEATURES_IND,
  DM_READ_REMOTE_VER_INFO_IND,
  DM_CONN_IQ_REPORT_IND,
  DM_CONNLESS_IQ_REPORT_IND,
  DM_CTE_REQ_FAIL_IND,
  DM_CONN_CTE_RX_SAMPLE_START_IND,
  DM_CONN_CTE_RX_SAMPLE_STOP_IND,
  DM_CONN_CTE_TX_CFG_IND,
  DM_CONN_CTE_REQ_START_IND,
  DM_CONN_CTE_REQ_STOP_IND,
  DM_CONN_CTE_RSP_START_IND,
  DM_CONN_CTE_RSP_STOP_IND,
  DM_READ_ANTENNA_INFO_IND,
  DM_L2C_CMD_REJ_IND,
  DM_ERROR_IND,
  DM_HW_ERROR_IND,
  DM_VENDOR_SPEC_IND,
  DM_VENDOR_SPEC_CMD_CMPL_IND
};

#define DM_CBACK_END DM_VENDOR_SPEC_CMD_CMPL_IND







typedef uint8_t dmConnId_t;


typedef uint8_t dmSyncId_t;


typedef struct
{
  uint8_t dummy;
} dmCfg_t;


typedef struct
{
  uint8_t key[16];
  uint8_t rand[8];
  uint16_t ediv;
} dmSecLtk_t;


typedef struct
{
  uint8_t key[16];
  bdAddr_t bdAddr;
  uint8_t addrType;
} dmSecIrk_t;


typedef struct
{
  uint8_t key[16];
} dmSecCsrk_t;


typedef union
{
  dmSecLtk_t ltk;
  dmSecIrk_t irk;
  dmSecCsrk_t csrk;
} dmSecKey_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t auth;
} dmSecPairCmplIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  bool_t usingLtk;
} dmSecEncryptIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  bool_t oob;
  bool_t display;
} dmSecAuthReqIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t auth;
  bool_t oob;
  uint8_t iKeyDist;
  uint8_t rKeyDist;
} dmSecPairIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t auth;
} dmSecSlaveIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  dmSecKey_t keyData;
  uint8_t type;
  uint8_t secLevel;
  uint8_t encKeyLen;
} dmSecKeyIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t confirm[16];
} dmSecCnfIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t notificationType;
} dmSecKeypressIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  bdAddr_t addr;
} dmPrivGenAddrIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t confirm[16];
  uint8_t random[16];
} dmSecOobCalcIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  bdAddr_t addr;
  bool_t firstTime;
} dmAdvNewAddrIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t numSets;
  uint8_t advHandle[2];
} dmAdvSetStartEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t advHandle;
} dmPerAdvSetStartEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t advHandle;
} dmPerAdvSetStopEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t reason;
  uint16_t handle;
} dmL2cCmdRejEvt_t;
# 700 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
typedef union
{
  wsfMsgHdr_t hdr;



  dmAdvNewAddrIndEvt_t advNewAddr;


  hciLeAdvReportEvt_t scanReport;
  hciLeConnCmplEvt_t connOpen;
  hciDisconnectCmplEvt_t connClose;
  hciLeConnUpdateCmplEvt_t connUpdate;
  dmSecPairCmplIndEvt_t pairCmpl;

  dmSecEncryptIndEvt_t encryptInd;

  dmSecAuthReqIndEvt_t authReq;
  dmSecKeyIndEvt_t keyInd;
  hciLeLtkReqEvt_t ltkReqInd;
  dmSecPairIndEvt_t pairInd;
  dmSecSlaveIndEvt_t slaveInd;
  dmSecOobCalcIndEvt_t oobCalcInd;
  secEccMsg_t eccMsg;
  dmSecCnfIndEvt_t cnfInd;
  dmSecKeypressIndEvt_t keypressInd;

  dmPrivGenAddrIndEvt_t genAddr;
  hciReadRssiCmdCmplEvt_t readRssi;
  hciLeAddDevToResListCmdCmplEvt_t addDevToResList;
  hciLeRemDevFromResListCmdCmplEvt_t remDevFromResList;
  hciLeClearResListCmdCmplEvt_t clearResList;
  hciLeReadPeerResAddrCmdCmplEvt_t readPeerResAddr;
  hciLeReadLocalResAddrCmdCmplEvt_t readLocalResAddr;
  hciLeSetAddrResEnableCmdCmplEvt_t setAddrResEnable;
  hciLeRemConnParamReqEvt_t remConnParamReq;
  hciLeDataLenChangeEvt_t dataLenChange;
  hciWriteAuthPayloadToCmdCmplEvt_t writeAuthTo;
  hciAuthPayloadToExpiredEvt_t authToExpired;
  hciLeReadPhyCmdCmplEvt_t readPhy;
  hciLeSetDefPhyCmdCmplEvt_t setDefPhy;
  hciLePhyUpdateEvt_t phyUpdate;
  dmAdvSetStartEvt_t advSetStart;
  hciLeAdvSetTermEvt_t advSetStop;
  hciLeScanReqRcvdEvt_t scanReqRcvd;


  hciLeExtAdvReportEvt_t extScanReport;
  dmPerAdvSetStartEvt_t perAdvSetStart;
  dmPerAdvSetStopEvt_t perAdvSetStop;
  hciLePerAdvSyncEstEvt_t perAdvSyncEst;
  hciLePerAdvSyncEstEvt_t perAdvSyncEstFail;
  hciLePerAdvSyncLostEvt_t perAdvSyncLost;
  HciLePerAdvSyncTrsfRcvdEvt_t perAdvSyncTrsfEst;
  HciLePerAdvSyncTrsfRcvdEvt_t perAdvSyncTrsEstFail;
  hciLePerAdvSyncTrsfCmdCmplEvt_t perAdvSyncTrsf;
  hciLePerAdvSetInfoTrsfCmdCmplEvt_t perAdvSetInfoTrsf;
  hciLePerAdvReportEvt_t perAdvReport;
  hciLeReadRemoteFeatCmplEvt_t readRemoteFeat;
  hciReadRemoteVerInfoCmplEvt_t readRemVerInfo;
  hciLeConnIQReportEvt_t connIQReport;
  hciLeConlessIQReportEvt_t connlessIQReport;
  hciLeCteReqFailedEvt_t cteReqFail;
  hciLeSetConnCteRxParamsCmdCmplEvt_t connCteRxSampleStart;
  hciLeSetConnCteRxParamsCmdCmplEvt_t connCteRxSampleStop;
  hciLeSetConnCteTxParamsCmdCmplEvt_t connCteTxCfg;
  hciLeConnCteReqEnableCmdCmplEvt_t connCteReqStart;
  hciLeConnCteReqEnableCmdCmplEvt_t connCteReqStop;
  hciLeConnCteRspEnableCmdCmplEvt_t connCteRspStart;
  hciLeConnCteRspEnableCmdCmplEvt_t connCteRspStop;
  hciLeReadAntennaInfoCmdCmplEvt_t readAntennaInfo;
  dmL2cCmdRejEvt_t l2cCmdRej;

  hciHwErrorEvt_t hwError;
  hciVendorSpecEvt_t vendorSpec;
  hciVendorSpecCmdCmplEvt_t vendorSpecCmdCmpl;
} dmEvt_t;


typedef struct
{
  uint8_t localRandom[16];
  uint8_t localConfirm[16];
  uint8_t peerRandom[16];
  uint8_t peerConfirm[16];
} dmSecLescOobCfg_t;


typedef void (*dmCback_t)(dmEvt_t *pDmEvt);
# 807 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmRegister(dmCback_t cback);
# 827 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmFindAdType(uint8_t adType, uint16_t dataLen, uint8_t *pData);
# 836 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvInit(void);
# 845 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmExtAdvInit(void);
# 854 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmAdvModeLeg(void);
# 863 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmAdvModeExt(void);
# 877 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvConfig(uint8_t advHandle, uint8_t advType, uint8_t peerAddrType, uint8_t *pPeerAddr);
# 892 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetData(uint8_t advHandle, uint8_t op, uint8_t location, uint8_t len, uint8_t *pData);
# 906 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvStart(uint8_t numSets, uint8_t *pAdvHandles, uint16_t *pDuration, uint8_t *pMaxEaEvents);
# 919 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvStop(uint8_t numSets, uint8_t *pAdvHandles);
# 930 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvRemoveAdvSet(uint8_t advHandle);
# 939 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvClearAdvSets(void);
# 951 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetRandAddr(uint8_t advHandle, const uint8_t *pAddr);
# 964 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetInterval(uint8_t advHandle, uint16_t intervalMin, uint16_t intervalMax);
# 976 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetChannelMap(uint8_t advHandle, uint8_t channelMap);
# 988 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetAddrType(uint8_t addrType);
# 1009 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmAdvSetAdValue(uint8_t adType, uint8_t len, uint8_t *pValue, uint16_t *pAdvDataLen,
                       uint8_t *pAdvData, uint16_t advDataBufLen);
# 1029 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmAdvSetName(uint8_t len, uint8_t *pValue, uint16_t *pAdvDataLen, uint8_t *pAdvData,
                    uint16_t advDataBufLen);
# 1039 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevPrivInit(void);
# 1050 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevPrivStart(uint16_t changeInterval);
# 1059 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevPrivStop(void);
# 1071 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvUseLegacyPdu(uint8_t advHandle, bool_t useLegacyPdu);
# 1083 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvOmitAdvAddr(uint8_t advHandle, bool_t omitAdvAddr);
# 1097 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvIncTxPwr(uint8_t advHandle, bool_t incTxPwr, int8_t advTxPwr);
# 1113 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetPhyParam(uint8_t advHandle, uint8_t priAdvPhy, uint8_t secAdvMaxSkip, uint8_t secAdvPhy);
# 1125 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvScanReqNotifEnable(uint8_t advHandle, bool_t scanReqNotifEna);
# 1137 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetFragPref(uint8_t advHandle, uint8_t fragPref);
# 1148 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPerAdvConfig(uint8_t advHandle);
# 1162 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPerAdvSetData(uint8_t advHandle, uint8_t op, uint8_t len, uint8_t *pData);
# 1173 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPerAdvStart(uint8_t advHandle);
# 1184 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPerAdvStop(uint8_t advHandle);
# 1198 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPerAdvSetInterval(uint8_t advHandle, uint16_t intervalMin, uint16_t intervalMax);
# 1212 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPerAdvIncTxPwr(uint8_t advHandle, bool_t incTxPwr);
# 1225 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint16_t DmExtMaxAdvDataLen(uint8_t advType, bool_t useLegacyPdu);
# 1241 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivInit(void);
# 1256 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivResolveAddr(uint8_t *pAddr, uint8_t *pIrk, uint16_t param);
# 1285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivAddDevToResList(uint8_t addrType, const uint8_t *pIdentityAddr, uint8_t *pPeerIrk,
                           uint8_t *pLocalIrk, bool_t enableLlPriv, uint16_t param);
# 1306 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivRemDevFromResList(uint8_t addrType, const uint8_t *pIdentityAddr, uint16_t param);
# 1325 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivClearResList(void);
# 1339 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivReadPeerResolvableAddr(uint8_t addrType, const uint8_t *pIdentityAddr);
# 1353 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivReadLocalResolvableAddr(uint8_t addrType, const uint8_t *pIdentityAddr);
# 1371 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivSetAddrResEnable(bool_t enable);
# 1382 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivSetResolvablePrivateAddrTimeout(uint16_t rpaTimeout);
# 1400 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivSetPrivacyMode(uint8_t addrType, const uint8_t *pIdentityAddr, uint8_t mode);
# 1412 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivGenerateAddr(uint8_t *pIrk, uint16_t param);
# 1421 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmLlPrivEnabled(void);
# 1437 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmScanInit(void);
# 1446 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmExtScanInit(void);
# 1455 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPastInit(void);
# 1464 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteInit(void);
# 1473 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmScanModeLeg(void);
# 1482 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmScanModeExt(void);
# 1501 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmScanStart(uint8_t scanPhys, uint8_t mode, const uint8_t *pScanType, bool_t filterDup,
                 uint16_t duration, uint16_t period);
# 1511 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmScanStop(void);
# 1524 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmScanSetInterval(uint8_t scanPhys, uint16_t *pScanInterval, uint16_t *pScanWindow);
# 1536 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmScanSetAddrType(uint8_t addrType);
# 1559 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
dmSyncId_t DmSyncStart(uint8_t advSid, uint8_t advAddrType, const uint8_t *pAdvAddr, uint16_t skip,
                       uint16_t syncTimeout);
# 1571 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSyncStop(dmSyncId_t syncId);
# 1582 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSyncInitialRptEnable(bool_t enable);
# 1595 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAddDeviceToPerAdvList(uint8_t advAddrType, uint8_t *pAdvAddr, uint8_t advSid);
# 1608 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmRemoveDeviceFromPerAdvList(uint8_t advAddrType, uint8_t *pAdvAddr, uint8_t advSid);
# 1617 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmClearPerAdvList(void);
# 1629 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPastRptRcvEnable(dmSyncId_t syncId, bool_t enable);
# 1643 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPastSyncTrsf(dmConnId_t connId, uint16_t serviceData, dmSyncId_t syncId);
# 1657 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPastSetInfoTrsf(dmConnId_t connId, uint16_t serviceData, uint8_t advHandle);
# 1676 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPastConfig(dmConnId_t connId, uint8_t mode, uint16_t skip, uint16_t syncTimeout,
                  uint8_t cteType);
# 1695 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPastDefaultConfig(uint8_t mode, uint16_t skip, uint16_t syncTimeout, uint8_t cteType);
# 1710 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteRxSampleStart(dmConnId_t connId, uint8_t slotDurations, uint8_t switchPatternLen,
                            uint8_t *pAntennaIDs);
# 1722 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteRxSampleStop(dmConnId_t connId);
# 1737 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteTxConfig(dmConnId_t connId, uint8_t cteTypeBits, uint8_t switchPatternLen,
                       uint8_t *pAntennaIDs);
# 1752 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteReqStart(dmConnId_t connId, uint16_t cteReqInt, uint8_t reqCteLen,
                       uint8_t reqCteType);
# 1764 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteReqStop(dmConnId_t connId);
# 1775 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteRspStart(dmConnId_t connId);
# 1786 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteRspStop(dmConnId_t connId);
# 1798 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmReadAntennaInfo(void);
# 1814 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnInit(void);
# 1823 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnMasterInit(void);
# 1832 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmExtConnMasterInit(void);
# 1841 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnSlaveInit(void);
# 1850 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmExtConnSlaveInit(void);
# 1862 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnRegister(uint8_t clientId, dmCback_t cback);
# 1876 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
dmConnId_t DmConnOpen(uint8_t clientId, uint8_t initPhys, uint8_t addrType, uint8_t *pAddr);
# 1889 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnClose(uint8_t clientId, dmConnId_t connId, uint8_t reason);
# 1906 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
dmConnId_t DmConnAccept(uint8_t clientId, uint8_t advHandle, uint8_t advType, uint16_t duration,
                        uint8_t maxEaEvents, uint8_t addrType, uint8_t *pAddr);
# 1919 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnUpdate(dmConnId_t connId, hciConnSpec_t *pConnSpec);
# 1931 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnSetScanInterval(uint16_t scanInterval, uint16_t scanWindow);
# 1945 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmExtConnSetScanInterval(uint8_t initPhys, uint16_t *pScanInterval, uint16_t *pScanWindow);
# 1956 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnSetConnSpec(hciConnSpec_t *pConnSpec);
# 1969 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmExtConnSetConnSpec(uint8_t initPhys, hciConnSpec_t *pConnSpec);
# 1980 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnSetAddrType(uint8_t addrType);
# 1993 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnSetIdle(dmConnId_t connId, uint16_t idleMask, uint8_t idle);
# 2004 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint16_t DmConnCheckIdle(dmConnId_t connId);
# 2015 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnReadRssi(dmConnId_t connId);
# 2029 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmRemoteConnParamReqReply(dmConnId_t connId, hciConnSpec_t *pConnSpec);
# 2043 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmRemoteConnParamReqNegReply(dmConnId_t connId, uint8_t reason);
# 2056 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnSetDataLen(dmConnId_t connId, uint16_t txOctets, uint16_t txTime);
# 2067 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t DmConnRole(dmConnId_t connId);
# 2079 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmWriteAuthPayloadTimeout(dmConnId_t connId, uint16_t timeout);
# 2100 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSetDefaultPhy(uint8_t allPhys, uint8_t txPhys, uint8_t rxPhys);
# 2111 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmReadPhy(dmConnId_t connId);
# 2126 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSetPhy(dmConnId_t connId, uint8_t allPhys, uint8_t txPhys, uint8_t rxPhys, uint16_t phyOptions);
# 2135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPhyInit(void);
# 2152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevReset(void);
# 2163 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevSetRandAddr(uint8_t *pAddr);
# 2176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevWhiteListAdd(uint8_t addrType, uint8_t *pAddr);
# 2189 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevWhiteListRemove(uint8_t addrType, uint8_t *pAddr);
# 2199 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevWhiteListClear(void);
# 2211 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmDevSetFilterPolicy(uint8_t mode, uint8_t policy);
# 2225 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmDevSetExtFilterPolicy(uint8_t advHandle, uint8_t mode, uint8_t policy);
# 2236 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevVsInit(uint8_t param);
# 2252 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecInit(void);
# 2261 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecLescInit(void);
# 2276 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecPairReq(dmConnId_t connId, bool_t oob, uint8_t auth, uint8_t iKeyDist, uint8_t rKeyDist);
# 2292 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecPairRsp(dmConnId_t connId, bool_t oob, uint8_t auth, uint8_t iKeyDist, uint8_t rKeyDist);
# 2304 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecCancelReq(dmConnId_t connId, uint8_t reason);
# 2318 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecAuthRsp(dmConnId_t connId, uint8_t authDataLen, uint8_t *pAuthData);
# 2331 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecSlaveReq(dmConnId_t connId, uint8_t auth);
# 2344 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecEncryptReq(dmConnId_t connId, uint8_t secLevel, dmSecLtk_t *pLtk);
# 2359 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecLtkRsp(dmConnId_t connId, bool_t keyFound, uint8_t secLevel, uint8_t *pKey);
# 2370 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecSetLocalCsrk(uint8_t *pCsrk);
# 2381 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecSetLocalIrk(uint8_t *pIrk);
# 2390 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecGenerateEccKeyReq(void);
# 2401 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecSetEccKey(secEccKey_t *pKey);
# 2410 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
secEccKey_t *DmSecGetEccKey(void);
# 2419 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecSetDebugEccKey(void);
# 2433 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecSetOob(dmConnId_t connId, dmSecLescOobCfg_t *pConfig);
# 2448 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecCalcOobReq(uint8_t *pRand, uint8_t *pPubKeyX);
# 2461 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecCompareRsp(dmConnId_t connId, bool_t valid);
# 2472 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint32_t DmSecGetCompareValue(uint8_t *pConfirm);
# 2490 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t DmLlAddrType(uint8_t addrType);
# 2501 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t DmHostAddrType(uint8_t addrType);
# 2512 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint16_t DmSizeOfEvt(dmEvt_t *pDmEvt);
# 2524 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmL2cConnUpdateCnf(uint16_t handle, uint16_t reason);
# 2536 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmL2cCmdRejInd(uint16_t handle, uint16_t result);
# 2550 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmL2cConnUpdateInd(uint8_t identifier, uint16_t handle, hciConnSpec_t *pConnSpec);
# 2561 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
dmConnId_t DmConnIdByHandle(uint16_t handle);
# 2572 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmConnInUse(dmConnId_t connId);
# 2583 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t DmConnPeerAddrType(dmConnId_t connId);
# 2594 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmConnPeerAddr(dmConnId_t connId);
# 2605 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t DmConnLocalAddrType(dmConnId_t connId);
# 2616 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmConnLocalAddr(dmConnId_t connId);
# 2627 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmConnPeerRpa(dmConnId_t connId);
# 2638 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmConnLocalRpa(dmConnId_t connId);
# 2649 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t DmConnSecLevel(dmConnId_t connId);
# 2662 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSmpEncryptReq(dmConnId_t connId, uint8_t secLevel, uint8_t *pKey);
# 2673 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSmpCbackExec(dmEvt_t *pDmEvt);
# 2682 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmSecGetLocalCsrk(void);
# 2691 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmSecGetLocalIrk(void);
# 2702 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmReadRemoteFeatures(dmConnId_t connId);
# 2713 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmReadRemoteVerInfo(dmConnId_t connId);
# 28 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_defs.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_defs.h"
#define L2C_DEFS_H 
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_defs.h"
#define L2C_HDR_LEN 4
#define L2C_MIN_MTU 23
#define L2C_SIG_HDR_LEN 4
#define L2C_LE_SDU_HDR_LEN 2



#define L2C_PAYLOAD_START (HCI_ACL_HDR_LEN + L2C_HDR_LEN)


#define L2C_SIG_PKT_BASE_LEN (HCI_ACL_HDR_LEN + L2C_HDR_LEN + L2C_SIG_HDR_LEN)


#define L2C_LE_SDU_PKT_BASE_LEN (HCI_ACL_HDR_LEN + L2C_HDR_LEN + L2C_LE_SDU_HDR_LEN)





#define L2C_SIG_CONN_UPDATE_REQ_LEN 8
#define L2C_SIG_CONN_UPDATE_RSP_LEN 2
#define L2C_SIG_CMD_REJ_LEN 2
#define L2C_SIG_DISCONN_REQ_LEN 4
#define L2C_SIG_DISCONN_RSP_LEN 4
#define L2C_SIG_LE_CONN_REQ_LEN 10
#define L2C_SIG_LE_CONN_RSP_LEN 10
#define L2C_SIG_FLOW_CTRL_CREDIT_LEN 4






#define L2C_CID_ATT 0x0004
#define L2C_CID_LE_SIGNALING 0x0005
#define L2C_CID_SMP 0x0006






#define L2C_SIG_CMD_REJ 0x01
#define L2C_SIG_DISCONNECT_REQ 0x06
#define L2C_SIG_DISCONNECT_RSP 0x07
#define L2C_SIG_CONN_UPDATE_REQ 0x12
#define L2C_SIG_CONN_UPDATE_RSP 0x13
#define L2C_SIG_LE_CONNECT_REQ 0x14
#define L2C_SIG_LE_CONNECT_RSP 0x15
#define L2C_SIG_FLOW_CTRL_CREDIT 0x16



#define L2C_SIG_RSP_FLAG 0x01





#define L2C_REJ_NOT_UNDERSTOOD 0x0000
#define L2C_REJ_MTU_EXCEEDED 0x0001
#define L2C_REJ_INVALID_CID 0x0002






#define L2C_CONN_PARAM_ACCEPTED 0x0000
#define L2C_CONN_PARAM_REJECTED 0x0001






#define L2C_CONN_SUCCESS 0x0000
#define L2C_CONN_NONE 0x0001
#define L2C_CONN_FAIL_PSM 0x0002
#define L2C_CONN_FAIL_RES 0x0004
#define L2C_CONN_FAIL_AUTH 0x0005
#define L2C_CONN_FAIL_AUTHORIZ 0x0006
#define L2C_CONN_FAIL_KEY_SIZE 0x0007
#define L2C_CONN_FAIL_ENC 0x0008
#define L2C_CONN_FAIL_INVALID_SCID 0x0009
#define L2C_CONN_FAIL_ALLOCATED_SCID 0x000A
#define L2C_CONN_FAIL_UNACCEPT_PARAM 0x000B






#define L2C_CONN_FAIL_TIMEOUT 0xF000






#define L2C_PSM_MIN 0x0001
#define L2C_PSM_MAX 0x00FF
#define L2C_CID_DYN_MIN 0x0040
#define L2C_CID_DYN_MAX 0x007F
#define L2C_MTU_MIN 0x0017
#define L2C_MPS_MIN 0x0017
#define L2C_MPS_MAX 0xFFFD
#define L2C_CREDITS_MAX 0xFFFF
# 29 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h" 2
# 45 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
#define L2C_CTRL_FLOW_ENABLE_IND 0
#define L2C_CTRL_FLOW_DISABLE_IND 1



#define L2C_COC_REG_ID_NONE 0


#define L2C_COC_CID_NONE 0


#define L2C_SIGNAL_ID_INVALID 0





#define L2C_COC_ROLE_NONE 0x00
#define L2C_COC_ROLE_INITIATOR 0x01
#define L2C_COC_ROLE_ACCEPTOR 0x02






#define L2C_COC_DATA_SUCCESS 0
#define L2C_COC_DATA_ERR_MEMORY 1
#define L2C_COC_DATA_ERR_OVERFLOW 2






#define L2C_COC_CBACK_START 0x70

enum
{
  L2C_COC_CONNECT_IND = 0x70,
  L2C_COC_DISCONNECT_IND,
  L2C_COC_DATA_IND,
  L2C_COC_DATA_CNF
};

#define L2C_COC_CBACK_CBACK_END L2C_COC_DATA_CNF







typedef uint16_t l2cCocRegId_t;


typedef struct
{
  uint16_t psm;
  uint16_t mps;
  uint16_t mtu;
  uint16_t credits;
  bool_t authoriz;
  uint8_t secLevel;
  uint8_t role;
} l2cCocReg_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t cid;
  uint16_t peerMtu;
  uint16_t psm;
} l2cCocConnectInd_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t cid;
  uint16_t result;
} l2cCocDisconnectInd_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t cid;
  uint8_t *pData;
  uint16_t dataLen;
} l2cCocDataInd_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t cid;
} l2cCocDataCnf_t;
# 154 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
typedef union
{
  wsfMsgHdr_t hdr;
  l2cCocConnectInd_t connectInd;
  l2cCocDisconnectInd_t disconnectInd;
  l2cCocDataInd_t dataInd;
  l2cCocDataCnf_t dataCnf;
} l2cCocEvt_t;


typedef struct
{
  uint16_t reqTimeout;
} l2cCfg_t;
# 184 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
extern l2cCfg_t *pL2cCfg;
# 207 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
typedef void (*l2cDataCback_t)(uint16_t handle, uint16_t len, uint8_t *pPacket);
# 218 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
typedef void (*l2cCtrlCback_t)(wsfMsgHdr_t *pMsg);
# 230 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
typedef void (*l2cCocCback_t)(l2cCocEvt_t *pMsg);
# 243 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
typedef uint16_t (*l2cCocAuthorCback_t)(dmConnId_t connId, l2cCocRegId_t regId, uint16_t psm);
# 261 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cInit(void);
# 270 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cMasterInit(void);
# 279 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cSlaveInit(void);
# 299 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cRegister(uint16_t cid, l2cDataCback_t dataCback, l2cCtrlCback_t ctrlCback);
# 314 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cDataReq(uint16_t cid, uint16_t handle, uint16_t len, uint8_t *pL2cPacket);
# 328 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cDmSigReq(uint16_t handle, uint8_t code, uint16_t len, uint8_t *pParam);
# 344 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cCocInit(void);
# 359 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
l2cCocRegId_t L2cCocRegister(l2cCocCback_t cback, l2cCocReg_t *pReg);
# 372 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cCocDeregister(l2cCocRegId_t regId);
# 385 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
uint16_t L2cCocConnectReq(dmConnId_t connId, l2cCocRegId_t regId, uint16_t psm);
# 396 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cCocDisconnectReq(uint16_t cid);
# 409 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cCocDataReq(uint16_t cid, uint16_t len, uint8_t *pPayload);
# 420 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cCocErrorTest(uint16_t result);
# 432 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cCocCreditSendTest(uint16_t cid, uint16_t credits);
# 452 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cDmConnUpdateReq(uint16_t handle, hciConnSpec_t *pConnSpec);
# 466 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cDmConnUpdateRsp(uint8_t identifier, uint16_t handle, uint16_t result);
# 31 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.h"
#define L2C_MAIN_H 
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.h"
#define L2C_NEXT_ID(id) (((id) == 255) ? (1) : ((id) + 1))


#define L2C_MSG_REQ_TIMEOUT 1
#define L2C_MSG_TYPE_MAX 1






typedef void (*l2cDataCidCback_t)(uint16_t handle, uint16_t cid, uint16_t len, uint8_t *pPacket);


typedef struct
{
  l2cDataCback_t attDataCback;
  l2cDataCback_t smpDataCback;
  l2cDataCback_t l2cSignalingCback;
  l2cCtrlCback_t attCtrlCback;
  l2cCtrlCback_t smpCtrlCback;
  l2cCtrlCback_t l2cCocCtrlCback;
  l2cDataCback_t masterRxSignalingPkt;
  l2cDataCback_t slaveRxSignalingPkt;
  l2cDataCidCback_t l2cDataCidCback;
  uint8_t identifier;
} l2cCb_t;





void l2cSendCmdReject(uint16_t handle, uint8_t identifier, uint16_t reason);
void l2cRxSignalingPkt(uint16_t handle, uint16_t len, uint8_t *pPacket);
void *l2cMsgAlloc(uint16_t len);


extern l2cCb_t l2cCb;
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h" 1
# 33 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c" 2
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
l2cCb_t l2cCb;
# 56 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
static void l2cDefaultDataCback(uint16_t handle, uint16_t len, uint8_t *pPacket)
{
  ;
}
# 73 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
static void l2cDefaultDataCidCback(uint16_t handle, uint16_t cid, uint16_t len, uint8_t *pPacket)
{
  ;
}
# 87 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
static void l2cDefaultCtrlCback(wsfMsgHdr_t *pMsg)
{
  return;
}
# 103 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
void l2cRxSignalingPkt(uint16_t handle, uint16_t len, uint8_t *pPacket)
{
  uint8_t role;
  dmConnId_t connId;

  if ((connId = DmConnIdByHandle(handle)) == 0)
  {
    return;
  }

  role = DmConnRole(connId);

  if ((role == 0) && (l2cCb.masterRxSignalingPkt != 0))
  {
    (*l2cCb.masterRxSignalingPkt)(handle, len, pPacket);
  }
  else if ((role == 1) && (l2cCb.slaveRxSignalingPkt != 0))
  {
    (*l2cCb.slaveRxSignalingPkt)(handle, len, pPacket);
  }
  else
  {
    ;
  }
}
# 138 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
static void l2cHciAclCback(uint8_t *pPacket)
{
  uint16_t handle;
  uint16_t hciLen;
  uint16_t cid;
  uint16_t l2cLen;
  uint8_t *p = pPacket;


  {{handle = ((uint16_t)(p)[0] + ((uint16_t)(p)[1] << 8));}; p += 2;};
  handle &= 0x0FFF;
  {{hciLen = ((uint16_t)(p)[0] + ((uint16_t)(p)[1] << 8));}; p += 2;};


  if (hciLen >= 4)
  {
    {{l2cLen = ((uint16_t)(p)[0] + ((uint16_t)(p)[1] << 8));}; p += 2;};
  }
  else
  {
    l2cLen = 0;
  }


  if (hciLen == (l2cLen + 4))
  {

    {{cid = ((uint16_t)(p)[0] + ((uint16_t)(p)[1] << 8));}; p += 2;};

    switch (cid)
    {
      case 0x0005:
        (*l2cCb.l2cSignalingCback)(handle, l2cLen, pPacket);
        break;

      case 0x0004:
        (*l2cCb.attDataCback)(handle, l2cLen, pPacket);
        break;

      case 0x0006:
        (*l2cCb.smpDataCback)(handle, l2cLen, pPacket);
        break;

      default:
        (*l2cCb.l2cDataCidCback)(handle, cid, l2cLen, pPacket);
        break;
    }
  }

  else
  {
    ;
  }


  WsfMsgFree(pPacket);
}
# 206 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
static void l2cHciFlowCback(uint16_t handle, bool_t flowDisabled)
{
  wsfMsgHdr_t hdr;


  if ((hdr.param = DmConnIdByHandle(handle)) != 0)
  {

    hdr.event = flowDisabled;
    (*l2cCb.attCtrlCback)(&hdr);
    hdr.event = flowDisabled;
    (*l2cCb.smpCtrlCback)(&hdr);


    hdr.event = flowDisabled;
    (*l2cCb.l2cCocCtrlCback)(&hdr);
  }
}
# 236 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
void l2cSendCmdReject(uint16_t handle, uint8_t identifier, uint16_t reason)
{
  uint8_t *pPacket;
  uint8_t *p;


  if ((pPacket = l2cMsgAlloc((4 + 4 + 4) + 2)) != 0)
  {

    p = pPacket + (4 + 4);
    {*(p)++ = (uint8_t)(0x01);};
    {*(p)++ = (uint8_t)(identifier);};
    {*(p)++ = (uint8_t)(2); *(p)++ = (uint8_t)((2) >> 8);};
    {*(p)++ = (uint8_t)(reason); *(p)++ = (uint8_t)((reason) >> 8);};


    L2cDataReq(0x0005, handle, (4 + 2), pPacket);
  }
}
# 265 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
void *l2cMsgAlloc(uint16_t len)
{
  return WsfMsgDataAlloc(len, 0);
}
# 277 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
void L2cInit(void)
{

  l2cCb.attDataCback = l2cDefaultDataCback;
  l2cCb.smpDataCback = l2cDefaultDataCback;
  l2cCb.l2cSignalingCback = l2cRxSignalingPkt;
  l2cCb.attCtrlCback = l2cDefaultCtrlCback;
  l2cCb.smpCtrlCback = l2cDefaultCtrlCback;
  l2cCb.l2cCocCtrlCback = l2cDefaultCtrlCback;
  l2cCb.l2cDataCidCback = l2cDefaultDataCidCback;
  l2cCb.identifier = 1;


  HciAclRegister(l2cHciAclCback, l2cHciFlowCback);
}
# 304 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
void L2cRegister(uint16_t cid, l2cDataCback_t dataCback, l2cCtrlCback_t ctrlCback)
{
  ;


  if (cid == 0x0004)
  {

    l2cCb.attDataCback = dataCback;
    l2cCb.attCtrlCback = ctrlCback;
  }
  else
  {

    l2cCb.smpDataCback = dataCback;
    l2cCb.smpCtrlCback = ctrlCback;
  }
}
# 335 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/l2c/l2c_main.c"
void L2cDataReq(uint16_t cid, uint16_t handle, uint16_t len, uint8_t *pPacket)
{
  uint8_t *p = pPacket;


  {*(p)++ = (uint8_t)(handle); *(p)++ = (uint8_t)((handle) >> 8);};
  {*(p)++ = (uint8_t)((len + 4)); *(p)++ = (uint8_t)(((len + 4)) >> 8);};


  {*(p)++ = (uint8_t)(len); *(p)++ = (uint8_t)((len) >> 8);};
  {*(p)++ = (uint8_t)(cid); *(p)++ = (uint8_t)((cid) >> 8);};


  HciSendAclData(pPacket);
}
