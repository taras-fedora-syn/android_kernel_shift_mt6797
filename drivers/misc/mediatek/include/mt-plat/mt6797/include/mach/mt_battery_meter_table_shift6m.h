/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

//#ifndef _CUST_BATTERY_METER_TABLE_H
//#define _CUST_BATTERY_METER_TABLE_H


/* ============================================================
// define
// ============================================================*/
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#if defined(CONFIG_MTK_PMIC_CHIP_MT6353)
	#define RBAT_PULL_UP_R             16900
#else
	#define RBAT_PULL_UP_R             24000
#endif
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900
#endif

#define RBAT_PULL_UP_VOLT          2800



/* ============================================================
// ENUM
// ============================================================*/

/* ============================================================
// structure
// ============================================================*/

/* ============================================================
// typedef
// ============================================================*/
typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
	} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance; /* Ohm*/
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

/* ============================================================
// External Variables
// ============================================================*/

/* ============================================================
// External function
// ============================================================*/

/* ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================*/
#if (BAT_NTC_10 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[] = {
	{-20, 68237},
	{-15, 53650},
	{-10, 42506},
	{ -5, 33892},
	{  0, 27219},
	{  5, 22021},
	{ 10, 17926},
	{ 15, 14674},
	{ 20, 12081},
	{ 25, 10000},
	{ 30, 8315},
	{ 35, 6948},
	{ 40, 5834},
	{ 45, 4917},
	{ 50, 4161},
	{ 55, 3535},
	{ 60, 3014}
};
#endif

#if (BAT_NTC_47 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[] = {
	{-20, 483954},
	{-15, 360850},
	{-10, 271697},
	{ -5, 206463},
	{  0, 158214},
	{  5, 122259},
	{ 10, 95227},
	{ 15, 74730},
	{ 20, 59065},
	{ 25, 47000},
	{ 30, 37643},
	{ 35, 30334},
	{ 40, 24591},
	{ 45, 20048},
	{ 50, 16433},
	{ 55, 13539},
	{ 60, 11210}
};
#endif

/* T0 -10C */
BATTERY_PROFILE_STRUCT battery_profile_t0[] = {
 { 0   ,   4369 },
 { 1   ,   4348 },
 { 2   ,   4329 },
 { 3   ,   4311 },
 { 5   ,   4294 },
 { 6   ,   4279 },
 { 7   ,   4264 },
 { 8   ,   4250 },
 { 9   ,   4236 },
 { 10  ,   4222 },
 { 12  ,   4209 },
 { 13  ,   4196 },
 { 14  ,   4183 },
 { 15  ,   4171 },
 { 16  ,   4158 },
 { 17  ,   4145 },
 { 19  ,   4133 },
 { 20  ,   4120 },
 { 21  ,   4109 },
 { 22  ,   4099 },
 { 23  ,   4089 },
 { 24  ,   4078 },
 { 26  ,   4066 },
 { 27  ,   4050 },
 { 28  ,   4029 },
 { 29  ,   4009 },
 { 30  ,   3990 },
 { 31  ,   3975 },
 { 33  ,   3962 },
 { 34  ,   3950 },
 { 35  ,   3941 },
 { 36  ,   3933 },
 { 37  ,   3925 },
 { 38  ,   3917 },
 { 39  ,   3909 },
 { 41  ,   3900 },
 { 42  ,   3892 },
 { 43  ,   3884 },
 { 44  ,   3876 },
 { 45  ,   3868 },
 { 46  ,   3861 },
 { 48  ,   3855 },
 { 49  ,   3848 },
 { 50  ,   3842 },
 { 51  ,   3836 },
 { 52  ,   3830 },
 { 53  ,   3825 },
 { 55  ,   3820 },
 { 56  ,   3815 },
 { 57  ,   3811 },
 { 58  ,   3807 },
 { 59  ,   3803 },
 { 60  ,   3799 },
 { 62  ,   3797 },
 { 63  ,   3794 },
 { 64  ,   3792 },
 { 65  ,   3790 },
 { 66  ,   3788 },
 { 67  ,   3786 },
 { 69  ,   3784 },
 { 70  ,   3782 },
 { 71  ,   3780 },
 { 72  ,   3778 },
 { 73  ,   3776 },
 { 74  ,   3773 },
 { 75  ,   3770 },
 { 77  ,   3767 },
 { 78  ,   3763 },
 { 79  ,   3759 },
 { 80  ,   3755 },
 { 81  ,   3750 },
 { 82  ,   3745 },
 { 84  ,   3738 },
 { 85  ,   3732 },
 { 86  ,   3725 },
 { 87  ,   3717 },
 { 88  ,   3710 },
 { 89  ,   3703 },
 { 91  ,   3699 },
 { 92  ,   3696 },
 { 93  ,   3692 },
 { 94  ,   3687 },
 { 95  ,   3676 },
 { 96  ,   3649 },
 { 98  ,   3599 },
 { 99  ,   3525 },
 { 100 ,   3400 },

};

