//
//  TDCar.h
//  TDMachine
//
//  Created by 何伟东 on 2017/4/15.
//  Copyright © 2017年 腾达二手机. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TDCarPicture.h"
@class TDUser;
@interface TDCar : NSObject
@property(nonatomic,strong) NSString *ADDRESS;
@property(nonatomic,strong) NSString *AUDITNOTE;

/**
 状态
 */
@property(nonatomic,strong) NSString *AUDITSTATUS;
@property(nonatomic,strong) NSString *BROWSENUM;
@property(nonatomic,strong) NSString *BUSINESSPRICE;
@property(nonatomic,strong) NSString *CARBRANDNAME;
@property(nonatomic,strong) NSString *CARBRAND_ID;
@property(nonatomic,strong) NSString *CARMODELNUMNAME;
@property(nonatomic,strong) NSString *CARMODELNUM_ID;
@property(nonatomic,strong) NSString *CARTYPENAME;
@property(nonatomic,strong) NSString *CARS_CODE;
@property(nonatomic,strong) NSString *CARS_ID;
@property(nonatomic,strong) NSString *CARTYPE_ID;
@property(nonatomic,strong) NSMutableArray *CERTLIST;
@property(nonatomic,strong) NSString *CITY;
@property(nonatomic,strong) NSString *CONTACTNAME;
@property(nonatomic,strong) NSString *CONTACTTEL;
@property(nonatomic,strong) NSString *DESCRIBES;
@property(nonatomic,strong) NSString *DISTRICT;
@property(nonatomic,strong) NSString *EXPERIENCE;
@property(nonatomic,strong) NSString *FACTORYDATE;
@property(nonatomic,strong) NSString *IDENTITY;
@property(nonatomic,assign) BOOL ISLEASE;
@property(nonatomic,strong) NSString *LEASEPRICE;
@property(nonatomic,assign) BOOL ISCOLLECTION;

/**
 TDCarPicture
 */
@property(nonatomic,strong) NSMutableArray *PICLIST;
@property(nonatomic,strong) NSString *PROVINCE;
@property(nonatomic,strong) NSString *SALESSTATUS;
@property(nonatomic,strong) NSString *SEE;
@property(nonatomic,strong) NSString *UPDATEDATE;
@property(nonatomic,strong) NSString *USEHOUR;
@property(nonatomic,strong) NSString *USERID;
@property(nonatomic,strong) TDUser *USERINFO;

@property(nonatomic,strong) NSMutableArray *CARLIST;




@end
