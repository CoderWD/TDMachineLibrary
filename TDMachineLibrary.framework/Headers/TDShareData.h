//
//  TDShareData.h
//  TDMachine
//
//  Created by 何伟东 on 2017/4/9.
//  Copyright © 2017年 腾达二手机. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TDHotCarType.h"
#import "TDHotCarBrand.h"
#import "TDCarModel.h"
#import "TDCarBrand.h"
#import "TDCarType.h"
#import "TDAlCarInfo.h"
#import "TDIniData.h"
#import "TDProviceCity.h"

@interface TDShareData : NSObject

+(TDShareData*)shareInstance;

@property(nonatomic,strong) NSMutableArray *proviceCitys;
@property(nonatomic,strong) TDIniData *iniData;
@property(nonatomic,strong) NSMutableArray<TDHotCarType*>* hotCarTypeArray;
@property(nonatomic,strong) NSMutableArray<TDHotCarType*>* hotCarBrandArray;
@property(nonatomic,strong) TDAlCarInfo *allCarInfo;

/**
 热门车型
 
 @param block <#block description#>
 */
-(void)hotCarTypeInBackground:(void(^)(NSMutableArray<TDHotCarType*>* hotCarTypeArray,NSError *error))block;

/**
 热门品牌
 
 @param block <#block description#>
 */
-(void)hotCarBrandInBackground:(void(^)(NSMutableArray<TDHotCarType*>* hotCarBrandArray,NSError *error))block;


/**
 车辆信息

 @param block <#block description#>
 */
-(void)allCarInfoPropertyInBackground:(void(^)(TDAlCarInfo *allCarInfo,NSError *error))block;


/**
 区间数据
 
 @param block <#block description#>
 */
-(void)iniDataInBackground:(void(^)(TDIniData *iniData,NSError *error))block;


/**
 城市信息
 
 @param block <#block description#>
 */
-(void)provinceAndCitysInBackground:(void(^)(NSMutableArray<TDProviceCity*> *proviceCitys,NSError *error))block;

@end