/* T1 0C */
BATTERY_PROFILE_STRUCT battery_profile_t1[] = {
   { 0	  ,   4355 },
   { 1 	  ,   4336 },
   { 2 	  ,   4319 },
   { 4 	  ,   4303 },
   { 5 	  ,   4288 },
   { 6 	  ,   4274 },
   { 7 	  ,   4260 },
   { 8 	  ,   4246 },
   { 10  ,	4233 },
   { 11  ,	4220 },
   { 12  ,	4207 },
   { 13  ,	4194 },
   { 14  ,	4182 },
   { 15  ,	4170 },
   { 17  ,	4157 },
   { 18  ,	4145 },
   { 19  ,	4132 },
   { 20  ,	4120 },
   { 21  ,	4108 },
   { 23  ,	4097 },
   { 24  ,	4087 },
   { 25  ,	4079 },
   { 26  ,	4070 },
   { 27  ,	4056 },
   { 29  ,	4037 },
   { 30  ,	4015 },
   { 31  ,	3996 },
   { 32  ,	3981 },
   { 33  ,	3969 },
   { 34  ,	3959 },
   { 36  ,	3950 },
   { 37  ,	3942 },
   { 38  ,	3934 },
   { 39  ,	3925 },
   { 40  ,	3915 },
   { 42  ,	3905 },
   { 43  ,	3896 },
   { 44  ,	3887 },
   { 45  ,	3878 },
   { 46  ,	3870 },
   { 48  ,	3863 },
   { 49  ,	3856 },
   { 50  ,	3850 },
   { 51  ,	3843 },
   { 52  ,	3838 },
   { 53  ,	3832 },
   { 55  ,	3827 },
   { 56  ,	3822 },
   { 57  ,	3817 },
   { 58  ,	3813 },
   { 59  ,	3808 },
   { 61  ,	3805 },
   { 62  ,	3801 },
   { 63  ,	3797 },
   { 64  ,	3794 },
   { 65  ,	3791 },
   { 67  ,	3788 },
   { 68  ,	3786 },
   { 69  ,	3784 },
   { 70  ,	3782 },
   { 71  ,	3780 },
   { 73  ,	3778 },
   { 74  ,	3776 },
   { 75  ,	3773 },
   { 76  ,	3770 },
   { 77  ,	3767 },
   { 78  ,	3763 },
   { 80  ,	3759 },
   { 81  ,	3754 },
   { 82  ,	3749 },
   { 83  ,	3742 },
   { 84  ,	3735 },
   { 86  ,	3729 },
   { 87  ,	3721 },
   { 88  ,	3711 },
   { 89  ,	3704 },
   { 90  ,	3701 },
   { 92  ,	3697 },
   { 93  ,	3694 },
   { 94  ,	3691 },
   { 95  ,	3683 },
   { 96  ,	3660 },
   { 97  ,	3611 },
   { 99  ,	3539 },
   { 100  ,   3433 },
   { 101  ,   3400 },
   { 101  ,   3400 },

};

