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

#ifndef _CUST_BAT_H_
#define _CUST_BAT_H_

/* High battery support */
#define HIGH_BATTERY_VOLTAGE_SUPPORT

/* stop charging while in talking mode */
#define STOP_CHARGING_IN_TAKLING
#define TALKING_RECHARGE_VOLTAGE 3800
#define TALKING_SYNC_TIME		   60

#define BAT_LOW_TEMP_PROTECT_ENABLE
/* Battery Temperature Protection */
#define MTK_TEMPERATURE_RECHARGE_SUPPORT
#define MAX_CHARGE_TEMPERATURE  55
#define MAX_CHARGE_TEMPERATURE_MINUS_X_DEGREE	50
#define MIN_CHARGE_TEMPERATURE  0
#define MIN_CHARGE_TEMPERATURE_PLUS_X_DEGREE	5
#define ERR_CHARGE_TEMPERATURE  0xFF

/* sanford.lin 20150827 start battery_common.c*/
#define MTK_VOLTAGE_RECHARGE_SUPPORT
#define RECOVERY_CHARGING_VOLTAGE      6000
/* sanford.lin 20150827 end*/

/* Linear Charging Threshold */
#define V_PRE2CC_THRES	 		3400	//mV
#define V_CC2TOPOFF_THRES		4050

#ifdef HIGH_BATTERY_VOLTAGE_SUPPORT
#define RECHARGING_VOLTAGE      4260
#else
#define RECHARGING_VOLTAGE      4110
#endif

#define CHARGING_FULL_CURRENT    100

/* Charging Current Setting */
#define USB_CHARGER_CURRENT_SUSPEND			0
#define USB_CHARGER_CURRENT_UNCONFIGURED	CHARGE_CURRENT_70_00_MA
#define USB_CHARGER_CURRENT_CONFIGURED		CHARGE_CURRENT_500_00_MA

#define USB_CHARGER_CURRENT					CHARGE_CURRENT_500_00_MA
#define AC_CHARGER_CURRENT					CHARGE_CURRENT_1000_00_MA
#define NON_STD_AC_CHARGER_CURRENT			CHARGE_CURRENT_1000_00_MA
#define CHARGING_HOST_CHARGER_CURRENT       CHARGE_CURRENT_650_00_MA
#define APPLE_0_5A_CHARGER_CURRENT          CHARGE_CURRENT_500_00_MA
#define APPLE_1_0A_CHARGER_CURRENT          CHARGE_CURRENT_650_00_MA
#define APPLE_2_1A_CHARGER_CURRENT          CHARGE_CURRENT_800_00_MA


/* Precise Tunning */
#define BATTERY_AVERAGE_DATA_NUMBER	3
#define BATTERY_AVERAGE_SIZE 30

/* charger error check */
#define V_CHARGER_ENABLE 1				/* 1:ON , 0:OFF	*/
#define V_CHARGER_MAX 6500				/* 6.5 V	*/
#define V_CHARGER_MIN 4400				/* 4.4 V	*/

/* Tracking TIME */
#define ONEHUNDRED_PERCENT_TRACKING_TIME	10	/* 10 second	*/
#define NPERCENT_TRACKING_TIME 20	/* 20 second	*/
#define SYNC_TO_REAL_TRACKING_TIME 60	/* 60 second	*/
#define V_0PERCENT_TRACKING							3450 /*3450mV	*/

/* Battery Notify */
#define BATTERY_NOTIFY_CASE_0001_VCHARGER
#define BATTERY_NOTIFY_CASE_0002_VBATTEMP
/*
//#define BATTERY_NOTIFY_CASE_0003_ICHARGING
//#define BATTERY_NOTIFY_CASE_0004_VBAT
//#define BATTERY_NOTIFY_CASE_0005_TOTAL_CHARGINGTIME
*/

/* JEITA parameter */
/*#define MTK_JEITA_STANDARD_SUPPORT*/
#define CUST_SOC_JEITA_SYNC_TIME 30
#define JEITA_RECHARGE_VOLTAGE  4110	/* for linear charging */
#ifdef HIGH_BATTERY_VOLTAGE_SUPPORT
#define JEITA_TEMP_ABOVE_POS_60_CV_VOLTAGE		BATTERY_VOLT_04_240000_V
#define JEITA_TEMP_POS_45_TO_POS_60_CV_VOLTAGE		BATTERY_VOLT_04_240000_V
#define JEITA_TEMP_POS_10_TO_POS_45_CV_VOLTAGE		BATTERY_VOLT_04_340000_V
#define JEITA_TEMP_POS_0_TO_POS_10_CV_VOLTAGE		BATTERY_VOLT_04_240000_V
#define JEITA_TEMP_NEG_10_TO_POS_0_CV_VOLTAGE		BATTERY_VOLT_04_040000_V
#define JEITA_TEMP_BELOW_NEG_10_CV_VOLTAGE		BATTERY_VOLT_04_040000_V
#else
#define JEITA_TEMP_ABOVE_POS_60_CV_VOLTAGE		BATTERY_VOLT_04_100000_V
#define JEITA_TEMP_POS_45_TO_POS_60_CV_VOLTAGE	BATTERY_VOLT_04_100000_V
#define JEITA_TEMP_POS_10_TO_POS_45_CV_VOLTAGE	BATTERY_VOLT_04_200000_V
#define JEITA_TEMP_POS_0_TO_POS_10_CV_VOLTAGE	BATTERY_VOLT_04_100000_V
#define JEITA_TEMP_NEG_10_TO_POS_0_CV_VOLTAGE	BATTERY_VOLT_03_900000_V
#define JEITA_TEMP_BELOW_NEG_10_CV_VOLTAGE		BATTERY_VOLT_03_900000_V
#endif
/* For JEITA Linear Charging only */
#define JEITA_NEG_10_TO_POS_0_FULL_CURRENT  120
#define JEITA_TEMP_POS_45_TO_POS_60_RECHARGE_VOLTAGE  4000
#define JEITA_TEMP_POS_10_TO_POS_45_RECHARGE_VOLTAGE  4100
#define JEITA_TEMP_POS_0_TO_POS_10_RECHARGE_VOLTAGE   4000
#define JEITA_TEMP_NEG_10_TO_POS_0_RECHARGE_VOLTAGE   3800
#define JEITA_TEMP_POS_45_TO_POS_60_CC2TOPOFF_THRESHOLD	4050
#define JEITA_TEMP_POS_10_TO_POS_45_CC2TOPOFF_THRESHOLD	4050
#define JEITA_TEMP_POS_0_TO_POS_10_CC2TOPOFF_THRESHOLD	4050
#define JEITA_TEMP_NEG_10_TO_POS_0_CC2TOPOFF_THRESHOLD	3850


/* For CV_E1_INTERNAL */
#define CV_E1_INTERNAL

/* Disable Battery check for HQA */
#ifdef CONFIG_MTK_DISABLE_POWER_ON_OFF_VOLTAGE_LIMITATION
#define CONFIG_DIS_CHECK_BATTERY
#endif

#ifdef CONFIG_MTK_FAN5405_SUPPORT
#define FAN5405_BUSNUM 1
#endif

#define MTK_PLUG_OUT_DETECTION

#endif /* _CUST_BAT_H_ */
