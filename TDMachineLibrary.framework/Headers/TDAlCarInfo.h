//
//  TDAlCarInfo.h
//  TDMachine
//
//  Created by 何伟东 on 2017/4/9.
//  Copyright © 2017年 腾达二手机. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TDCarModel.h"
#import "TDCarBrand.h"
#import "TDCarType.h"

@interface TDAlCarInfo : NSObject
@property(nonatomic,strong) NSMutableArray<TDCarType*> *carTypeArray;
@property(nonatomic,strong) NSMutableArray<TDCarBrand*> *carBrandArray;
@property(nonatomic,strong) NSMutableArray<TDCarModel*> *carModelArray;



@end