/* T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[] = {
 { 0	 ,  4359 },
 { 1	 ,  4345 },
 { 2	 ,  4332 },
 { 4	 ,  4318 },
 { 5	 ,  4305 },
 { 6	 ,  4291 },
 { 7	 ,  4278 },
 { 8	 ,  4264 },
 { 9	 ,  4251 },
 { 11  ,  4237 },
 { 12  ,  4224 },
 { 13  ,  4211 },
 { 14  ,  4198 },
 { 15  ,  4185 },
 { 17  ,  4172 },
 { 18  ,  4159 },
 { 19  ,  4147 },
 { 20  ,  4134 },
 { 21  ,  4121 },
 { 22  ,  4109 },
 { 24  ,  4097 },
 { 25  ,  4085 },
 { 26  ,  4073 },
 { 27  ,  4066 },
 { 28  ,  4058 },
 { 29  ,  4043 },
 { 31  ,  4024 },
 { 32  ,  4008 },
 { 33  ,  3995 },
 { 34  ,  3987 },
 { 35  ,  3981 },
 { 37  ,  3975 },
 { 38  ,  3966 },
 { 39  ,  3957 },
 { 40  ,  3946 },
 { 41  ,  3933 },
 { 42  ,  3919 },
 { 44  ,  3904 },
 { 45  ,  3892 },
 { 46  ,  3882 },
 { 47  ,  3874 },
 { 48  ,  3866 },
 { 50  ,  3859 },
 { 51  ,  3853 },
 { 52  ,  3847 },
 { 53  ,  3841 },
 { 54  ,  3835 },
 { 55  ,  3830 },
 { 57  ,  3825 },
 { 58  ,  3820 },
 { 59  ,  3816 },
 { 60  ,  3812 },
 { 61  ,  3807 },
 { 63  ,  3803 },
 { 64  ,  3799 },
 { 65  ,  3796 },
 { 66  ,  3792 },
 { 67  ,  3789 },
 { 68  ,  3786 },
 { 70  ,  3783 },
 { 71  ,  3779 },
 { 72  ,  3774 },
 { 73  ,  3769 },
 { 74  ,  3765 },
 { 75  ,  3760 },
 { 77  ,  3755 },
 { 78  ,  3751 },
 { 79  ,  3747 },
 { 80  ,  3743 },
 { 81  ,  3739 },
 { 83  ,  3734 },
 { 84  ,  3728 },
 { 85  ,  3720 },
 { 86  ,  3714 },
 { 87  ,  3707 },
 { 88  ,  3697 },
 { 90  ,  3692 },
 { 91  ,  3691 },
 { 92  ,  3690 },
 { 93  ,  3688 },
 { 94  ,  3685 },
 { 96  ,  3676 },
 { 97  ,  3641 },
 { 98  ,  3583 },
 { 99  ,  3501 },
 { 100 ,  3400 },
 { 100 ,  3400 },
};

/* T3 50C*/
BATTERY_PROFILE_STRUCT battery_profile_t3[] = {
 { 0 	 , 4359 },
 { 1 	 , 4346 },
 { 2 	 , 4333 },
 { 4 	 , 4320 },
 { 5 	 , 4307 },
 { 6 	 , 4293 },
 { 7 	 , 4280 },
 { 8 	 , 4266 },
 { 10   , 4252 },
 { 11   , 4239 },
 { 12   , 4225 },
 { 13   , 4212 },
 { 14   , 4199 },
 { 16   , 4185 },
 { 17   , 4172 },
 { 18   , 4159 },
 { 19   , 4146 },
 { 20   , 4134 },
 { 21   , 4121 },
 { 23   , 4108 },
 { 24   , 4096 },
 { 25   , 4084 },
 { 26   , 4072 },
 { 27   , 4060 },
 { 29   , 4049 },
 { 30   , 4038 },
 { 31   , 4026 },
 { 32   , 4015 },
 { 33   , 4005 },
 { 35   , 3995 },
 { 36   , 3985 },
 { 37   , 3975 },
 { 38   , 3965 },
 { 39   , 3955 },
 { 41   , 3942 },
 { 42   , 3927 },
 { 43   , 3911 },
 { 44   , 3899 },
 { 45   , 3889 },
 { 47   , 3880 },
 { 48   , 3872 },
 { 49   , 3865 },
 { 50   , 3858 },
 { 51   , 3851 },
 { 53   , 3845 },
 { 54   , 3839 },
 { 55   , 3833 },
 { 56   , 3828 },
 { 57   , 3823 },
 { 59   , 3818 },
 { 60   , 3813 },
 { 61   , 3808 },
 { 62   , 3804 },
 { 63   , 3800 },
 { 64   , 3796 },
 { 66   , 3793 },
 { 67   , 3789 },
 { 68   , 3786 },
 { 69   , 3781 },
 { 70   , 3776 },
 { 72   , 3767 },
 { 73   , 3758 },
 { 74   , 3753 },
 { 75   , 3747 },
 { 76   , 3742 },
 { 78   , 3737 },
 { 79   , 3732 },
 { 80   , 3728 },
 { 81   , 3724 },
 { 82   , 3719 },
 { 84   , 3713 },
 { 85   , 3706 },
 { 86   , 3699 },
 { 87   , 3692 },
 { 88   , 3683 },
 { 90   , 3679 },
 { 91   , 3678 },
 { 92   , 3676 },
 { 93   , 3675 },
 { 94   , 3671 },
 { 96   , 3659 },
 { 97   , 3622 },
 { 98   , 3566 },
 { 99   , 3489 },
 { 100  , 3400 },
  { 100  , 3400 },
   { 100  , 3400 },

};

