//
//  TDIniData.h
//  TDMachine
//
//  Created by 何伟东 on 2017/4/9.
//  Copyright © 2017年 腾达二手机. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TDIniData : NSObject

/**
 车源情况
 */
@property(nonatomic,strong) NSMutableDictionary *CAR_BZ_SECTION_MAP;

/**
 使用小时
 */
@property(nonatomic,strong) NSMutableDictionary *CAR_HOUR_SECTION_MAP;

/**
 价格
 */
@property(nonatomic,strong) NSMutableDictionary *CAR_PRICE_SECTION_MAP;

/**
 排序
 */
@property(nonatomic,strong) NSMutableDictionary *CAR_SORT_MAP;

/**
 购买年数
 */
@property(nonatomic,strong) NSMutableDictionary *CAR_YEAR_SECTION_MAP;

/*
{
    "CAR_BZ_SECTION_MAP" =     {
        0 = "真实车源";
        1 = "产权清晰";
        2 = "检测齐全";
        3 = "非事故车";
        4 = "非翻新车";
        5 = "非大修车";
        6 = "未进行破碎作业";
        7 = "未进行石方作业";
    };
    "CAR_HOUR_SECTION_MAP" =     {
        0 = "2000以内";
        1 = "2000（含）-5000";
        2 = "5000（含）-8000";
        3 = "8000以上";
    };
    "CAR_PRICE_SECTION_MAP" =     {
        0 = "0-10万";
        1 = "10（含）-30万";
        2 = "30（含）-50万";
        3 = "50（含）-80万";
        4 = "80万以上";
    };
    "CAR_SORT_MAP" =     {
        0 = "按发布时间";
        1 = "按价格最低";
        2 = "按价格最高";
        3 = "按小时数";
        4 = "按出厂年限";
    };
    "CAR_YEAR_SECTION_MAP" =     {
        0 = "1年以下";
        1 = "1（含）-2年";
        2 = "2（含）-3年";
        3 = "3年以上";
    };
    TOKEN = 4c6eee31f45d7a6a51145219b914341d;
}
 */

@end