/* battery profile for actual temperature. The size should be the same as T1, T2 and T3*/
BATTERY_PROFILE_STRUCT battery_profile_temperature[] = {
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0 }
};

/* ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================*/
/* T0 -10C*/
R_PROFILE_STRUCT r_profile_t0[] = {
    { 1039   ,  4369	 },
  { 1039   ,  4348	 },
  { 1041   ,  4329	 },
  { 1036   ,  4311	 },
  { 1024   ,  4294	 },
  { 1015   ,  4279	 },
  { 1003   ,  4264	 },
  { 992    , 4250	 },
  { 980    , 4236	 },
  { 970    , 4222	 },
  { 958    , 4209	 },
  { 950    , 4196	 },
  { 939    , 4183	 },
  { 931    , 4171	 },
  { 921    , 4158	 },
  { 913    , 4145	 },
  { 904    , 4133	 },
  { 893    , 4120	 },
  { 886    , 4109	 },
  { 882    , 4099	 },
  { 882    , 4089	 },
  { 879    , 4078	 },
  { 871    , 4066	 },
  { 857    , 4050	 },
  { 838    , 4029	 },
  { 815    , 4009	 },
  { 799    , 3990	 },
  { 789    , 3975	 },
  { 779    , 3962	 },
  { 775    , 3950	 },
  { 774    , 3941	 },
  { 772    , 3933	 },
  { 771    , 3925	 },
  { 769    , 3917	 },
  { 765    , 3909	 },
  { 761    , 3900	 },
  { 758    , 3892	 },
  { 756    , 3884	 },
  { 754    , 3876	 },
  { 752    , 3868	 },
  { 751    , 3861	 },
  { 751    , 3855	 },
  { 749    , 3848	 },
  { 751    , 3842	 },
  { 752    , 3836	 },
  { 755    , 3830	 },
  { 756    , 3825	 },
  { 758    , 3820	 },
  { 760    , 3815	 },
  { 764    , 3811	 },
  { 766    , 3807	 },
  { 768    , 3803	 },
  { 774    , 3799	 },
  { 779    , 3797	 },
  { 784    , 3794	 },
  { 791    , 3792	 },
  { 799    , 3790	 },
  { 807    , 3788	 },
  { 815    , 3786	 },
  { 826    , 3784	 },
  { 836    , 3782	 },
  { 850    , 3780	 },
  { 863    , 3778	 },
  { 879    , 3776	 },
  { 893    , 3773	 },
  { 913    , 3770	 },
  { 929    , 3767	 },
  { 953    , 3763	 },
  { 974    , 3759	 },
  { 998    , 3755	 },
  { 1023   ,  3750	 },
  { 1051   ,  3745	 },
  { 1082   ,  3738	 },
  { 1113   ,  3732	 },
  { 1149   ,  3725	 },
  { 1189   ,  3717	 },
  { 1232   ,  3710	 },
  { 1280   ,  3703	 },
  { 1331   ,  3699	 },
  { 1385   ,  3696	 },
  { 1443   ,  3692	 },
  { 1499   ,  3687	 },
  { 1552   ,  3676	 },
  { 1592   ,  3649	 },
  { 1632   ,  3599	 },
  { 1700   ,  3525	 },
  { 1801   ,  3400	 }
};

/* T1 0C*/
R_PROFILE_STRUCT r_profile_t1[] = {
  { 594   , 4355  },
 { 594 	 ,4336  },
 { 596 	 ,4319  },
 { 587 	 ,4303  },
 { 578 	 ,4288  },
 { 570 	 ,4274  },
 { 561 	 ,4260  },
 { 554 	 ,4246  },
 { 548 	 ,4233  },
 { 541 	 ,4220  },
 { 534 	 ,4207  },
 { 531 	 ,4194  },
 { 523 	 ,4182  },
 { 520 	 ,4170  },
 { 513 	 ,4157  },
 { 506 	 ,4145  },
 { 499 	 ,4132  },
 { 491 	 ,4120  },
 { 486 	 ,4108  },
 { 480 	 ,4097  },
 { 482 	 ,4087  },
 { 487 	 ,4079  },
 { 489 	 ,4070  },
 { 486 	 ,4056  },
 { 468 	 ,4037  },
 { 452 	 ,4015  },
 { 441 	 ,3996  },
 { 432 	 ,3981  },
 { 427 	 ,3969  },
 { 423 	 ,3959  },
 { 419 	 ,3950  },
 { 415 	 ,3942  },
 { 412 	 ,3934  },
 { 403 	 ,3925  },
 { 396 	 ,3915  },
 { 388 	 ,3905  },
 { 383 	 ,3896  },
 { 380 	 ,3887  },
 { 375 	 ,3878  },
 { 373 	 ,3870  },
 { 372 	 ,3863  },
 { 371 	 ,3856  },
 { 369 	 ,3850  },
 { 368 	 ,3843  },
 { 369 	 ,3838  },
 { 370 	 ,3832  },
 { 369 	 ,3827  },
 { 372 	 ,3822  },
 { 373 	 ,3817  },
 { 372 	 ,3813  },
 { 376 	 ,3808  },
 { 379 	 ,3805  },
 { 379 	 ,3801  },
 { 382 	 ,3797  },
 { 383 	 ,3794  },
 { 386 	 ,3791  },
 { 389 	 ,3788  },
 { 391 	 ,3786  },
 { 395 	 ,3784  },
 { 398 	 ,3782  },
 { 402 	 ,3780  },
 { 407 	 ,3778  },
 { 414 	 ,3776  },
 { 419 	 ,3773  },
 { 425 	 ,3770  },
 { 431 	 ,3767  },
 { 439 	 ,3763  },
 { 447 	 ,3759  },
 { 456 	 ,3754  },
 { 470 	 ,3749  },
 { 482 	 ,3742  },
 { 495 	 ,3735  },
 { 510 	 ,3729  },
 { 527 	 ,3721  },
 { 544 	 ,3711  },
 { 565 	 ,3704  },
 { 593 	 ,3701  },
 { 623 	 ,3697  },
 { 658 	 ,3694  },
 { 701 	 ,3691  },
 { 760 	 ,3683  },
 { 818 	 ,3660  },
 { 885 	 ,3611  },
 { 995 	 ,3539  },
 { 1171  , 3433  },
 { 1739  , 3400  },
 { 1739  , 3400  }  
};

/* T2 25C*/
R_PROFILE_STRUCT r_profile_t2[] = {
 { 145  , 4359 },
 { 145  , 4345 },
 { 145  , 4332 },
 { 144  , 4318 },
 { 145  , 4305 },
 { 143  , 4291 },
 { 143  , 4278 },
 { 141  , 4264 },
 { 145  , 4251 },
 { 142  , 4237 },
 { 143  , 4224 },
 { 143  , 4211 },
 { 144  , 4198 },
 { 144  , 4185 },
 { 144  , 4172 },
 { 145  , 4159 },
 { 145  , 4147 },
 { 145  , 4134 },
 { 145  , 4121 },
 { 147  , 4109 },
 { 149  , 4097 },
 { 148  , 4085 },
 { 151  , 4073 },
 { 156  , 4066 },
 { 161  , 4058 },
 { 156  , 4043 },
 { 154  , 4024 },
 { 155  , 4008 },
 { 156  , 3995 },
 { 160  , 3987 },
 { 165  , 3981 },
 { 168  , 3975 },
 { 166  , 3966 },
 { 167  , 3957 },
 { 167  , 3946 },
 { 162  , 3933 },
 { 154  , 3919 },
 { 145  , 3904 },
 { 138  , 3892 },
 { 136  , 3882 },
 { 134  , 3874 },
 { 133  , 3866 },
 { 133  , 3859 },
 { 133  , 3853 },
 { 134  , 3847 },
 { 133  , 3841 },
 { 134  , 3835 },
 { 134  , 3830 },
 { 134  , 3825 },
 { 134  , 3820 },
 { 138  , 3816 },
 { 139  , 3812 },
 { 138  , 3807 },
 { 139  , 3803 },
 { 140  , 3799 },
 { 142  , 3796 },
 { 141  , 3792 },
 { 142  , 3789 },
 { 142  , 3786 },
 { 142  , 3783 },
 { 143  , 3779 },
 { 139  , 3774 },
 { 135  , 3769 },
 { 134  , 3765 },
 { 134  , 3760 },
 { 133  , 3755 },
 { 132  , 3751 },
 { 133  , 3747 },
 { 134  , 3743 },
 { 137  , 3739 },
 { 137  , 3734 },
 { 136  , 3728 },
 { 136  , 3720 },
 { 138  , 3714 },
 { 139  , 3707 },
 { 137  , 3697 },
 { 136  , 3692 },
 { 137  , 3691 },
 { 142  , 3690 },
 { 148  , 3688 },
 { 155  , 3685 },
 { 162  , 3676 },
 { 154  , 3641 },
 { 156  , 3583 },
 { 162  , 3501 },
 { 179  , 3400 },
 { 179  , 3400 }
};

/* T3 50C*/
R_PROFILE_STRUCT r_profile_t3[] = {
	  {  103  ,  4359 },
  {  103  ,  4346 },
  {  103  ,  4333 },
  {  103  ,  4320 },
  {  103  ,  4307 },
  {  103  ,  4293 },
  {  103  ,  4280 },
  {  103  ,  4266 },
  {  102  ,  4252 },
  {  104  ,  4239 },
  {  103  ,  4225 },
  {  103  ,  4212 },
  {  104  ,  4199 },
  {  104  ,  4185 },
  {  103  ,  4172 },
  {  105  ,  4159 },
  {  105  ,  4146 },
  {  105  ,  4134 },
  {  106  ,  4121 },
  {  105  ,  4108 },
  {  107  ,  4096 },
  {  107  ,  4084 },
  {  108  ,  4072 },
  {  108  ,  4060 },
  {  110  ,  4049 },
  {  111  ,  4038 },
  {  111  ,  4026 },
  {  113  ,  4015 },
  {  114  ,  4005 },
  {  116  ,  3995 },
  {  118  ,  3985 },
  {  119  ,  3975 },
  {  122  ,  3965 },
  {  124  ,  3955 },
  {  123  ,  3942 },
  {  116  ,  3927 },
  {  107  ,  3911 },
  {  104  ,  3899 },
  {  103  ,  3889 },
  {  101  ,  3880 },
  {  102  ,  3872 },
  {  101  ,  3865 },
  {  101  ,  3858 },
  {  102  ,  3851 },
  {  103  ,  3845 },
  {  103  ,  3839 },
  {  102  ,  3833 },
  {  103  ,  3828 },
  {  103  ,  3823 },
  {  104  ,  3818 },
  {  105  ,  3813 },
  {  105  ,  3808 },
  {  106  ,  3804 },
  {  107  ,  3800 },
  {  110  ,  3796 },
  {  110  ,  3793 },
  {  112  ,  3789 },
  {  114  ,  3786 },
  {  113  ,  3781 },
  {  110  ,  3776 },
  {  104  ,  3767 },
  {  103  ,  3758 },
  {  104  ,  3753 },
  {  105  ,  3747 },
  {  106  ,  3742 },
  {  105  ,  3737 },
  {  105  ,  3732 },
  {  107  ,  3728 },
  {  107  ,  3724 },
  {  107  ,  3719 },
  {  108  ,  3713 },
  {  106  ,  3706 },
  {  107  ,  3699 },
  {  107  ,  3692 },
  {  103  ,  3683 },
  {  102  ,  3679 },
  {  106  ,  3678 },
  {  110  ,  3676 },
  {  117  ,  3675 },
  {  122  ,  3671 },
  {  122  ,  3659 },
  {  114  ,  3622 },
  {  118  ,  3566 },
  {  125  ,  3489 },
  {  141  ,  3400 },
   {  141  ,  3400 },
    {  141  ,  3400 }
};

/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3*/
R_PROFILE_STRUCT r_profile_temperature[] = {
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};

/* ============================================================
// function prototype
// ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

//#endif

